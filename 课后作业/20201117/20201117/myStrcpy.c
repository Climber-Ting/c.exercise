#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>


char * my_strcpy(char * dst, const char * src)
{
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	return(dst);
}

int main()
{
	char* a = "abc";
	const char* c = "def";
	char *d=my_strcpy(a, c);
	

	system("pause");
	return 0;
}