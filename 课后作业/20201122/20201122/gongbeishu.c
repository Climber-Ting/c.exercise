#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
/*������������С������*/

//���������е��������ʼѭ����֪���ҵ�����ͬʱ����������Ϊֹ
int fun1(int a,int b)
{
	int max = a > b ? a : b;
	int i;
	for (i = max;; i++)
	{
		if (i%a == 0 && i%b == 0)
		{

			break;
		}
	}
	return i;
}


//շת�����
int fun2(int a,int b)
{
	int s = 1;
	int max = a > b ? a : b;
	for (int i = 2; i <= max; i++)
	{
		if (a%i == 0 && b%i == 0)
		{
			a /= i;
			b /= i;
			s *= i;
		}
	}
	s *= a;
	s *= b;
	return s;
}

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int s = fun2(a, b);
//	printf("%d\n", s);
//	system("pause");
//	return 0;
//}