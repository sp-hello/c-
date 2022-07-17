/*=======================================================
*   Copyright (C) 2022 晏江林 All rights reserved.
*   
*   文件名称：4.c
*   创 建 者：晏江林
*   创建日期：2022年07月13日
*   描    述：
*
========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	int a,b,c;
	for(a = 2;a < 300;a++)
	{
		c = 1;
		for(b = 2;b < a;b++)
		{
			if(a % b == 0)
			{
				c = 0;
				break;
			}
		}
		if(c == 1)
		{
			printf("%d ",a);
		}
	}

	return 0;
}
