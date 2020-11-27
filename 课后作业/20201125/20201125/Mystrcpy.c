#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//字符串复制
char* Mystrcpy(char *des,  const char*src)
{
	assert(des != NULL&&src != NULL);
	char *p = des;
	while (*des++ = *src++);
	return p;
}

//int main()
//{
//	char str[] = "abc";    //要定义为数组形式，字符串形式是不可修改的
//	char* str1 = "11";
//	printf("%s\n", Mystrcpy(str, str1));
//
//}