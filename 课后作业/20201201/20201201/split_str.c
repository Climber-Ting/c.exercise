#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int split_str(char *str, char c, char ***p)
{
	if (NULL == str || NULL == p)
	{
		puts("NULL pointer error.");
		return -1;
	}
	//count num of chlid str
	int count = 0;
	char *ps = str;
	printf("str:%p\n", str);
	printf("*str:%d\n", *str);
	while (*ps)
	{
		if (*ps == c)
		{
			count += 1;
		}
		ps++;
	}
	count += 1;
	//char *arg[4] = {0};

	//malloc store child str pointer arr
	*p = (char **)malloc(sizeof(char *)* count);
	if (NULL == *p)
	{
		puts("malloc store arr error.");
		return -1;
	}
	memset((*p), 0, sizeof(char *)* count);
	//save child str pointer to arr

	int i = 1;
	ps = str;
	(*p)[0] = str;
	while (*str)
	{
		//printf("------");
		if (*str == c)
		{
			*str = 0;
			str += 1;
			(*p)[i] = str;
			printf("(*p)[%d]:%p\n", i, (*p)[i]);
			str++;
			i++;
			continue;
		}
		str += 1;
	}
	return 0;
}

