#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//�ڴ���Դλ�ú�Ŀ��λ�ó����ص�,����memmove����

char* Mymemmove(char* dest, char* src, int size)
{
	assert(dest&&src);
	if (src == NULL)
		return dest;
	char *p = dest;
	if (src > dest)      //Դλ����Ŀ��λ��֮��
	{
		while (size--)
		{
			*dest++ = *src++;
		}
	}
	else              //Դλ����Ŀ��λ��֮ǰ       
	{
		for (int i = size; i >= 1; i--)
		{
			*(dest + i - 1) = *(src + i - 1);

		}
	}
	return p;

}
//int main()
//{
//	char dest[10] = "123456";
//	printf("%s\n", Mymemmove(dest+2, dest, 3));     //1236
//	//printf("%s\n", Mymemmove(dest, dest+2, 3));     //345456     ��������ͬʱ�����ǰ�ߵĸı��Ӱ�������ݵ������
//}