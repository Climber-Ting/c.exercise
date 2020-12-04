#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
	字符串左旋
	作业内容
	实现一个函数，可以左旋字符串中的k个字符。
	例如：
	ABCD左旋一个字符得到BCDA
	ABCD左旋两个字符得到CDAB
*/

char* left(char* str,int n)
{
	char* p= str + n;
	char arr[10] = { 0 };
	strcpy(arr, p);
	char end[10] = { 0 };
	strncpy(end, str, n);
	strcat(arr, end);

}
//int main()
//{
//	char* str = "abcde";
//	int n = 2;
//	char* p=left(str, n);
//	printf("%s左旋%d个字符后是%s", str, n, p);
//}