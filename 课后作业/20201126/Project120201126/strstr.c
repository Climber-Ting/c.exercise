#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//�ַ������Һ�����ʵ�֣������Ӵ���һ�����������ֵ�λ�á�

//�����ʽΪ�����������ַ�����λ��
int Mystrstr(char* str,char* substr)
{
	assert(str&&substr);

	if (substr == NULL)
		return 0;
	char* p = str;

	while (*p)
	{
		char* start = p;
		char* sub = substr;
		while (start&&sub&&*sub == *start)
		{
			start++;
			sub++;
		}
		if (*sub == '\0')
			return p-str;
		p++;
	}
	return 0;
}
//�����ʽΪ�ַ���
//char* Mystrstr(char* str, char* substr)
//{
//	assert(str&&substr);
//	if (substr == NULL)
//		return NULL;
//	char* p = str;
//	while (*p)
//	{
//		char* start = p;
//		char* sub = substr;
//		while (start&&sub&&*sub == *start)
//		{
//			start++;
//			sub++;
//		}
//		if (*sub == '\0')
//			//��ʱ˵���Ӵ����е��ַ��Ѿ��������б��ҵ�
//			return p;  //���ص�һ�γ��ֵ�λ�ã����ʣ���ַ�����
//		p++;
//	}
//	return NULL;
//}

int main()
{
	char* str = "12343456";
	char* sub = "345";
	int  ret = Mystrstr(str, sub);
	printf("%d\n", ret);

}