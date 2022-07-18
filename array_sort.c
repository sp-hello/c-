/*=======================================================
 *   Copyright (C) 2022 晏江林 All rights reserved.
 *   
 *   文件名称：h.c
 *   创 建 者：晏江林
 *   创建日期：2022年07月18日
 *   描    述：
 *
 ========================================================*/
#include<stdio.h>
#include<time.h>

int main(int argc, char *argv[])
{
	int arr[5][5];
	srand(time(NULL));
	int (*p)[5] = arr;
	printf("please input arr[5][5]:\n");
	for(int i = 0; i < 5; i++)
	{   
		for(int j = 0; j < 5; j++)
		{
			p[i][j] = rand() % 1000;
		}
	}
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			for(int n = 0; n < 4; n++)
			{
					if(p[i][n] < p[i][n+1])
					{
						p[i][n] ^= p[i][n+1];
						p[i][n+1] ^= p[i][n];
						p[i][n] ^= p[i][n+1];
					}
			}
		}
	}
	for(int i = 0; i < 5; i++)
	{   
		for(int j = 0; j < 5; j++)
		{
			printf("%4d ",p[i][j]);
		}
		puts("");
	}
	return 0;
}
