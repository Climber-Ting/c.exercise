#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//单词逆置

//整体逆转
void reverseStr(char* left,char* right)
{
	char temp;
	while (left < right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
void reverse(char *str)
{
	int len = strlen(str);
	if(len <= 1)
		return;
	reverseStr(str, str + len - 1);
	char* cur = str;
	while (*cur)
	{
		char* start = cur;
		while (*cur!=' '&&*cur!='\0')
		{
			++cur;
		}
		//当前单词区间[start,cur)
		//逆转单词
		reverseStr(start, cur - 1);
		//查找下一个单词的区间
		//跳过空格
		while (*cur == ' ')
		{
			++cur;
		}
	}
}
int main()
{
	char str[100] = { 0 };
	
	gets(str);
	reverse(str);
	printf("%s", str);

	system("pause");
	return 0;
}