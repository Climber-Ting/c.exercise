#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//�ǵݹ鷽��ʵ���ַ�������
void reverse(char *arr)
{
	char *left = arr;
	char *right = arr + strlen(arr) - 1;
	char temp;
	while(left < right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		
		left++;
		right--;
	}

}
//�ݹ鷽ʽʵ��
void rev(char *arr)
{
	char temp;
	temp = *arr;
	*arr = *(arr + strlen(arr) - 1);

	*(arr + strlen(arr) - 1) = '\0';
	if (strlen(arr + 1) > 2)
	{
		rev(arr + 1);
	}
	*(arr + strlen(arr) - 1) = temp;
}
int main()
{
	char  a[] = "abcde";
	reverse(a);
	for (int i = 0; i <= strlen(a) - 1; i++)
	{
		printf("%c", a[i]);
	}
	/*printf("%c\n", a);*/

	system("pause");
	return 0;
}
//int main()
//
//{
//
//	char *a = "abcde";
//
//	rev(a);
//
//	for (int i = 0; i <= strlen(a) - 1; i++)
//	{
//		printf("%c\n", *a);
//		a++;
//
//	}
//	//printf("%c\n", a);

//	system("pause");
//	return 0;
//
//}