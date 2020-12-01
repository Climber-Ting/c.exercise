#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int split_str(char *str,char c,char ***p )
//{
//	if (NULL == str || NULL == p)
//	{
//		puts("NULL pointer ");
//		return 0;
//	}
//	int count = 0;
//	char*ps = str;
//	while (*ps)
//	{
//		if (*ps == c)
//		{
//			count++;
//		}
//		ps++;
//	}
//	count++;
//	printf("count:%d\n", count);
//	//malloc store child str pointer arr
//	*p = (char**)malloc(sizeof(char*)*count);
//	if (NULL == *p)
//	{
//		puts("malloc store arr error.");
//		return -1;
//	}
//	//save child str pointer to arr
//	int i = 1;
//	ps = str;
//	*(p+0) = str;
//	while (*ps)
//	{
//		if (*ps == c)
//		{
//			*ps = 0;
//			ps++;
//			*(p+i) = ps;
//			continue;
//		}
//		ps++;
//	}
//	return 0;
//}
//int main()
//{
//	char str[] = "192.168.3.45";
//	char** p = NULL;
//	split_str(str, '.', &p);
//	int i ;
//	for (i = 0; i < 4; i++)
//	{
//		printf("p[%d]:%p\n", i,p[i]);
//	}
//	return 0;
//}