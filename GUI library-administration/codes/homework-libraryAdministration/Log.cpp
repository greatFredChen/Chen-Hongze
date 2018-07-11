#include<iostream>
#include<string>
#include<fstream>
#include"Log.h"
#include"Book.h"
using namespace std;
void encrypt(char *pwd)//传入地址，函数虽然为void，但是修改作用于地址内地值，因此相当于对pwd做出修改！！
{
    for (int i = 0; i < strlen(pwd); i++)
        pwd[i] ^= 15;
}
/*struct loginfo *login(loginfo *user)//输入及登入（含判断！）
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
}*/
int Checkuser(struct loginfo *user)//返回0时用户不合法，返回1时用户合法（存在）！
{
    FILE *fp;
    int check = 0;
    int booknum;
    char fname[maxlength], fpwd[maxlength];
    if ((fp= fopen("D:/userinfo.txt", "r"))==NULL)
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
    if ((fp = fopen("D:/userinfo.txt", "r")) == NULL)
    {
        cout << "文件打开失败！！";
        system("pause");
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
int Createuser(char fname[],char fpwd[])//创建一个用户并且把信息输入到userinfo.txt中，创建用户需要管理员权限，且新用户没有管理员权限！
{
    fstream fp;
    fp.open("D:/userinfo.txt", ios::app);
    if (!fp.is_open())
    {
        printf("Can't open file!\n");
        system("pause");
        exit(0);
    }
    int booknum=0;
    //识别重复注册！!
    if (Checkusername(fname))//需要利用Checkuser判断重复，但是需要反过来用！
        return 0;//创建失败！重复注册！
    for (int i = 0; i < strlen(fpwd); i++)
         fpwd[i] ^= 15;
    fp<<fname << ' ' << fpwd << ' ' << booknum<<endl;
    fp.close();
    return 1;//成功创建!
}
Tree borrower(Tree T, loginfo *user, char *name, int &flag)//借书！
{
    if (T == NULL)
    {
        flag=0;
        return NULL;
    }
    else
    {
        if (strcmp(name, T->name) < 0)
            T->Left = borrower(T->Left, user, name,flag);
        else if (strcmp(name, T->name) > 0)
            T->Right = borrower(T->Right, user, name,flag);
        else//此时查找成功！
        {
            if (strcmp(T->Borrow, "0") != 0)
                flag=1;
            else
            {
                //标记书给谁借走了！
                strcpy(T->Borrow, user->Username);
                flag=2;
                user->borrownum++;//用户借的书+1！
                refreshuserdata(user);//更新用户信息！
            }
        }
        return T;//在最外层返回T，这样，从目标返回根路径的时候，每返回一层就更新一次，把节点指向都更新完毕！
    }
}
Tree returner(Tree T, loginfo *user, int &flag, char name[])
{//gets函数可以无限读，puts函数可以写入！
    Tree Temp;
    //接下来开始还书！
    Temp = FindPos(T, name, user,flag);//将更新后的结果返回到T中保存！
    if (flag==3)//flag==3说明成功归还书本，则进行更新！
    {
        T = Temp;
        user->borrownum--;//由于是一本本归还，因此只需要对借书数-1！
        refreshuserdata(user);//更新用户数据
    }
    return T;
}
Tree FindPos(Tree T, char name[],loginfo *user,int &flag)//与借书相关联，找出该书并还书！（注意保持类型一致！！）
{
    if (T == NULL)
    {
        flag=0;
        return NULL;//不存在的时候没有指向！
    }
    else
    {
        if (strcmp(name, T->name) < 0)
            T->Left = FindPos(T->Left, name,user,flag);
        if (strcmp(name, T->name) > 0)
            T->Right = FindPos(T->Right, name, user,flag);
        else if(strcmp(name,T->name)==0)
        {//找到了那本书！
            if (strcmp(T->Borrow, "0") == 0)
                flag=4;//已经在图书馆中
            else if (strcmp(T->Borrow, user->Username) != 0)
            {
                flag=2;//被其他人借走!
            }
            else
            {
                strcpy(T->Borrow, NOT_BORROWED);
                flag=3;//成功归还！
            }
        }
        return T;//存在的时候往上一直更新到根节点！！
    }
}
void FindBorrow(Tree T, loginfo *user,string &findborrow)//利用string引用,储存找到的书的书名！
{//找出借书的人！
    if (T == NULL)
        return;
    else
    {
        if (strcmp(T->Borrow, user->Username) == 0)//找到了书对应的借书人！
        {
            findborrow+=T->name;
            findborrow+=";";
        }
        FindBorrow(T->Left, user,findborrow);
        FindBorrow(T->Right, user,findborrow);
    }
}
void refreshuserdata(loginfo *user)//将更新之后的信息输出到userinfo.txt中！
{//采用输入输出流！要使用fseek和ftell函数！
    FILE *fp;
    char name[maxlength], password[maxlength];
    int booknum;
    if ((fp = fopen("D:/userinfo.txt", "r+")) == NULL)//“r+”即可读又可写！
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
