/*=======================================================
 *   Copyright (C) 2022 晏江林 All rights reserved.
 *   
 *   文件名称：delete.c
 *   创 建 者：晏江林
 *   创建日期：2022年07月18日
 *   描    述：
 *
 ========================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	char str[100],dst[20];
	printf("input str string: ");
	gets(str);
	printf("input dst string: ");
	gets(dst);

	int i = 0, j, k, m;
	while(str[i])
	{
		if(str[i] == dst[0])
		{
			j = i+1;
			k = 1;
			while(dst[k])
			{
				if(str[j++] != dst[k])
					break;
				k++;
			}
			if(dst[k] == '\0')
			{
				m = i;
				while(str[m+k])
				{
					str[m] = str[m+k];
					m++;
				}
				i--;
			}
		}
		i++;
	}
	puts(str);
	return 0;
}
