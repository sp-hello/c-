/*=======================================================
 *   Copyright (C) 2022 晏江林 All rights reserved.
 *   
 *   文件名称：shi.c
 *   创 建 者：晏江林
 *   创建日期：2022年07月14日
 *   描    述：计算十进制数转为二进制数中1的个数
 *
 ========================================================*/
/*#include<stdio.h>

int main(int argc, char *argv[])
{
	int a = 0,i = 0,b,yu;
	printf("please input a:");
	scanf("%d",&a);
	if(a != 0)
	{
		do{
			b = a / 2;
			yu = a % 2;
			a = b;
			if (yu == 1)
				i++;
		}while(a != 0);
	}
	printf("%d\n",i);
	return 0;
}*/



#include<stdio.h>

int main(int argc, char *argv[])
{
	int value, count = 0;
	scanf("%d",&value);

	while(value)
	{
		value &= (value - 1);
		count ++;
	}
	printf("%d\n",count);



	return 0;
}
