#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
////内存复制函数,如果内存有重叠，复制的结果都是未定义的
//
char* Mymemcpy(char* dest,const char* src,int size)
{
	assert(dest&&src);
	if (src == NULL)
		return dest;
	char *p = dest;
	while (size--)
	{
		*dest++ = *src++;
	}
	return p;

}
//int main()
//{
//	char dest[10] = "123456";
//	char *src = "789";
//	printf("%s\n", Mymemcpy(dest, src, 3));
//
//}