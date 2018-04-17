#pragma once
#ifndef BOOK
#define BOOK
//�����йصĲ�������������ͼ�顢���飨���������������飨���������������ң����ѣ�����ӡ������
//ɾ���鱾  Load�����飩�����ڽ����µ���Ϣ��ȡ������
#define NOT_BORROWED "0"
const int maxlength = 30;
typedef struct SearchTree *Tree;
Tree create();
Tree Insert(Tree T, int num, char *name, char borrow[]);
void Find(Tree T, char *name);//���ң�
Tree Findmin(Tree T);
Tree Findmax(Tree T);
void print(Tree T);
Tree Delete(Tree T,char *name);
void SaveTree(Tree T, FILE *fp);
Tree LoadTree(Tree T);
Tree EmptyBook(Tree T);//��������鼮����
typedef struct SearchTree//������Կ��Ǽ������ڵȵȣ���
{
	int num;//���
	char name[maxlength];//����
	char Borrow[30];//���������֣�δ�����Ϊ"0"��
	Tree Right;
	Tree Left;
};
#endif
