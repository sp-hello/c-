/*=======================================================
*   Copyright (C) 2022 晏江林 All rights reserved.
*   
*   文件名称：max.c
*   创 建 者：晏江林
*   创建日期：2022年07月14日
*   描    述：
*
========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	int arr[3][5];
	int a,b;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int max = arr[0][0];
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			printf("%4d ",arr[i][j]);
			if(max < arr[i][j])
			{
				max = arr[i][j];
				a = i;
				b = j;
			}
		}
		puts("");
	}
	printf("max = arr[%d][%d] = %d\n",a,b,max);

	return 0;
}
