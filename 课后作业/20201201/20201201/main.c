#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
"192.168.3.21"  13Byte

ip地址的取值范围： 0.0.0.0 - 255.255.255.255
1.按点分割字符串
"192"
"168"
"3"
"21"
2.将字符串转换为整数
3.将转换后的整数依次存储于unsigned char[4]中 
*/
int main()
{
	char str[] = "192.168.3.45";
	char **p = NULL;
	unsigned char arr[4] = { 0 };
	split_str(str, '.', &p);
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		arr[i] = myatoi(p[i]);
	}
	printf("%d.%d.%d.%d\n", arr[0], arr[1], arr[2], arr[3]);
	free(p);
	return 0;
}