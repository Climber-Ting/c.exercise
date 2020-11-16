#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<windows.h>
#include<math.h>

//求出0～100000之间的所有“水仙花数”并输出。

//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474 54748 92727 93084


//优化方法
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}




//int main()
//{
//	
//	int n;
//	for (long i = 0; i <= 100000; i++)
//	{
//		//一位数遍历
//		if (i>0&&i<10)
//		{
//			n = 1;
//			if (pow((i % 10),n) == i)
//			{
//				printf("%ld ", i);
//			}
//		}
//		//两位数遍历
//		if (i >= 10 && i < 100)
//		{
//			n = 2;
//			if (pow((i/10),n)+pow((i%10),n)==i)
//			{
//				printf("%ld ", i);
//			}
//		}
//		//三位数遍历
//		if (i >= 100 && i < 1000)
//		{
//			n = 3;
//			int f1 = i / 100;  //百位数字
//			int f2 = (i % 100) / 10;  //十位数字
//			if (pow(f1, n) + pow(f2, n)+ pow((i % 10), n)  == i)
//			{
//				printf("%ld ", i);
//			}
//		}
//		//四位数遍历
//		if (i >= 1000 && i < 10000)
//		{
//			n = 4;
//			int f1 = i / 1000;        //千位数字
//			int f2 = (i %1000) /100;  //百位数字
//			int f3 = (i % 100) / 10;  //十位数字
//			if (pow(f1, n) + pow(f2, n) + pow(f3, n)+pow((i % 10), n) == i)
//			{
//				printf("%ld ", i);
//			}
//		}
//		//五位数遍历
//		if (i >= 10000 && i < 100000)
//		{
//			n = 5;
//			int f1 = i / 10000;        //万位数字
//			int f2 = (i % 10000) / 1000;  //千位数字
//			int f3 = (i % 1000) / 100;  //百位数字
//			int f4 = (i % 100) / 10;    //十位数字
//			if (pow(f1, n) + pow(f2, n) + pow(f3, n) + pow(f4, n)+ pow((i % 10), n) == i)
//			{
//				printf("%ld ", i);
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}
