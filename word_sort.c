/*=======================================================
 *   Copyright (C) 2022 晏江林 All rights reserved.
 *   
 *   文件名称：test2.c
 *   创 建 者：晏江林
 *   创建日期：2022年07月19日
 *   描    述：
 *
 ========================================================*/
#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	char arr[10][20]={"hello","language","good","moring","watermelon","hi","ufo","farsight","china","study"};
	char *p[10],buf[30];

	for(int i = 0; i < 10; i++)
	{
		p[i] = arr[i];
	}
	for(int i = 0; i <9; i++)
	{
		for(int j = 0; j < 9 - i; j++)
		{
			if(strlen(p[j]) < strlen(p[j+1]))
			{
				strcpy(buf,p[j]);
				strcpy(p[j],p[j + 1]);
				strcpy(p[j + 1],buf);
			}
		}
	}
	for(int i = 0; i < 10; i++)
	{
		puts(p[i]);
	}

	return 0;
}
