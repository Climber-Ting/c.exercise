#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

/*
	���Ͼ���
	��ҵ����
	��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
	���д�����������ľ����в���ĳ�������Ƿ���ڡ�
	Ҫ��ʱ�临�Ӷ�С��O(N);

*/


int findnum(int a[][3], int x, int y, int f)
{
	int i = 0, j = x - 1; //���Ͻǿ�ʼ����   i��ʾ�У�j��ʾ��

	while (j >= 0 && i < y)
	{
		if (a[i][j] < f) //���ҵ�����a[i][j]������
		{
			i++;
		}
		else if (a[i][j] > f) //���ҵ�����a[i][j]С������
		{
			j--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int a[3][3] = { { 1, 3, 5 },
	{ 3, 5, 7 },
	{ 5, 7, 9 } }; //һ��ʾ��

	if (findnum(a, 3, 3, 9))
	{
		printf("It has been found!\n");
	}
	else
	{
		printf("It hasn't been found!\n");
	}
	return 0;
}