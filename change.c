/*===============================================
*   文件名称：change.c
*   创 建 者：     
*   创建日期：2022年06月25日
*   描    述：
================================================*/
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
