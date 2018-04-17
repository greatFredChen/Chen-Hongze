// 查找树.cpp: 定义控制台应用程序的入口点。
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include "book.h"
#include "log.h"
using namespace std;
inline void HideCursor()
{ //显示/隐藏光标
	CONSOLE_CURSOR_INFO Cursor_Info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Cursor_Info);
}
inline void ViewCursor()
{
	CONSOLE_CURSOR_INFO Cursor_Info = { 1, 1 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Cursor_Info);
}
int Menu(int choice)
{ //主菜单
	int i;
	char *option[] = { "[0]     登陆及登出", "[1]     创建新书集合", "[2]     插入新书本", "[3]     打印书本", "[4]     删除书本", "[5]     读取书本信息", "[6]     保存书本信息", "[7]     搜索书本", "[8]     用户注册", "[9]     清空集合", "[Space] 借书", "[Esc]   退出系统", "[Shift] 还书", "[Enter] 选择" };
	HANDLE hConsuleOutput = GetStdHandle(STD_OUTPUT_HANDLE), hConsoleInput = GetStdHandle(STD_INPUT_HANDLE);
	DWORD _Dword;
	INPUT_RECORD inputRec;

	HideCursor();

	while (true)
	{
		fflush(stdin);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x72);
		cout << "\t\t\t\t欢迎使用图书管理系统Beta ver.233 -.-" << endl<<endl;
		for (i = 0; i < 14; i++)
		{
			if (choice == i)
				SetConsoleTextAttribute(hConsuleOutput, 0xF0); //选中部分白底黑字
			else
				SetConsoleTextAttribute(hConsuleOutput, 0x07); //未选中部分黑底白字
			puts(option[i]);
		}
		cout << endl;
		cout << "\t\t\t\t\tfounder:Fred Chen" << endl<<endl;
		cout << "\t\t\t\t\tEL PSY CONGROO" << endl;
		SetConsoleTextAttribute(hConsuleOutput, 0x07);
		ReadConsoleInput(hConsoleInput, &inputRec, 1, &_Dword); //阻塞性的读入键盘操作
		if (inputRec.Event.KeyEvent.bKeyDown)
			switch (inputRec.Event.KeyEvent.wVirtualKeyCode)
			{
			case VK_ESCAPE:
				exit(0);
			case VK_RETURN:
				return choice;
			case VK_SHIFT:
				return 12;
			case VK_SPACE:
				return 10;
			case VK_UP:
				if (choice > 0)
					choice--;
				break;
			case VK_DOWN:
				if (choice < 12)
					choice++;
				break;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				return inputRec.Event.KeyEvent.wVirtualKeyCode - '0';
			default:
				break;
			}
		system("cls");
	}
}
int main()
{
	FILE *fp;
	Tree T = NULL, Temp = NULL;
	struct loginfo *User = NULL;
	int choice = 0;
	int num, Log = -1; //Log判断是否登录
	char name[maxlength];
	memset(name, 0, maxlength); //名字初始化
	T = LoadTree(T);//先行读取一遍数据！
	int Load = 1;
	int Save = 0;
	choice = Menu(choice);
	while (true)
	{
		ViewCursor();
		fflush(stdin);
		switch (choice)
		{
		case 0:
			system("cls");
			if (Log < 0)
			{
				User = login(User);
				if (User == NULL)
				{
					printf("登陆失败!\n");
					system("pause");
					break;
				}
				getchar();
				if (strcmp(User->Username, "Admin") == 0)
					Log = 1; //管理员权限
				else
					Log = 0; //普通用户权限
				break;
			}
			else
			{ //登出
				Log = -1;
				free(User);
				User = NULL;
				printf("成功登出!\n");
				system("pause");
				break;
			}
		case 1:
			system("cls");
			if (Log != 1)
			{
				printf("需要管理员权限!\n");
				system("pause");
				break;
			}
			T = create();
			Save = 0;
			Load = 0;
			printf("成功创建!\n");
			system("pause");
			break;
		case 2:
			system("cls");
			if (Log != 1)
			{
				printf("需要管理员权限!\n");
				system("pause");
				break;
			}
			printf("输入书本序号及书名:\n");
			scanf("%d", &num);
			gets_s(name);
			T = Insert(T, num, name, NOT_BORROWED);
			if (num > 0)
			{
				printf("成功插入!\n");
				Save = 0;
			}
			else
				printf("序号不合法!\n");
			system("pause");
			break;
		case 3:
			system("cls");
			print(T);
			system("pause");
			break;
		case 7:
			system("cls");
			printf("请输入你想要查找的书的书名:\n");
			gets_s(name);
			Find(T, name);//查找！！
			system("pause");
			break;
		case 5:
			system("cls");
			T = LoadTree(T);
			Load = 1;
			Save = 0;
			printf("成功读取书本信息!\n");
			system("pause");
			break;
		case 6:
			system("cls");
			if (T == NULL)
			{
				printf("书目未创建!\n");//表明没有创建书目！
				system("pause");
				break;
			}
			if (!Load)
			{
				cout << "你已经创建了一个新的书目，但是你并没有把原来的书本读取进书目，现在进行保存会把原来的书覆盖，确认是否继续？" << endl;
				cout << "[y]是                 [n]否" << endl;
				char x;
				cin >> x;
				if (x == 'n')
				{
					system("pause");
					break;
				}
				else if (x != 'n'&&x != 'y')
				{
					cout << "不合法的输入！" << endl;
					system("pause");
					break;
				}
			}
			if ((fp = fopen("book.txt", "w")) == NULL)
			{
				printf("Can't open file!\n");
				system("pause");
				break;
			}
			SaveTree(T, fp);
			Save = 1;
			fclose(fp);
			printf("成功保存书本信息!\n");
			system("pause");
			break;
		case 4:
			system("cls");
			if (Log != 1)
			{
				printf("需要管理员权限!\n");
				system("pause");
				break;
			}
			while (1)
			{
				printf("请输入你想删除的书的书名:\n");
				gets_s(name);
				if (strcmp(name, "0") == 0) break;
				T = Delete(T, name);
				Save = 0;
			}
			system("pause");
			break;
		case 8:
			system("cls");
			if (Log < 0)
			{
				printf("请先登录!\n");
				system("pause");
				break;
			}
			else if (Log != 1)
			{
				printf("需要管理员权限!\n");
				system("pause");
				break;
			}
			else
				Createuser();//记得识别重复注册！！
			break;
		case 9:
			system("cls");
			if (Log < 0)
				printf("请先登录!\n");
			else if (Log != 1)
				printf("需要管理员权限!\n");
			else
			{
				T = EmptyBook(T);
				Load = 0;
				cout << "书本清除成功！" << endl;
			}
			system("pause");
			break;
		case 10:
			system("cls");
			if (Log < 0)
			{
				printf("请先登录!\n");
				system("pause");
				break;
			}
			if (User->borrownum >= 5)
			{
				printf("您借的书已经超出上限（最多四本）!\n"); //最多借四本书
				system("pause");
				break;
			}
			printf("输入你想借的书的书名:\n");
			gets_s(name);
			T = borrower(T, User, name);
			Save = 0;
			system("pause");
			break;
		case 12:
			system("cls");
			if (Log < 0)
			{
				printf("请先登录!\n");
				system("pause");
				break;
			}
			T = returner(T, User);
			Save = 0;
			system("pause");
			break;
		case 11:
			if (!Save)
			{
				cout << "您当前的进度还未保存，确定就此退出？" << endl;
				cout << "[y]是                         [n]否" << endl;
				char x;
				cin >> x;
				if (x == 'n') break;
				else if (x != 'n'&&x != 'y')
				{
					cout << "不合法的输入！" << endl;
					break;
				}
			}
			return 0;
		}
		system("cls");
		choice = Menu(choice);
	}
	return 0;
}

