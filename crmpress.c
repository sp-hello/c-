/*=======================================================
 *   Copyright (C) 2022 晏江林 All rights reserved.
 *   
 *   文件名称：compress.c
 *   创 建 者：晏江林
 *   创建日期：2022年07月15日
 *   描    述：
 *
 ========================================================*/
#include<stdio.h>

char *(compress)(char arr[],char buf[]);

int main(int argc, char *argv[])
{
	char arr[100],buf[100] = {0};
	printf("请输入一个字符串： ");
	gets(arr);
	puts(compress(arr,buf));
	return 0;
}

char *(compress)(char arr[],char buf[])
{
	char *p = arr,*q = buf;
	int a = 1;
	while(*p)
	{
		if(*p == *(p + 1))
		{
			a++;	
		}
		else
		{
			if(a >1 && a < 10 )
			{
				*q++ = *p;
                *q++ = a + 48;
			}
			else if(a >= 10 && a < 100)
			{
				*q++ = *p;
				*q++ = a / 10 + 48;
				*q++ = a % 10 + 48;
			}
			else
			{
				*q++ = *p;
			}
			a=1;
		}
		p++;
	}
	return buf;
}
