#include<iostream>
#include"stdafx.h"
#include<string>
#include<fstream>
#include"log.h"
#include"book.h"
#include"stdafx.h"
using namespace std;
void encrypt(char *pwd)//传入地址，函数虽然为void，但是修改作用于地址内地值，因此相当于对pwd做出修改！！
{
	for (int i = 0; i < strlen(pwd); i++)
		pwd[i] ^= 15;
}
struct loginfo *login(loginfo *user)//输入及登入（含判断！）
{
	do
	{
		user = (struct loginfo*)malloc(sizeof(struct loginfo));//malloc默认void *,动态分配内存！
		cout << "请输入用户名：" << endl;
		cin >> user->Username;
		if (strcmp(user->Username, "0") == 0)//输入0退出！！
		{
			free(user);
			return NULL;
		}
		cout << "请输入密码：" << endl;
		cin >> user->password;
		encrypt(user->password);//密码加密！
								//传入地址，函数虽然为void，但是修改作用于地址里面的值！因此相当于对pwd做出修改！！
		if (!Checkuser(user))
			cout << "用户不合法！" << endl;
	} while (!Checkuser(user));
	cout << "用户登入成功！" << endl;
	system("pause");
	return user;
}
int Checkuser(struct loginfo *user)//返回0时用户不合法，返回1时用户合法（存在）！
{
	FILE *fp;
	int check = 0;
	int booknum;
	char fname[maxlength], fpwd[maxlength];
	if ((fp= fopen("图书管理系统\\userinfo.txt", "r"))==NULL)
	{
		cout << "文件打开失败！！";
		system("pause");
		exit(0);
	}
	while (!feof(fp))
	{
		fscanf(fp,"%s", fname);
		fscanf(fp, "%s", fpwd);
		fscanf(fp, "%d", &booknum);
		if (strcmp(fname, user->Username) == 0 && strcmp(fpwd, user->password) == 0)
		{
			user->borrownum = booknum;
			check = 1;
			break;
		}
	}
	fclose(fp);
	return check;
}
int Checkusername(char *username)
{
	FILE *fp;
	int check = 0;//默认没有重复注册！
	int booknum;
	char fname[maxlength], fpwd[maxlength];
	if ((fp = fopen("图书管理系统\\userinfo.txt", "r")) == NULL)
	{
		cout << "文件打开失败！！";
		system("pause");
		exit(0);
	}
	while (!feof(fp))
	{
		fscanf(fp, "%s", fname);
		fscanf(fp, "%s", fpwd);
		fscanf(fp, "%d", &booknum);
		if (strcmp(fname,username) == 0)
		{
			//重复注册！
			check = 1;
			break;
		}
	}
	fclose(fp);
	return check;
}
void Createuser()//创建一个用户并且把信息输入到userinfo.txt中，创建用户需要管理员权限，且新用户没有管理员权限！
{
	fstream fp;
	fp.open("图书管理系统\\userinfo.txt", ios::app);
	if (!fp.is_open())
	{
		printf("Can't open file!\n");
		system("pause");
		exit(0);
	}
	char fname[maxlength], fpwd[maxlength];
	int booknum;
	fname[0] = '0';//第一次标记！
	while (1)
	{
		cout << "请输入你想创建的用户名、用户密码:" << endl;
		cin >> fname >> fpwd;
		booknum = 0;
		if (fname[0] == '0')
			break;
		//识别重复注册！！
		if (Checkusername(fname))//需要利用Checkuser判断重复，但是需要反过来用！
		{
			cout << "重复注册！" << endl;
			continue; 
		}
		for (int i = 0; i < strlen(fpwd); i++)
			fpwd[i] ^= 15;
		fp <<endl<<fname << ' ' << fpwd << ' ' << booknum;
		cout << "成功创建用户！" << endl;
	}
	fp.close();
}
Tree borrower(Tree T, loginfo *user,char *name)//借书！
{
	if (T == NULL)
	{
		cout << "不存在该书！" << endl;
		return NULL;
	}
	else
	{
		if (strcmp(name, T->name) < 0)
			T->Left = borrower(T->Left, user, name);
		else if (strcmp(name, T->name) > 0)
			T->Right = borrower(T->Right, user, name);
		else//此时查找成功！
		{
			if (strcmp(T->Borrow, "0") != 0)
				cout << "书本已经被" << T->Borrow << "借走！" << endl;
			else
			{
				//标记书给谁借走了！
				strcpy(T->Borrow, user->Username);
				cout << user->Username << "成功借走" << T->name << endl;
				user->borrownum++;//用户借的书+1！
				refreshuserdata(user);//更新用户信息！
			}
		}
		return T;//在最外层返回T，这样，从目标返回根路径的时候，每返回一层就更新一次，把节点指向都更新完毕！
	}
}
Tree returner(Tree T, loginfo *user)
{//gets函数可以无限读，puts函数可以写入！
	Tree Temp;
	char name[maxlength];
	cout << "你已经借走的书：" << endl;
	FindBorrow(T, user);//显示已经借走的书！
	//接下来开始还书！
	while (user->borrownum)//输入0可以强制退出！
	{
		cout << "请输入你想还的书籍：" << endl;
		cin.getline(name, maxlength);// or gets(name);
		if (strcmp(name, "0") == 0) break;
		Temp = FindPos(T, name, user);//将更新后的结果返回到T中保存！
		if (Temp != NULL)//不为空则更新用户信息！
		{
			T = Temp;
			user->borrownum--;
			refreshuserdata(user);
		}
	}
	return T;
}
Tree FindPos(Tree T, char *name,loginfo *user)//与借书相关联，找出该书并还书！
{
	if (T == NULL)
	{
		cout << "没有找到" << name << endl;
		return NULL;//不存在的时候没有指向！
	}
	else
	{
		if (strcmp(name, T->name) < 0)
			T->Left = FindPos(T->Left, name,user);
		if (strcmp(name, T->name) > 0)
			T->Right = FindPos(T->Right, name, user);
		else
		{//找到了那本书！
			if (T->Borrow == NOT_BORROWED || strcmp(T->Borrow, "0") == 0)
				cout << T->name << "已经在图书馆里面！" << endl;
			else if (strcmp(T->Borrow, user->Username) != 0)
			{
				cout << T->name << "已经被" << T->Borrow << "借走，无需您归还" << endl;
				return NULL;
			}
			else
			{
				strcpy(T->Borrow, NOT_BORROWED);
				cout << "用户:" << user->Username << "成功归还" << T->name << endl;
			}
		}
		return T;//存在的时候往上一直更新到根节点！！
	}
}
void FindBorrow(Tree T, loginfo *user)
{//找出借书的人！
	if (T == NULL)
		return;
	else
	{
		if (strcmp(T->Borrow, user->Username) == 0)//找到了书对应的借书人！
			puts(T->name);//等价于cout<<T->Borrow<<endl; 输出被该人借出的书本！
		FindBorrow(T->Left, user);
		FindBorrow(T->Right, user);
	}
}
void refreshuserdata(loginfo *user)//将更新之后的信息输出到userinfo.txt中！
{//采用输入输出流！要使用fseek和ftell函数！
	FILE *fp;
	char name[maxlength], password[maxlength];
	int booknum;
	if ((fp = fopen("图书管理系统\\userinfo.txt", "r+")) == NULL)//“r+”即可读又可写！
	{
		cout << "打开文件失败！" << endl;
		exit(0);
	}
	while (!feof(fp))//当文件读到EOF时返回真！然后！真为假
	{
		fscanf(fp, "%s", name);//读入
		if (strcmp(name, user->Username) == 0)
		{
			fscanf(fp, "%s", password);
			/*写入之前先指定写入指针！
			理由：读入指针与写入指针是分开的,指定写入指针的时候使用fseek指针！*/
			fseek(fp, ftell(fp) + 1, SEEK_SET);
			fprintf(fp, "%d\n", user->borrownum);//user为指针类型，因此user->borrownum已经为地址，不需要再用&！！！
			//写入完成之后，记得退出循环！
			break;
		}
		fscanf(fp, "%s%d", password, &booknum);//booknum为int类型！因此需要用&来传递地址！
	}
	//完成操作之后关闭文件！
	fclose(fp);
}