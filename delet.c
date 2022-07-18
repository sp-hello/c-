/*===============================================
*   文件名称：delet.c
*   创 建 者：     
*   创建日期：2022年06月25日
*   描    述：
================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{ 
    char buf[30]={0};
    int i=0,j;
    puts("输入一个字符串");
    gets(buf);
    while(buf[i])
    {
        if(buf[i]==' ')
        {   
            j=i;
            while(buf[j])
            {
                buf[j]=buf[j+1];
                j++;
            }
            i--;
        }
        i++;

    }
    puts(buf);
return 0;
} 
