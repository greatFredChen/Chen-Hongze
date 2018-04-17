#pragma once
#ifndef BOOK
#define BOOK
//跟书有关的操作！包括创建图书、借书（借书书名）、还书（还书书名）、查找（深搜）、打印所有书
//删除书本  Load（建议）：用于将最新的信息读取进来！
#define NOT_BORROWED "0"
const int maxlength = 30;
typedef struct SearchTree *Tree;
Tree create();
Tree Insert(Tree T, int num, char *name, char borrow[]);
void Find(Tree T, char *name);//查找！
Tree Findmin(Tree T);
Tree Findmax(Tree T);
void print(Tree T);
Tree Delete(Tree T,char *name);
void SaveTree(Tree T, FILE *fp);
Tree LoadTree(Tree T);
Tree EmptyBook(Tree T);//清空所有书籍！！
typedef struct SearchTree//后面可以考虑加上日期等等！！
{
	int num;//编号
	char name[maxlength];//书名
	char Borrow[30];//借书者名字（未借出记为"0"）
	Tree Right;
	Tree Left;
};
#endif
