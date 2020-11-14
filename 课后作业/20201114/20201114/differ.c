#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//求两个数二进制中不同位的个数

//链接：https://www.nowcoder.com/questionTerminal/9c3b8a8d9f1c4ae3b709d04625586225
//来源：牛客网

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int c = a ^ b;
//	//c有多少个1就说明a与b有几个数字不同
//	int count = 0;
//	while (c){
//		count++;
//		c = c & (c - 1);
//	}
//
//	printf("%d\n", count);
//
//	system("pause");
//	return 0;
//}