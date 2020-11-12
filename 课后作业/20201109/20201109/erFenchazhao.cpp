#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>


//int main()
//{
//	int a[10] = { 1, 2, 4, 6, 8, 12, 34, 57, 78, 100 };
//	int high, mid, low;
//	int len = sizeof(a) / sizeof(a[0]);
//	int n, m=0;
//	scanf("%d", &n);
//	high = 9;
//	low = 0;
//	mid = (low + high) / 2;
//	while (1)
//	{
//		
//		if (a[mid] == n)
//		{
//			m = mid;
//			break;
//			
//		}
//		else if (a[mid] > n)
//		{
//			high = mid-1;
//			low++;
//			mid = (low + high) / 2;
//		}
//		else if (a[mid] < n)
//		{
//			low = mid+1;
//			high++;
//			mid = (low + high) / 2;
//		}
//	}
//	printf("%d\n", m);
//	
//
//	system("pause");
//	return 0;
//}