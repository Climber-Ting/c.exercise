#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

//�ݹ鷽��ʵ��strlen()

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
//�ǵݹ鷽��ʵ��strlen
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
//	scanf("%c", &str);   */   //������
//	int m = myStrlen(str);
//	printf("%d\n", m);
//	system("pause");
//	return 0;
//}