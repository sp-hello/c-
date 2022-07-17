/*=======================================================
 *   Copyright (C) 2022 晏江林 All rights reserved.
 *   
 *   文件名称：3.c
 *   创 建 者：晏江林
 *   创建日期：2022年07月13日
 *   描    述：
 *
 ========================================================*/
#include<stdio.h>

int main(int argc, char *argv[])
{
	int year,yue,day,sum;
	printf("请输入年，月，日：\n");
	scanf("%d %d %d",&year,&yue,&day);
	switch(yue)
	{
		case (1):
			sum=0;
			break;
		case (2):
			sum=28;
			break;
		case (3):
			sum=28+31;
			break;
		case (4):
			sum=28+31+30;
			break;
		case (5):
			sum=28+31+30+31;
			break;
		case (6):
			sum=28+31+30+31+30;
			break;
		case (7):
			sum=28+31+30+31+30+31;
			break;
		case (8):
			sum=28+31+30+31+30+31+31;
			break;
		case (9):
			sum=28+31+30+31+30+31+31+30;
			break;
		case (10):
			sum=28+31+30+31+30+31+31+30+31;
			break;
		case (11):
			sum=28+31+30+31+30+31+31+30+31+30;
			break;
		case (12):
			sum=28+31+30+31+30+31+31+30+31+30+31;
			break;
		default:
			break;
	}
	sum += day;

	//判断是否为闰年
	if ((year % 4 == 0 && year % 100 != 0) || (0 == year % 400))
	{
		if(yue > 2)
		{
			sum += 1;
			printf("%d年%d月%d日前共有sum = %d天\n",year,yue,day,sum);
		}
	}
	else
	{
		printf("%d年%d月%d日前共有sum = %d天\n",year,yue,day,sum);
	}
	return 0;
}
