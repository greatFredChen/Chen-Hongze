#include<iostream>
#include"stdafx.h"
#include<string>
#include<fstream>
#include"log.h"
#include"book.h"
#include"stdafx.h"
using namespace std;
void encrypt(char *pwd)//�����ַ��������ȻΪvoid�������޸������ڵ�ַ�ڵ�ֵ������൱�ڶ�pwd�����޸ģ���
{
	for (int i = 0; i < strlen(pwd); i++)
		pwd[i] ^= 15;
}
struct loginfo *login(loginfo *user)//���뼰���루���жϣ���
{
	do
	{
		user = (struct loginfo*)malloc(sizeof(struct loginfo));//mallocĬ��void *,��̬�����ڴ棡
		cout << "�������û�����" << endl;
		cin >> user->Username;
		if (strcmp(user->Username, "0") == 0)//����0�˳�����
		{
			free(user);
			return NULL;
		}
		cout << "���������룺" << endl;
		cin >> user->password;
		encrypt(user->password);//������ܣ�
								//�����ַ��������ȻΪvoid�������޸������ڵ�ַ�����ֵ������൱�ڶ�pwd�����޸ģ���
		if (!Checkuser(user))
			cout << "�û����Ϸ���" << endl;
	} while (!Checkuser(user));
	cout << "�û�����ɹ���" << endl;
	system("pause");
	return user;
}
int Checkuser(struct loginfo *user)//����0ʱ�û����Ϸ�������1ʱ�û��Ϸ������ڣ���
{
	FILE *fp;
	int check = 0;
	int booknum;
	char fname[maxlength], fpwd[maxlength];
	if ((fp= fopen("ͼ�����ϵͳ\\userinfo.txt", "r"))==NULL)
	{
		cout << "�ļ���ʧ�ܣ���";
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
	int check = 0;//Ĭ��û���ظ�ע�ᣡ
	int booknum;
	char fname[maxlength], fpwd[maxlength];
	if ((fp = fopen("ͼ�����ϵͳ\\userinfo.txt", "r")) == NULL)
	{
		cout << "�ļ���ʧ�ܣ���";
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
			//�ظ�ע�ᣡ
			check = 1;
			break;
		}
	}
	fclose(fp);
	return check;
}
void Createuser()//����һ���û����Ұ���Ϣ���뵽userinfo.txt�У������û���Ҫ����ԱȨ�ޣ������û�û�й���ԱȨ�ޣ�
{
	fstream fp;
	fp.open("ͼ�����ϵͳ\\userinfo.txt", ios::app);
	if (!fp.is_open())
	{
		printf("Can't open file!\n");
		system("pause");
		exit(0);
	}
	char fname[maxlength], fpwd[maxlength];
	int booknum;
	fname[0] = '0';//��һ�α�ǣ�
	while (1)
	{
		cout << "���������봴�����û������û�����:" << endl;
		cin >> fname >> fpwd;
		booknum = 0;
		if (fname[0] == '0')
			break;
		//ʶ���ظ�ע�ᣡ��
		if (Checkusername(fname))//��Ҫ����Checkuser�ж��ظ���������Ҫ�������ã�
		{
			cout << "�ظ�ע�ᣡ" << endl;
			continue; 
		}
		for (int i = 0; i < strlen(fpwd); i++)
			fpwd[i] ^= 15;
		fp <<endl<<fname << ' ' << fpwd << ' ' << booknum;
		cout << "�ɹ������û���" << endl;
	}
	fp.close();
}
Tree borrower(Tree T, loginfo *user,char *name)//���飡
{
	if (T == NULL)
	{
		cout << "�����ڸ��飡" << endl;
		return NULL;
	}
	else
	{
		if (strcmp(name, T->name) < 0)
			T->Left = borrower(T->Left, user, name);
		else if (strcmp(name, T->name) > 0)
			T->Right = borrower(T->Right, user, name);
		else//��ʱ���ҳɹ���
		{
			if (strcmp(T->Borrow, "0") != 0)
				cout << "�鱾�Ѿ���" << T->Borrow << "���ߣ�" << endl;
			else
			{
				//������˭�����ˣ�
				strcpy(T->Borrow, user->Username);
				cout << user->Username << "�ɹ�����" << T->name << endl;
				user->borrownum++;//�û������+1��
				refreshuserdata(user);//�����û���Ϣ��
			}
		}
		return T;//������㷵��T����������Ŀ�귵�ظ�·����ʱ��ÿ����һ��͸���һ�Σ��ѽڵ�ָ�򶼸�����ϣ�
	}
}
Tree returner(Tree T, loginfo *user)
{//gets�����������޶���puts��������д�룡
	Tree Temp;
	char name[maxlength];
	cout << "���Ѿ����ߵ��飺" << endl;
	FindBorrow(T, user);//��ʾ�Ѿ����ߵ��飡
	//��������ʼ���飡
	while (user->borrownum)//����0����ǿ���˳���
	{
		cout << "���������뻹���鼮��" << endl;
		cin.getline(name, maxlength);// or gets(name);
		if (strcmp(name, "0") == 0) break;
		Temp = FindPos(T, name, user);//�����º�Ľ�����ص�T�б��棡
		if (Temp != NULL)//��Ϊ��������û���Ϣ��
		{
			T = Temp;
			user->borrownum--;
			refreshuserdata(user);
		}
	}
	return T;
}
Tree FindPos(Tree T, char *name,loginfo *user)//�������������ҳ����鲢���飡
{
	if (T == NULL)
	{
		cout << "û���ҵ�" << name << endl;
		return NULL;//�����ڵ�ʱ��û��ָ��
	}
	else
	{
		if (strcmp(name, T->name) < 0)
			T->Left = FindPos(T->Left, name,user);
		if (strcmp(name, T->name) > 0)
			T->Right = FindPos(T->Right, name, user);
		else
		{//�ҵ����Ǳ��飡
			if (T->Borrow == NOT_BORROWED || strcmp(T->Borrow, "0") == 0)
				cout << T->name << "�Ѿ���ͼ������棡" << endl;
			else if (strcmp(T->Borrow, user->Username) != 0)
			{
				cout << T->name << "�Ѿ���" << T->Borrow << "���ߣ��������黹" << endl;
				return NULL;
			}
			else
			{
				strcpy(T->Borrow, NOT_BORROWED);
				cout << "�û�:" << user->Username << "�ɹ��黹" << T->name << endl;
			}
		}
		return T;//���ڵ�ʱ������һֱ���µ����ڵ㣡��
	}
}
void FindBorrow(Tree T, loginfo *user)
{//�ҳ�������ˣ�
	if (T == NULL)
		return;
	else
	{
		if (strcmp(T->Borrow, user->Username) == 0)//�ҵ������Ӧ�Ľ����ˣ�
			puts(T->name);//�ȼ���cout<<T->Borrow<<endl; ��������˽�����鱾��
		FindBorrow(T->Left, user);
		FindBorrow(T->Right, user);
	}
}
void refreshuserdata(loginfo *user)//������֮�����Ϣ�����userinfo.txt�У�
{//���������������Ҫʹ��fseek��ftell������
	FILE *fp;
	char name[maxlength], password[maxlength];
	int booknum;
	if ((fp = fopen("ͼ�����ϵͳ\\userinfo.txt", "r+")) == NULL)//��r+�����ɶ��ֿ�д��
	{
		cout << "���ļ�ʧ�ܣ�" << endl;
		exit(0);
	}
	while (!feof(fp))//���ļ�����EOFʱ�����棡Ȼ����Ϊ��
	{
		fscanf(fp, "%s", name);//����
		if (strcmp(name, user->Username) == 0)
		{
			fscanf(fp, "%s", password);
			/*д��֮ǰ��ָ��д��ָ�룡
			���ɣ�����ָ����д��ָ���Ƿֿ���,ָ��д��ָ���ʱ��ʹ��fseekָ�룡*/
			fseek(fp, ftell(fp) + 1, SEEK_SET);
			fprintf(fp, "%d\n", user->borrownum);//userΪָ�����ͣ����user->borrownum�Ѿ�Ϊ��ַ������Ҫ����&������
			//д�����֮�󣬼ǵ��˳�ѭ����
			break;
		}
		fscanf(fp, "%s%d", password, &booknum);//booknumΪint���ͣ������Ҫ��&�����ݵ�ַ��
	}
	//��ɲ���֮��ر��ļ���
	fclose(fp);
}