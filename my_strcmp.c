/*===============================================
 *   文件名称：my_strcmp.c
 *   创 建 者：     
 *   创建日期：2022年06月25日
 *   描    述：
 ================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    char a[100],b[100];
    int i=0,j=0;
    printf("输入字符串a:");
    gets(a);
    printf("输入字符串b:");
    gets(b);
    for(i=0;a[i]||b[i];i++)
    {
        j=a[i]-b[i];
        if(j!=0)
        break;
    }
    if(j==0)
        printf("两个字符串相等%d\n",j);
    if(j!=0)
    {
        printf("两个字符串不相等%d\n",j);
    }
    return 0;
} 
