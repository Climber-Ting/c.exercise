#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ��
//���������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�


//void reverse(int arr[],int len)
//{
//	int *left=&arr[0];
//	int *right=&arr[len-1];
//	int temp;
//	while (left<right)
//	{
//		while (*left % 2 != 0)
//		{
//			left++;
//		}
//		while((*right %2)== 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			temp = *left;
//			*left = *right;
//			*right = temp;
//		}
//	}
//	return;
//}
//int main()
//{
//	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, len);
//	for (int i =0; i <=9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	system("pause");
//	return 0;
//}