/*===============================================
*   文件名称：my_strncat.c
*   创 建 者：     
*   创建日期：2022年06月25日
*   描    述：
================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{ 
    char a[100],b[100];
    int i=0,m=0;
    printf("输入字符串a:");
    gets(a);
    printf("输入字符串b:");
    gets(b);
    while(a[i])
    {
        i++;
    }
    while(b[m])
    {
        m++;
    }
    if(i+m<100)
    {
        for(int c=0;b[c];c++)
        {
            a[c+i]=b[c];
        }
        puts(a);
    }
    else
    {
        printf("超出数组大小\n");
    }
    return 0;
} 
