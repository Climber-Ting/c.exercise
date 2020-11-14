#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>


int main()
{
	int a = 20;
	int b = 10;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);

	system("pause");
	return 0;
}