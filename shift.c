/*===============================================
*   文件名称：shift.c
*   创 建 者：     
*   创建日期：2022年06月23日
*   描    述：
================================================*/
#include <stdio.h>

int main(int argc, char *argv[])
{ 
    int a[5]={1,2,3,4,5},m,b,c;
    printf("输入m值：");
    scanf("%d",&m);
    if(m>0)
    {
        for(m;m>0;m--)
        {
            b=a[4];
            for(int i=4;i>0;i--){
                a[i]=a[i-1];
            }
            a[0]=b;
        }
    }
    else if(m<0)
    {
        for(m;m<0;m++)
        {
            c=a[0];
            for(int i=0;i<5;i++){
                a[i]=a[i+1];
            }
            a[4]=c;
        }
    }
        for(int i=0;i<5;i++){
            printf("%d ",a[i]);
        }
    return 0;
} 
