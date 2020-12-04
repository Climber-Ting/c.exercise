#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

/*
写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 =AABCD和s2 = BCDAA，返回1
给定s1=abcd和s2=ACBD，返回0.
AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC

解析：
本题当然可以将所有旋转后的结果放到一个数组里，然后进行查找，但是这种做法既不好操作，也太费事，但是这题有一个很简单的做法：
其实ABCDE无论怎么旋，旋转后的所有结果，都包含在了ABCDEABCD这个字符串里了。
所以做法很简单，只需要将原字符串再来一遍接在后面，然后找一找待查找的字符串是不是两倍原字符串的子集即可。
*/

//int main()
//{
//	char arr[10] = { 0 };
//	char* str = "abcd";
//	strcpy(arr, str);
//	strcat(arr, str);
//	char* sub1 = "bcda";
//	char* sub2 = "cdab";
//	char* p = strstr(arr, sub1);
//	if (NULL !=p )
//	{
//		printf("%s是%s旋转后的子串\n", sub1, str);
//	}
//	 p = strstr(arr, sub2);
//	if (NULL != p)
//	{
//		printf("%s是%s旋转后的子串\n", sub2, str);
//	}
//}