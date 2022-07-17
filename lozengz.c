/*=======================================================
 *   Copyright (C) 2022 晏江林 All rights reserved.
 *   
 *   文件名称：hom.c
 *   创 建 者：晏江林
 *   创建日期：2022年07月13日
 *   描    述：
 *
 ========================================================*/
#include<stdio.h>


int main(int argc, char *argv[])
{
	int a,k;
	printf("请输入菱形的边长a：");
	scanf("%d",&a);
	for(k = 0;k < 100;k++)
	{
		for(int i = 0;i < a;i++)
		{
			for(int j = 0;j < a-i+k;j++)
			{
				printf(" ");
			}
			for(int b = 0;b < 2*i+1;b++)
			{
				printf("*");
			}
			puts("");
		}

		for(int i = 1;i < a;i++)
		{
			for(int j = 0;j < i+1+k;j++)
			{
				printf(" ");
			}
			for(int b = 0;b < 2*a-2*i-1;b++)
			{
				printf("*");
			}
			puts("");
		}
		if(k == 99)
		{
			k = 0;
		}
		
		usleep(150000);
		system("clear");
	}
	return 0;
}
