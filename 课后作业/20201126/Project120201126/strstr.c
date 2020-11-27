#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//字符串查找函数的实现，查找子串第一次在主串出现的位置。

//输出形式为整数，即在字符串的位置
int Mystrstr(char* str,char* substr)
{
	assert(str&&substr);

	if (substr == NULL)
		return 0;
	char* p = str;

	while (*p)
	{
		char* start = p;
		char* sub = substr;
		while (start&&sub&&*sub == *start)
		{
			start++;
			sub++;
		}
		if (*sub == '\0')
			return p-str;
		p++;
	}
	return 0;
}
//输出形式为字符串
//char* Mystrstr(char* str, char* substr)
//{
//	assert(str&&substr);
//	if (substr == NULL)
//		return NULL;
//	char* p = str;
//	while (*p)
//	{
//		char* start = p;
//		char* sub = substr;
//		while (start&&sub&&*sub == *start)
//		{
//			start++;
//			sub++;
//		}
//		if (*sub == '\0')
//			//此时说明子串所有的字符已经在主串中被找到
//			return p;  //返回第一次出现的位置，输出剩余字符串。
//		p++;
//	}
//	return NULL;
//}

int main()
{
	char* str = "12343456";
	char* sub = "345";
	int  ret = Mystrstr(str, sub);
	printf("%d\n", ret);

}