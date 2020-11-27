#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//内存中源位置和目标位置出现重叠,采用memmove函数

char* Mymemmove(char* dest, char* src, int size)
{
	assert(dest&&src);
	if (src == NULL)
		return dest;
	char *p = dest;
	if (src > dest)      //源位置在目标位置之后
	{
		while (size--)
		{
			*dest++ = *src++;
		}
	}
	else              //源位置在目标位置之前       
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
//	//printf("%s\n", Mymemmove(dest, dest+2, 3));     //345456     两个不能同时输出，前边的改变会影响后边内容的输出。
//}