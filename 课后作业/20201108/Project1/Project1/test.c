#include <stdio.h>
#include <windows.h>

int get_max(int a, int b)
{
	return a>b ? a : b;
}

	int main()
	{
		int num1 = 10;
		int num2 = 20;
		//Ҫ�����get_max����
		int max = get_max(num1, num2);
		printf("max = %d\n", max);
	
	
	system("pause");
	return 0;
}



