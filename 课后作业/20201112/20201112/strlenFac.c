#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

//递归方法实现strlen()

int myStrlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + myStrlen(str + 1);
	}
}
//非递归方法实现strlen
int my_strlen(char* str)
{
	int count = 0;
	while (*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
//int main()
//{
//	char* str = "abcde";
//	/*char* str=" ";
//	scanf("%c", &str);   */   //无意义
//	int m = myStrlen(str);
//	printf("%d\n", m);
//	system("pause");
//	return 0;
//}