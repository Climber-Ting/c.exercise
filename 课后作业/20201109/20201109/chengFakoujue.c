#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>


int main()
{
	int n;
	printf("请输入一个值：");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d × %d = %d   ",i,j,i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}