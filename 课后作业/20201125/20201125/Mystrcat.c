#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>

char* Mystrcat(char* dest,char* src)
{
	assert(dest);
	if (src == NULL)
	{
		return dest;
	}
	char* p = dest;
	char* start = dest + strlen(dest);  
	while (*start++ = *src++);
	return p;

}
//int main()
//{
//	char str1[10] = "123";
//	char* str2 = "456";
//	printf("%s\n", Mystrcat(str1, str2));
//}