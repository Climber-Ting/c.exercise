#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
	�ַ�������
	��ҵ����
	ʵ��һ�����������������ַ����е�k���ַ���
	���磺
	ABCD����һ���ַ��õ�BCDA
	ABCD���������ַ��õ�CDAB
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
//	printf("%s����%d���ַ�����%s", str, n, p);
//}