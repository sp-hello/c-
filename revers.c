/*=======================================================
*   Copyright (C) 2022 晏江林 All rights reserved.
*   
*   文件名称：revers.c
*   创 建 者：晏江林
*   创建日期：2022年07月15日
*   描    述：
*
========================================================*/
#include <stdio.h>
#include <string.h>

char *Reverse(char arr[]);

int main(int argc, char *argv[])
{
	char buf[100];
	printf("请输入一个字符串： ");
	gets(buf);
	puts(Reverse(buf));

	return 0;
}

char *Reverse(char arr[])
{
	char *p = arr;
	int a = strlen(arr);
	for(int i = 0; i < (a / 2); i++)
	{
		*(p + i) ^= *(p + a - 1 -i);
		*(p +a -1 -i) ^= *(p +i);
		*(p + i) ^= *(p + a - 1 -i);

	}	
	return p;
}

