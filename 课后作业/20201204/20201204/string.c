#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

/*
дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 =AABCD��s2 = BCDAA������1
����s1=abcd��s2=ACBD������0.
AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA
AABCD����һ���ַ��õ�DAABC

������
���⵱Ȼ���Խ�������ת��Ľ���ŵ�һ�������Ȼ����в��ң��������������Ȳ��ò�����Ҳ̫���£�����������һ���ܼ򵥵�������
��ʵABCDE������ô������ת������н��������������ABCDEABCD����ַ������ˡ�
���������ܼ򵥣�ֻ��Ҫ��ԭ�ַ�������һ����ں��棬Ȼ����һ�Ҵ����ҵ��ַ����ǲ�������ԭ�ַ������Ӽ����ɡ�
*/

//int main()
//{
//	char arr[10] = { 0 };
//	char* str = "abcd";
//	strcpy(arr, str);
//	strcat(arr, str);
//	char* sub1 = "bcda";
//	char* sub2 = "cdab";
//	char* p = strstr(arr, sub1);
//	if (NULL !=p )
//	{
//		printf("%s��%s��ת����Ӵ�\n", sub1, str);
//	}
//	 p = strstr(arr, sub2);
//	if (NULL != p)
//	{
//		printf("%s��%s��ת����Ӵ�\n", sub2, str);
//	}
//}