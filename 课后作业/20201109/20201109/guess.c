#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int a;
	int ret= rand()%100;
	
	while (1)
	{
		scanf("%d", &a);
		if (ret== a)
		{
			printf("�¶��ˣ�\n");
			break;
		
		}
		else if (ret <a)
		{
			printf("�´��ˣ�\n");
		}
		else 
		{
			printf("��С�ˣ�\n");
		}
	}
	


	system("pause");
	return 0;
}