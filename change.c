/*=======================================================
*   Copyright (C) 2022 晏江林 All rights reserved.
*   
*   文件名称：7.c
*   创 建 者：晏江林
*   创建日期：2022年07月24日
*   描    述：输入一个数大于0右移多少位，小于0左移
*
========================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i=0,j;
    char a[100],b;
    printf("输入字符串");
    gets(a);
    printf("please input j:");
    scanf("%d",&j);
    while(a[i])
    {
        i++;
    }
    i=i-1;
    if(j>0)
    {
        for(j;j>0;j--)
        {
            b=a[i];
            for(int d=i;d>0;d--)
            {
                a[d]=a[d-1];
            }
            a[0]=b;
        }
    }
    else if(j<0)
    {
        for(j;j<0;j++)
        {
            b=a[0];
            for(int c=0;c<i;c++)
            {
                a[c]=a[c+1];
            }
            a[i]=b;
        }
    }
    puts(a);
    return 0;
}
