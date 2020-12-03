#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

void bubbleSort1(int * a,int len)
{
	int temp;
	//升序排列
	//i表示已排好序的个数
	for (int i = 0; i <= len - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j <= len - 2 - i; j++)
		{
			//j从开始，可加flag优化
			//j从i开始则不可加flag，否则会出现排列不完全
			if (a[j] > a[j + 1])
			{
				flag = 1;
				temp = a[j + 1];
				a[j + 1] = a[j];
   			    a[j] = temp;
			}
		}
		if (flag == 0)
			break;
	}	
}
void bubbleSort2(int* a, int len)
{
	int temp;
	//升序排列
	//end表示未排好序的个数
	for (int end = len; end >0; end--)
	{
		int flag = 0;
		for (int j = 0; j < end-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				flag = 1;
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
		if (flag == 0)
			break;
	}
}
//
//int main()
//{
//	int a[] = { 1, 3, 2, 6, 8, 4, 0, 7 };
//	int len = sizeof(a) / sizeof(a[0]);
//	bubbleSort2(a, len);
//	for (int i = 0; i <= len - 1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}