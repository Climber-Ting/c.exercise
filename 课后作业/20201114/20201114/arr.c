#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

void init(int arr[],int size)
{
	for (int i = 0; i <= size - 1; i++)
	{
		arr[i] = 0;
	}
	
}

void print(int arr[],int size)
{
	for (int i = 0; i <= size - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[],int size)
{
	int temp;
	for (int i = 0, j = size - 1; i < j; i++, j--)
	{
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	}
}

//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6 };
//	int len = sizeof(a) / sizeof(a[0]);
//	print(a,len);
//
//	reverse(a, len);
//	print(a, len);
//
//	init(a,len);
//	print(a, len);
//
//	system("pause");
//	return 0;
//}