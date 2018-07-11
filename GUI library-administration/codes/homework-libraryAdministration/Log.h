#pragma once
#ifndef LOG
#define LOG
//与用户有关的操作，包括登入/登出、用户注册、借书的一部分（找出借书人！）、还书一部分（找出还书人）
//函数定义
#include<iostream>
#include"book.h"
typedef struct loginfo
{//用户信息
    char Username[100];
    char password[100];
    int borrownum;
};
void encrypt(char *pwd);
//登入时输入！
//struct loginfo *login(loginfo *user);
int Checkuser(struct loginfo *user);//返回整数，代表权限！(可能还要加参数！)
int Checkusername(char *username);
int Createuser(char fname[],char fpwd[]);
Tree borrower(Tree T, loginfo *user, char *name,int &flag);//借书人
Tree returner(Tree T, loginfo *user, int &flag, char name[]);//还书人！
Tree FindPos(Tree T, char *name, loginfo *user, int &flag);
void FindBorrow(Tree T, loginfo *user, std::string &findborrow);
void refreshuserdata(loginfo *user);
#endif
