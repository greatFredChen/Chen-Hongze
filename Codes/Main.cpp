// ������.cpp: �������̨Ӧ�ó������ڵ㡣
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
{ //��ʾ/���ع��
	CONSOLE_CURSOR_INFO Cursor_Info = { 1, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Cursor_Info);
}
inline void ViewCursor()
{
	CONSOLE_CURSOR_INFO Cursor_Info = { 1, 1 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Cursor_Info);
}
int Menu(int choice)
{ //���˵�
	int i;
	char *option[] = { "[0]     ��½���ǳ�", "[1]     �������鼯��", "[2]     �������鱾", "[3]     ��ӡ�鱾", "[4]     ɾ���鱾", "[5]     ��ȡ�鱾��Ϣ", "[6]     �����鱾��Ϣ", "[7]     �����鱾", "[8]     �û�ע��", "[9]     ��ռ���", "[Space] ����", "[Esc]   �˳�ϵͳ", "[Shift] ����", "[Enter] ѡ��" };
	HANDLE hConsuleOutput = GetStdHandle(STD_OUTPUT_HANDLE), hConsoleInput = GetStdHandle(STD_INPUT_HANDLE);
	DWORD _Dword;
	INPUT_RECORD inputRec;

	HideCursor();

	while (true)
	{
		fflush(stdin);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x72);
		cout << "\t\t\t\t��ӭʹ��ͼ�����ϵͳBeta ver.233 -.-" << endl<<endl;
		for (i = 0; i < 14; i++)
		{
			if (choice == i)
				SetConsoleTextAttribute(hConsuleOutput, 0xF0); //ѡ�в��ְ׵׺���
			else
				SetConsoleTextAttribute(hConsuleOutput, 0x07); //δѡ�в��ֺڵװ���
			puts(option[i]);
		}
		cout << endl;
		cout << "\t\t\t\t\tfounder:Fred Chen" << endl<<endl;
		cout << "\t\t\t\t\tEL PSY CONGROO" << endl;
		SetConsoleTextAttribute(hConsuleOutput, 0x07);
		ReadConsoleInput(hConsoleInput, &inputRec, 1, &_Dword); //�����ԵĶ�����̲���
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
	int num, Log = -1; //Log�ж��Ƿ��¼
	char name[maxlength];
	memset(name, 0, maxlength); //���ֳ�ʼ��
	T = LoadTree(T);//���ж�ȡһ�����ݣ�
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
					printf("��½ʧ��!\n");
					system("pause");
					break;
				}
				getchar();
				if (strcmp(User->Username, "Admin") == 0)
					Log = 1; //����ԱȨ��
				else
					Log = 0; //��ͨ�û�Ȩ��
				break;
			}
			else
			{ //�ǳ�
				Log = -1;
				free(User);
				User = NULL;
				printf("�ɹ��ǳ�!\n");
				system("pause");
				break;
			}
		case 1:
			system("cls");
			if (Log != 1)
			{
				printf("��Ҫ����ԱȨ��!\n");
				system("pause");
				break;
			}
			T = create();
			Save = 0;
			Load = 0;
			printf("�ɹ�����!\n");
			system("pause");
			break;
		case 2:
			system("cls");
			if (Log != 1)
			{
				printf("��Ҫ����ԱȨ��!\n");
				system("pause");
				break;
			}
			printf("�����鱾��ż�����:\n");
			scanf("%d", &num);
			gets_s(name);
			T = Insert(T, num, name, NOT_BORROWED);
			if (num > 0)
			{
				printf("�ɹ�����!\n");
				Save = 0;
			}
			else
				printf("��Ų��Ϸ�!\n");
			system("pause");
			break;
		case 3:
			system("cls");
			print(T);
			system("pause");
			break;
		case 7:
			system("cls");
			printf("����������Ҫ���ҵ��������:\n");
			gets_s(name);
			Find(T, name);//���ң���
			system("pause");
			break;
		case 5:
			system("cls");
			T = LoadTree(T);
			Load = 1;
			Save = 0;
			printf("�ɹ���ȡ�鱾��Ϣ!\n");
			system("pause");
			break;
		case 6:
			system("cls");
			if (T == NULL)
			{
				printf("��Ŀδ����!\n");//����û�д�����Ŀ��
				system("pause");
				break;
			}
			if (!Load)
			{
				cout << "���Ѿ�������һ���µ���Ŀ�������㲢û�а�ԭ�����鱾��ȡ����Ŀ�����ڽ��б�����ԭ�����鸲�ǣ�ȷ���Ƿ������" << endl;
				cout << "[y]��                 [n]��" << endl;
				char x;
				cin >> x;
				if (x == 'n')
				{
					system("pause");
					break;
				}
				else if (x != 'n'&&x != 'y')
				{
					cout << "���Ϸ������룡" << endl;
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
			printf("�ɹ������鱾��Ϣ!\n");
			system("pause");
			break;
		case 4:
			system("cls");
			if (Log != 1)
			{
				printf("��Ҫ����ԱȨ��!\n");
				system("pause");
				break;
			}
			while (1)
			{
				printf("����������ɾ�����������:\n");
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
				printf("���ȵ�¼!\n");
				system("pause");
				break;
			}
			else if (Log != 1)
			{
				printf("��Ҫ����ԱȨ��!\n");
				system("pause");
				break;
			}
			else
				Createuser();//�ǵ�ʶ���ظ�ע�ᣡ��
			break;
		case 9:
			system("cls");
			if (Log < 0)
				printf("���ȵ�¼!\n");
			else if (Log != 1)
				printf("��Ҫ����ԱȨ��!\n");
			else
			{
				T = EmptyBook(T);
				Load = 0;
				cout << "�鱾����ɹ���" << endl;
			}
			system("pause");
			break;
		case 10:
			system("cls");
			if (Log < 0)
			{
				printf("���ȵ�¼!\n");
				system("pause");
				break;
			}
			if (User->borrownum >= 5)
			{
				printf("��������Ѿ��������ޣ�����ı���!\n"); //�����ı���
				system("pause");
				break;
			}
			printf("�����������������:\n");
			gets_s(name);
			T = borrower(T, User, name);
			Save = 0;
			system("pause");
			break;
		case 12:
			system("cls");
			if (Log < 0)
			{
				printf("���ȵ�¼!\n");
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
				cout << "����ǰ�Ľ��Ȼ�δ���棬ȷ���ʹ��˳���" << endl;
				cout << "[y]��                         [n]��" << endl;
				char x;
				cin >> x;
				if (x == 'n') break;
				else if (x != 'n'&&x != 'y')
				{
					cout << "���Ϸ������룡" << endl;
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

