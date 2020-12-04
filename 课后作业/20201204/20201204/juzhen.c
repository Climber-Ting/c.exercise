#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

/*
	杨氏矩阵
	作业内容
	有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
	请编写程序在这样的矩阵中查找某个数字是否存在。
	要求：时间复杂度小于O(N);

*/


int findnum(int a[][3], int x, int y, int f)
{
	int i = 0, j = x - 1; //右上角开始遍历   i表示行，j表示列

	while (j >= 0 && i < y)
	{
		if (a[i][j] < f) //查找的数比a[i][j]大，向下
		{
			i++;
		}
		else if (a[i][j] > f) //查找的数比a[i][j]小，向左
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
	{ 5, 7, 9 } }; //一个示例

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