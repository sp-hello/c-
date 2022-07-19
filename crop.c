/*=======================================================
*   Copyright (C) 2022 晏江林 All rights reserved.
*   
*   文件名称：crop.c
*   创 建 者：晏江林
*   创建日期：2022年07月19日
*   描    述：输入字符串，比如"hello nice to meet you"，以空格为界限去裁剪字符串
*
========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	char buf[100] = "hello nice to meet you!";
	char *p[5];
	int j = 0;

	for(int i = 0; buf[i]; i++)
	{
		if(i == 0 && buf[i] != ' ')
		{
			p[j] = &buf[0];
			j++;
		}
		else if(buf[i] != ' ' && buf[i - 1] == ' ')
		{
			p[j] = &buf[i];
			j++;
		}
	}
	for(int i = 0; buf[i]; i++)
	{
		if(buf[i] == ' ')
		{
			buf[i] = '\0';
		}
	}
	for(int i = 0; i < 5; i++)
	{
		puts(p[i]);
	}
	return 0;
}
