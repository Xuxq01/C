#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void Initnext(char s2[], int next[])
//{
//	int i = 1, j = 0;
//	int len = (int)strlen(s2);
//	next[1] = 0;
//	while (i < len)
//	{
//		if (j == 0 || s2[i-1] == s2[j-1])
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//}
//int KMP(char s1[], char s2[], int next[])
//{
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	int i = 1, j = 1;
//	while (i <= len1 && j <= len2)
//	{
//		if (j == 0 || s1[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j > len2)
//		return i - len2;
//	return 0;
//}
//int main()
//{
//	int next[1000];
//	char* s1 = "ababcabcacbab";
//	char* s2 = "abcac";
//	Initnext(s2, next);
//	int ret = KMP(s1, s2, next);
//	printf("%d\n", ret);
//	return 0;
//}

//void Initnext(char s2[], int next[])
//{
//	int i = 1, j = 0;
//	next[1] = 0;
//	int len = (int)strlen(s2);
//	while (i < len)
//	{
//		if (j == 0 || s2[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//}
//int KMP(char s1[], char s2[], int next[])
//{
//	int i = 1, j = 1;
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	while (i <= len1 && j <= len2)
//	{
//		if (j == 0 || s1[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j > len2)
//		return i - len2;
//	return 0;
//}
//int main()
//{
//	char s1[] = "ababcabcacbab";
//	char s2[] = "abcac";
//	int next[100];
//	Initnext(s2, next);
//	int ret = KMP(s1, s2, next);
//	printf("%d\n", ret);
//	return 0;
//}

//void Initnext(char s2[], int next[])
//{
//	int i = 1, j = 0;
//	int len = (int)strlen(s2);
//	next[1] = 0;
//	while (i < len)
//	{
//		if (j == 0 || s2[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//}
//int KMP(char s1[], char s2[], int next[])
//{
//	int i = 1, j = 1;
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	while (i <= len1 && j <= len2)
//	{
//		if (j == 0 || s1[i-1] == s2[j-1])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j > len2)
//		return i - len2;
//	return 0;
//}
//int main()
//{
//	char s1[] = "ababcabcacbab";
//	char s2[] = "abcac";
//	int next[100];
//	Initnext(s2, next);
//	int ret = KMP(s1, s2, next);
//	printf("%d\n", ret);
//	return 0;
//}


//void Initnext(char s2[],int next[])
//{
//	int i = 1, j = 0;
//	next[1] = 0;
//	int len = (int)strlen(s2);
//	while (i < len)
//	{
//		if (j == 0 || s2[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//}
//int KMP(char s1[], char s2[], int next[])
//{
//	int i = 1, j = 1;
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	while (i <= len1 && j <= len2)
//	{
//		if (j == 0 || s1[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j > len2)
//	{
//		return i - len2;
//	}
//	return 0;
//}
//int main()
//{
//	char s1[] = "ababcabcacbab";
//	char s2[] = "abcac";
//	int next[100];
//	Initnext(s2, next);
//	int ret = KMP(s1, s2, next);
//	printf("%d\n", ret);
//	return 0;
//}

//void Initnext(char s2[], int next[])
//{
//	int i = 1, j = 0;
//	next[1] = 0;
//	int len = (int)strlen(s2);
//	while (i < len)
//	{
//		if (j == 0 || s2[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//}
//int KMP(char s1[], char s2[], int next[])
//{
//	int i = 1, j = 1;
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	while (i <= len1 && j <= len2)
//	{
//		if (j == 0 || s1[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j > len2)
//		return i - len2;
//	return 0;
//}
//int main()
//{
//	char s1[] = "ababcabcacab";
//	char s2[] = "abcac";
//	int next[100];
//	Initnext(s2, next);
//	int ret = KMP(s1, s2, next);
//	printf("%d\n", ret);
//	return 0;
//}

//int KMP(char s1[], char s2[], int next[])
//{
//	int i = 1, j = 1;
//	while (i <= (int)strlen(s1) && j <= (int)strlen(s2))
//	{
//		if (j == 0 || s1[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j > (int)strlen(s2))
//		return i - (int)strlen(s2);
//	return 0;
//}
//void Initnext(char s2[], int next[])
//{
//	int i = 1, j = 0;
//	next[1] = 0;
//	int len = (int)strlen(s2);
//	while (i <= len)
//	{
//		if (j == 0 || s2[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//}
//int main()
//{
//	char s1[] = "ababcabcacab";
//	char s2[] = "abcac";
//	int next[100];
//	Initnext(s2, next);
//	int ret = KMP(s1, s2, next);
//	printf("%d\n", ret);
//	return 0;
//}


//int KMP(char s1[], char s2[], int next[])
//{
//	int i = 1, j = 1;
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	while (i <= len1 && j <= len2)
//	{
//		if (j == 0 || s1[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j > len2)
//		return i - len2;
//	return 0;
//}
//void Initnext(char s2[], int next[])
//{
//	int i = 1, j = 0;
//	next[1] = 0;
//	int len = (int)strlen(s2);
//	while (i <= len)
//	{
//		if (j == 0 || s2[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//}
//int main()
//{
//	char s1[] = "ababcabcacab";
//	char s2[] = "abcac";
//	int next[100];
//	Initnext(s2, next);
//	int ret = KMP(s1, s2, next);
//	printf("%d\n", ret);
//	return 0;
//}


//int KMP(char s1[], char s2[], int next[])
//{
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	int i = 1, j = 1;
//	while (i <= len1 && j <= len2)
//	{
//		if (j == 0 || s1[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j > len2)
//		return i - len2;
//	return 0;
//}
//void Initnext(char s2[], int next[])
//{
//	int len = (int)strlen(s2);
//	next[1] = 0;
//	int i = 1, j = 0;
//	while (i <= len)
//	{
//		if (j == 0 || s2[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//			j = next[j];
//	}
//}
//int main()
//{
//	char s1[] = "ababcabcacab";
//	char s2[] = "abcac";
//	int next[100];
//	Initnext(s2, next);
//	int ret = KMP(s1, s2, next);
//	printf("%d", ret);
//	return 0;
//}


//int KMP(char s1[], char s2[], int next[])
//{
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	int i = 1, j = 1;
//	while (i <= len1 && j <= len2)
//	{
//		if (j == 0 || s1[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j > len2)
//		return i - len2;
//	return 0;
//}
//void Initnext(char s2[], int next[])
//{
//	next[1] = 0;
//	int len = (int)strlen(s2);
//	int i = 1, j = 0;
//	while (i <= len)
//	{
//		if (j == 0 || s2[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//}
//int main()
//{
//	char s1[] = "ababcabcacab";
//	char s2[] = "abcac";
//	int next[100];
//	Initnext(s2, next);
//	int ret = KMP(s1, s2, next);
//	printf("%d", ret);
//	return 0;
//}

//int KMP(char s1[], char s2[], char next[])
//{
//	int i = 1, j = 1;
//	int len1 = (int)strlen(s1);
//	int len2 = (int)strlen(s2);
//	while (i <= len1 && j <= len2)
//	{
//		if (j == 0 || s1[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//	if (j > len2)
//	{
//		return i - len2;
//	}
//	return 0;
//}
//void Initnext(char s2[], char next[])
//{
//	int i = 1, j = 0;
//	next[1] = 0;
//	int len = (int)strlen(s2);
//	while (i <= len)
//	{
//		if (j == 0 || s2[i - 1] == s2[j - 1])
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//		{
//			j = next[j];
//		}
//	}
//}
//int main()
//{
//	char s1[] = "ababcabcacab";
//	char s2[] = "abcac";
//	char next[100];
//	Initnext(s2, next);
//	int ret = KMP(s1, s2, next);
//	printf("%d", ret);
//	return 0;
//}

int main()
{
	int a[] = { 1,2,3 };
	a[4] = 78;
	printf("%d", a[4]);
	return 0;
}