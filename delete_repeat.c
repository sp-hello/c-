/*=======================================================
*   Copyright (C) 2022 晏江林 All rights reserved.
*   
*   文件名称：delete_repeat.c
*   创 建 者：晏江林
*   创建日期：2022年07月18日
*   描    述：
*
========================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    char str[100], ch;
    puts("input string:");
    gets(str);
    int i = 0, j, k;
    while(str[i])
    {
        ch = str[i];
        j = i+1;
        while(str[j])
        {
            if(ch == str[j])
            {
                k = j;
                while(str[k])
                {
                    str[k] = str[k+1];
                    k++;
                }
                j--;
            }
            j++;
        }
        i++;
    }
    puts(str);
    return 0;
}
