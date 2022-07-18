/*===============================================
*   文件名称：my_strlen.c
*   创 建 者：     
*   创建日期：2022年06月25日
*   描    述：
================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{ 
    char a[100];
    printf("输入字符串\n");
    gets(a);
    int i;
    while(a[i])
    {
        i++;
    }
    printf("字符长度：%d\n",i);
    return 0;
} 
