#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myatoi(char *str)
{
	if (NULL == str)
	{
		puts("NULL pointer error.");
		return 0;
	}

	int ret = 0;
	while (*str)
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	return ret;
}
