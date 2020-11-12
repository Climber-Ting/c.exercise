#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//递归方法
//int fei(int k)
//{
//	if (k == 1||k==2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fei(k-2)+fei(k - 1);
//	}
//}

//非递归方法
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	
//	int m=1, n=1;     //表示数列第一项和第二项
//	int k;           //表示数列第三项
//	if (a == 1 || a == 2)
//	{
//		k = 1;
//	}
//	else
//	{
//		for (int j = 3; j <= a; j++)
//		{
//			k = m + n;       //按组替换
//			m = n;
//			n = k;
//
//		}
//	}
//	printf("%d\n", k);
//	
//
//
//	//printf("%d\n", fei(a));
//
//	system("pause");
//	return 0;
//}