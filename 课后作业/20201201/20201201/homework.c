#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main()
//{
//	char str[] = "192.168.3.21";
//	char* p;
//	p = strtok(str, ".");
//	char* arr[4];
//
//	int a[4] = { 0 };
//
//	for (int i = 0; i <= 3;i++)
//	{
//		printf("%s\n", p);
//		arr[i] = p;
//		p = strtok(NULL, ".");
//	}
//
//	for (int i = 0; i <=3; i++)
//	{
//		a[i] = atoi(arr[i]);
//		printf("%d ", a[i]);
//	}	
//}


//int main()
//{
//	char str[] = "- This, a sample string.";
//	char * pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}