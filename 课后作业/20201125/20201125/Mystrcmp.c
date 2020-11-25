#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

int Mystrcmp(char* str1,char* str2)
{
	assert(str1&&str2);
	if (str1 == NULL)
		return -1;
	if (str2 == NULL)
		return 1;
	while(*str1==*str2)
	{
		if (*str1=='\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}	
	else
	{
		return -1;
	}
}

int main()
{
	char *str1 = "125";
	char *str2 = "124";
	int ret = Mystrcmp(str1, str2);
	printf("%d\n", ret);
}