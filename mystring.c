/*=======================================================
 *   Copyright (C) 2022 晏江林 All rights reserved.
 *   
 *   文件名称：mystring.c
 *   创 建 者：晏江林
 *   创建日期：2022年07月22日
 *   描    述：
 *
 ========================================================*/
int mystrlen(const char *str)
{
	int count = 0;
	for(int i = 0; *(str + i); i++)
	{
		count++;
	}
	return count;
}

void mystrcpy(char *str1,const char *str2)
{
	for(int i = 0; *(str2 + i); i++)
	{
		*(str1 + i) = *(str2 + i);
	}
}

int mystrcmp(const char *str1,const char *str2)
{
	int a = 0;
	for(int i = 0; *(str1 + i) && *(str2 + i); i++)
	{
		if(*(str1 + i) != *(str2 + i))
		{
			a = *(str1 + i) - *(str2 + i);
			break;
		}
	}
	return a;
}

void mystrcat(char *str1,const char *str2)
{
	int len = mystrlen(str1);
	for(int i = 0; *(str2 + i); i++)
	{
		*(str1 + len + i) = *(str2 + i);
	}
}

char *mystrstr(const char *str1,const char *str2)
{
    while(1)
    {   
        if(*str2==*str1) 
            break;
        str1++;
    }   
    return str1;
}

