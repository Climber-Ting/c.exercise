#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
////�ڴ渴�ƺ���,����ڴ����ص������ƵĽ������δ�����
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