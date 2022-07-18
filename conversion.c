/*===============================================
*   文件名称：3.c
*   创 建 者：     
*   创建日期：2022年06月23日
*   描    述：
================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{ 
    char arr[20];
    printf("输入字符串:");
    gets(arr);
    for(int i=0;i<20;i++){
        if(arr[i]>='A' && arr[i] <= 'Z'){
            arr[i]=arr[i]+32;
        }
        else if(arr[i]>='a' && arr[i]<='z'){
                arr[i]=arr[i]-32;
            }
        }
    puts(arr);
    return 0;
} 
