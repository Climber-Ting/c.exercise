#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 != 0)
		{
			continue;
		}
		printf("%d\n", i);
	}
	/*int a, b, c;
	int max = 0;
	int min = 0;
	int mid = 0;
	scanf("%d%d%d", &a,&b, &c);
	if (a > b)
	{
		max = a;
		min = b;
		if (b > c)
		{
			min = c;
			mid = b;
		}
		else if (c>a)
		{
			max = c;
			mid = a;
		}
		else
		{
			mid = c;
		}
	}
	else
	{
		max = b;*/
		/*min = a;
		if (a > c)
		{
			min = c;
			mid = a;
		}
		else if (c>b)
		{
			max = c;
			mid = b;
		}
		else
		{
			mid = c;
		}*/
	//}
//	printf("%d %d %d\n", max, mid, min);
	system("pause");
	return 0;
	
}