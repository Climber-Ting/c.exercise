#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//��������

//������ת
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
		//��ǰ��������[start,cur)
		//��ת����
		reverseStr(start, cur - 1);
		//������һ�����ʵ�����
		//�����ո�
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