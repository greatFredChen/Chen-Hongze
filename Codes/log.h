#pragma once
#ifndef LOG
#define LOG
//���û��йصĲ�������������/�ǳ����û�ע�ᡢ�����һ���֣��ҳ������ˣ���������һ���֣��ҳ������ˣ�
//��������
#include<iostream>
#include"book.h"
typedef struct loginfo
{//�û���Ϣ
	char Username[100];
	char password[100];
	int borrownum;
};
void encrypt(char *pwd);
//����ʱ���룡
struct loginfo *login(loginfo *user);
int Checkuser(struct loginfo *user);//��������������Ȩ�ޣ�(���ܻ�Ҫ�Ӳ�����)
void Createuser();
Tree borrower(Tree T, loginfo *user, char *name);//������
Tree returner(Tree T, loginfo *user);//�����ˣ�
Tree FindPos(Tree T, char *name, loginfo *user);
void FindBorrow(Tree T, loginfo *user);
void refreshuserdata(loginfo *user);
#endif