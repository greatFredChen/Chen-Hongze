#include "stdafx.h"
#include <stdlib.h>
#include<iostream>
#include"book.h"
#include"log.h"
#include"stdafx.h"
//跟书有关的操作！包括创建图书、借书（借书书名）、还书（还书书名）、查找（深搜）、打印所有书
//删除书本  Load（建议）：用于将最新的信息读取进来！ savetree 将树中的信息打印进txt中！
using namespace std;
Tree create()//建树！
{
	Tree T = NULL;
	int num;
	char name[maxlength];
	cout << "请输入书的序号以及名字：" << endl;
	cin >> num;
	cin.ignore();
	cin.getline(name, maxlength);
	while (num > 0)//num<=0的时候退出！
	{
		T = Insert(T, num, name, NOT_BORROWED);
		cout << "请输入书的序号以及名字：" << endl;
		cin >> num;
		cin.getline(name, maxlength);
	}
	return T;
}
Tree Insert(Tree T, int num, char *name, char borrow[])//插入新信息！
{
	if (num < 0)//负数则返回
		return T;
	if (name[0] == ' ')
		name++;//名字为空则地址+1，进入下一个name的读取
	if (T != NULL)
	{
		if (strcmp(name, T->name) < 0)//待输入书名的字典序小于当前根节点的字典序，进入左结点(dfs)
			T->Left = Insert(T->Left, num, name, borrow);
		if (strcmp(name, T->name) > 0)
			T->Right = Insert(T->Right, num, name, borrow);//否则，进入右结点！
	}
	else//到达叶子结点！创建结点!(或者根节点！)
	{
		T = (Tree)malloc(sizeof(SearchTree));//new分配不行...因为不是指针类型，故采用malloc
		T->num = num;
		strcpy(T->name, name);
		strcpy(T->Borrow, borrow);
		T->Left = T->Right = NULL;
	}
	return T;
}
void print(Tree T)//中序遍历！
{//遍历与打印树
	if (T != NULL)
	{
		print(T->Left);//一边遍历一边打印！
		cout << T->num << "\t" << T->name << '\t' << ((strcmp(T->Borrow, NOT_BORROWED) == 0) ? "在图书馆中" : "已经借出") << endl;//0为未借出，1为借出！
		print(T->Right);//先左后右！中序遍历！
	}
}
/*void Find(Tree T,char *name)//查找并打印
{
	if (T == NULL)//上一级已经为叶子结点！
		return;
	else if (strcmp(name, T->name) < 0)//书本字典序小于根节点
		return Find(T->Left, name);
	else if (strcmp(name, T->name) > 0)
		return Find(T->Right, name);
	else
	{
		cout << T->num << "\t" << T->name << '\t' << ((strcmp(T->Borrow, NOT_BORROWED) == 0) ? "在图书馆中" : "已经借出") << endl;//0为未借出，1为借出！
		if (strcmp(name, T->name) == 0)
			return;
		Find(T->Left, name);
		Find(T->Right, name);
	}
	return;
}*/
//Find函数可能有bug！！上面的是替代方案！
void Find(Tree T, char *name)//查找并打印
{
	if (T == NULL)//上一级已经为叶子结点！
	{
		cout << "查无此书！" << endl;
		return;
	}
	else if (strcmp(name, T->name) < 0)//书本字典序小于根节点
		Find(T->Left, name);
	else if (strcmp(name, T->name) > 0)
		Find(T->Right, name);
	else if(strcmp(name,T->name)==0)
	{
		cout << T->num << "\t" << T->name << '\t' << ((strcmp(T->Borrow, NOT_BORROWED) == 0) ? "在图书馆中" : "已经借出") << endl;//0为未借出，1为借出！
	}
	return;
}
//不使用fstream 若在函数内使用，则频繁打开关闭文件，浪费时间；若在函数外使用，又无法传参，故采用相同功能的FILE *
void SaveTree(Tree T,FILE *fp)//将内存树里的信息打印进txt，保存操作！
{
	if (T != NULL)
	{
		SaveTree(T->Left, fp);
		fprintf(fp, "%d %s %s\n", T->num, T->Borrow, T->name);
		SaveTree(T->Right, fp);//先左后右
	}
}
Tree Findmin(Tree T)//查找最小元素！
{//规律：小的在左树，所以一直向左找即可！
	if (T != NULL)
		while (T->Left != NULL)
			T = T->Left;
	return T;
}
/*另一种写法
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
Tree Delete(Tree T, char *name)//删除结点！！3种情况：删除两个儿子结点、删除一个儿子结点、删除无子节点的结点！
{
	Tree Temp;
	if (T == NULL)
	{
		cout << "不存在这本书！" << endl;
		return NULL;
	}
	else if (strcmp(name, T->name) > 0)//将delete之后的状态更新到T->right或者left！
		T->Right = Delete(T->Right, name);
	else if (strcmp(name, T->name) < 0)
		T->Left = Delete(T->Left, name);
	else
	{
		//删除两个儿子的结点！
		if (T->Left != NULL&&T->Right != NULL)
		{
			Temp = Findmin(T->Right);//或者Findmax(T->left)!
			strcpy(T->name, Temp->name);
			T->num = Temp->num;
			T->Right = Delete(T->Right, name);
		}
		else //删除只有一个儿子或者没有儿子的结点！
		{
				Temp = T;//用temp保存T（指针）原来的地址！
				if (T->Left)//左边子树不为空！
					T = T->Left;//把子树接回去原来的位置！覆盖！
				else if (T->Right)
					T = T->Right;//右子树不为空！覆盖原来的T！
				else//左右子树皆为空！在释放空间之前记得让该叶子结点的值指向NULL！！T赋值为NULL！ 
					T = NULL;
				free(Temp);//通过temp地址来间接释放T的空间！！
		}
		cout << "成功删除！" << endl;
	}
	return T;//返回修改后的树！
}
Tree LoadTree(Tree T)
{//读取txt内容！
 //创建是不可能创建的，这辈子都不可能创建的.
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
	}//如果树为空则创建根节点！
	while (!feof(fp))//树不为空则调用Insert函数！
	{
		T = Insert(T, num, name, borrow);//插入
		fscanf(fp, "%d %s ", &num, borrow);//继续从txt读取下一本书的数据！
		fgets(name, maxlength, fp);
		name[strlen(name) - 1] = '\0';
	}
	fclose(fp);
	return T;
}
Tree EmptyBook(Tree T)//删除所有子节点！
{
	if (T != NULL)
	{
		EmptyBook(T->Left);
		EmptyBook(T->Right);
		free(T);
	}
	return NULL;
}
