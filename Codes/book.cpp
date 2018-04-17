#include "stdafx.h"
#include <stdlib.h>
#include<iostream>
#include"book.h"
#include"log.h"
#include"stdafx.h"
//�����йصĲ�������������ͼ�顢���飨���������������飨���������������ң����ѣ�����ӡ������
//ɾ���鱾  Load�����飩�����ڽ����µ���Ϣ��ȡ������ savetree �����е���Ϣ��ӡ��txt�У�
using namespace std;
Tree create()//������
{
	Tree T = NULL;
	int num;
	char name[maxlength];
	cout << "�������������Լ����֣�" << endl;
	cin >> num;
	cin.ignore();
	cin.getline(name, maxlength);
	while (num > 0)//num<=0��ʱ���˳���
	{
		T = Insert(T, num, name, NOT_BORROWED);
		cout << "�������������Լ����֣�" << endl;
		cin >> num;
		cin.getline(name, maxlength);
	}
	return T;
}
Tree Insert(Tree T, int num, char *name, char borrow[])//��������Ϣ��
{
	if (num < 0)//�����򷵻�
		return T;
	if (name[0] == ' ')
		name++;//����Ϊ�����ַ+1��������һ��name�Ķ�ȡ
	if (T != NULL)
	{
		if (strcmp(name, T->name) < 0)//�������������ֵ���С�ڵ�ǰ���ڵ���ֵ��򣬽�������(dfs)
			T->Left = Insert(T->Left, num, name, borrow);
		if (strcmp(name, T->name) > 0)
			T->Right = Insert(T->Right, num, name, borrow);//���򣬽����ҽ�㣡
	}
	else//����Ҷ�ӽ�㣡�������!(���߸��ڵ㣡)
	{
		T = (Tree)malloc(sizeof(SearchTree));//new���䲻��...��Ϊ����ָ�����ͣ��ʲ���malloc
		T->num = num;
		strcpy(T->name, name);
		strcpy(T->Borrow, borrow);
		T->Left = T->Right = NULL;
	}
	return T;
}
void print(Tree T)//���������
{//�������ӡ��
	if (T != NULL)
	{
		print(T->Left);//һ�߱���һ�ߴ�ӡ��
		cout << T->num << "\t" << T->name << '\t' << ((strcmp(T->Borrow, NOT_BORROWED) == 0) ? "��ͼ�����" : "�Ѿ����") << endl;//0Ϊδ�����1Ϊ�����
		print(T->Right);//������ң����������
	}
}
/*void Find(Tree T,char *name)//���Ҳ���ӡ
{
	if (T == NULL)//��һ���Ѿ�ΪҶ�ӽ�㣡
		return;
	else if (strcmp(name, T->name) < 0)//�鱾�ֵ���С�ڸ��ڵ�
		return Find(T->Left, name);
	else if (strcmp(name, T->name) > 0)
		return Find(T->Right, name);
	else
	{
		cout << T->num << "\t" << T->name << '\t' << ((strcmp(T->Borrow, NOT_BORROWED) == 0) ? "��ͼ�����" : "�Ѿ����") << endl;//0Ϊδ�����1Ϊ�����
		if (strcmp(name, T->name) == 0)
			return;
		Find(T->Left, name);
		Find(T->Right, name);
	}
	return;
}*/
//Find����������bug��������������������
void Find(Tree T, char *name)//���Ҳ���ӡ
{
	if (T == NULL)//��һ���Ѿ�ΪҶ�ӽ�㣡
	{
		cout << "���޴��飡" << endl;
		return;
	}
	else if (strcmp(name, T->name) < 0)//�鱾�ֵ���С�ڸ��ڵ�
		Find(T->Left, name);
	else if (strcmp(name, T->name) > 0)
		Find(T->Right, name);
	else if(strcmp(name,T->name)==0)
	{
		cout << T->num << "\t" << T->name << '\t' << ((strcmp(T->Borrow, NOT_BORROWED) == 0) ? "��ͼ�����" : "�Ѿ����") << endl;//0Ϊδ�����1Ϊ�����
	}
	return;
}
//��ʹ��fstream ���ں�����ʹ�ã���Ƶ���򿪹ر��ļ����˷�ʱ�䣻���ں�����ʹ�ã����޷����Σ��ʲ�����ͬ���ܵ�FILE *
void SaveTree(Tree T,FILE *fp)//���ڴ��������Ϣ��ӡ��txt�����������
{
	if (T != NULL)
	{
		SaveTree(T->Left, fp);
		fprintf(fp, "%d %s %s\n", T->num, T->Borrow, T->name);
		SaveTree(T->Right, fp);//�������
	}
}
Tree Findmin(Tree T)//������СԪ�أ�
{//���ɣ�С��������������һֱ�����Ҽ��ɣ�
	if (T != NULL)
		while (T->Left != NULL)
			T = T->Left;
	return T;
}
/*��һ��д��
Tree Findmin(Tree T)
{
if(T->Left!=NULL)
T=Findmin(T->Left);
else
return T;
}
*/
Tree Findmax(Tree T)
{
	if (T != NULL)
		while (T->Right != NULL)
			T = T->Right;
	return T;
}
Tree Delete(Tree T, char *name)//ɾ����㣡��3�������ɾ���������ӽ�㡢ɾ��һ�����ӽ�㡢ɾ�����ӽڵ�Ľ�㣡
{
	Tree Temp;
	if (T == NULL)
	{
		cout << "�������Ȿ�飡" << endl;
		return NULL;
	}
	else if (strcmp(name, T->name) > 0)//��delete֮���״̬���µ�T->right����left��
		T->Right = Delete(T->Right, name);
	else if (strcmp(name, T->name) < 0)
		T->Left = Delete(T->Left, name);
	else
	{
		//ɾ���������ӵĽ�㣡
		if (T->Left != NULL&&T->Right != NULL)
		{
			Temp = Findmin(T->Right);//����Findmax(T->left)!
			strcpy(T->name, Temp->name);
			T->num = Temp->num;
			T->Right = Delete(T->Right, name);
		}
		else //ɾ��ֻ��һ�����ӻ���û�ж��ӵĽ�㣡
		{
				Temp = T;//��temp����T��ָ�룩ԭ���ĵ�ַ��
				if (T->Left)//���������Ϊ�գ�
					T = T->Left;//�������ӻ�ȥԭ����λ�ã����ǣ�
				else if (T->Right)
					T = T->Right;//��������Ϊ�գ�����ԭ����T��
				else//����������Ϊ�գ����ͷſռ�֮ǰ�ǵ��ø�Ҷ�ӽ���ֵָ��NULL����T��ֵΪNULL�� 
					T = NULL;
				free(Temp);//ͨ��temp��ַ������ͷ�T�Ŀռ䣡��
		}
		cout << "�ɹ�ɾ����" << endl;
	}
	return T;//�����޸ĺ������
}
Tree LoadTree(Tree T)
{//��ȡtxt���ݣ�
 //�����ǲ����ܴ����ģ��Ⱳ�Ӷ������ܴ�����.
	FILE *fp;
	int num; char borrow[maxlength]; char name[maxlength];
	if ((fp = fopen("book.txt", "r")) == NULL)
	{
		printf("Can't open file!\n");
		system("pause");
		return NULL;
	}
	fscanf(fp, "%d %s ", &num, borrow);
	fgets(name, maxlength, fp);
	name[strlen(name) - 1] = '\0';
	if (T == NULL)
	{
		T = (Tree)malloc(sizeof(SearchTree));
		T->Left = T->Right = NULL;
		strcpy(T->Borrow, borrow);
		strcpy(T->name, name);
		T->num = num;
	}//�����Ϊ���򴴽����ڵ㣡
	while (!feof(fp))//����Ϊ�������Insert������
	{
		T = Insert(T, num, name, borrow);//����
		fscanf(fp, "%d %s ", &num, borrow);//������txt��ȡ��һ��������ݣ�
		fgets(name, maxlength, fp);
		name[strlen(name) - 1] = '\0';
	}
	fclose(fp);
	return T;
}
Tree EmptyBook(Tree T)//ɾ�������ӽڵ㣡
{
	if (T != NULL)
	{
		EmptyBook(T->Left);
		EmptyBook(T->Right);
		free(T);
	}
	return NULL;
}
