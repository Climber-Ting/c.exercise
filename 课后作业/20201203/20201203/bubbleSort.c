#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

void bubbleSort1(int * a,int len)
{
	int temp;
	//��������
	//i��ʾ���ź���ĸ���
	for (int i = 0; i <= len - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j <= len - 2 - i; j++)
		{
			//j�ӿ�ʼ���ɼ�flag�Ż�
			//j��i��ʼ�򲻿ɼ�flag�������������в���ȫ
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
	//��������
	//end��ʾδ�ź���ĸ���
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