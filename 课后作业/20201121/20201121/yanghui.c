#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

////����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1

int main()
{
	int arr[10][10] = {1};   //ֱ�ӽ���һ��Ԫ����1
	//arr[0][0] = 1;
	for (int i = 1; i <= 9; i++)
	{
		//arr[i][0] = 1;    //ÿ�е�һ��Ԫ����1  
		for (int j = 0; j <= i; j++)
		{
			arr[i][0] = 1;    //ÿ�е�һ��Ԫ����1
			arr[i][j] = 1;    //ÿ�����һ��Ԫ����1
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}