#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

int Mystrlen(char *p)
{
	int count=0;
	while (*p != NULL)
	{
		count++;
		p++;
	}
	return count;
}
int main()
{
	char *str = "abcdef";
	printf("%d\n", Mystrlen(str));

	system("pause");
	return 0;
}