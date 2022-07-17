/*=======================================================
 *   Copyright (C) 2022 晏江林 All rights reserved.
 *   
 *   文件名称：2.c
 *   创 建 者：晏江林
 *   创建日期：2022年07月13日
 *   描    述：
 *
 ========================================================*/
#include<stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c;
	printf("Please input three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);

	if(a != b && a != c && b != c)
	{
		if(a > b && a > c)
		{
			if(b > c)
				printf("%d > %d > %d\n",a,b,c);
			else
				printf("%d > %d > %d\n",a,c,b);
		}
		else if(b > a && b > c)
		{
			if(a > c)
				printf("%d > %d > %d\n",b,a,c);
			else
				printf("%d > %d > %d\n",b,c,a);
		}
		else if(c > b && c > a)
		{
			if(a > b)
				printf("%d > %d > %d\n",c,a,b);
			else
				printf("%d > %d > %d\n",c,b,a);
		}
	}

	else if(a == b)
	{
		if(a > c)
			printf("%d = %d > %d\n",a,b,c);
		else if(a < c)
			printf("%d > %d = %d\n",c,a,b);
		else
			printf("%d = %d = %d\n",a,b,c);
	}
	else if(a == c)
	{
		if(a > b)
			printf("%d = %d > %d\n",a,c,b);
		else if(a < b)
			printf("%d > %d = %d\n",b,a,c);
		else
			printf("%d = %d = %d\n",a,b,c);
	}
	else if(b == c)
	{
		if(b > a)
			printf("%d = %d > %d\n",b,c,a);
		else if(b < a)
			printf("%d > %d = %d\n",a,b,c);
		else
			printf("%d = %d = %d\n",a,b,c);
	}

	return 0;
} 
