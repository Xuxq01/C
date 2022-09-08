#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void bubble(int arr[])
//{
//	int i, j;
//	for(i=0;i<9;i++)
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
//			}
//		}
//}
//void select(int arr[])
//{
//	int i, j, k;
//	for(i=0;i<9;i++)
//		for (j = i+1; j < 10; j++)
//		{
//			k = i;
//			if (arr[k] > arr[j])k = j;
//			if (k != i)
//			{
//				int t = arr[i]; arr[i] = arr[k]; arr[k] = t;
//			}
//		}
//}
//int main()
//{
//	int arr[10];
//	int i;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	select(arr);
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, j;
//	printf("输入年份:");
//	scanf("%d", &i);
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		j = 1;
//	else
//		j = 0;
//	if (j)
//		printf("%d是闰年", i);
//	else
//		printf("%d不是闰年", i);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, j, n = 0;
//	for(i=1;i<5;i++)
//		for (j = 1; j < 6; j++,n++)
//		{
//			if (n % 5 == 0)
//				printf("\n");
//			printf("%d\t", i * j);
//		}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i=1, j=1, k;
//	for (k = 1; k <= 20; k++)
//	{
//		printf("%12d%12d", i, j);
//		if (k % 2 == 0)printf("\n");
//		i = i + j;
//		j = i + j;
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n, i;
//	printf("输入n:");
//	scanf("%d", &n);
//	for (i = 2; i <= sqrt(n); i++)
//		if (n % i == 0)
//			break;
//	if (i <= sqrt(n))
//		printf("%d不是素数", n);
//	else
//		printf("%d是素数", n);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i, j, k, m = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//			if (i % j == 0)
//				break;
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			m += 1;
//		}
//		if (m % 10 == 0)printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//void bubble(int arr[])
//{
//	int i, j;
//	for(i=0;i<9;i++)
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
//			}
//		}
//}
//void select(int arr[])
//{
//	int i, j, k;
//	for(i=0;i<9;i++)
//		for (j = i + 1; j < 10; j++)
//		{
//			k = i;
//			if (arr[k] < arr[j])k = j;
//			if (k != i)
//			{
//				int t = arr[i]; arr[i] = arr[k]; arr[k] = t;
//			}
//		}
//}
//int main()
//{
//	int arr[10];
//	int i;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	//bubble(arr);
//	select(arr);
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < i; j++)
//			printf(" ");
//		for (j = 0; j < 5; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int max2(int a, int b)
//{
//	return a >= b ? a : b;
//}
//int max4(int a, int b, int c, int d)
//{
//	int max = max2(a, b);
//	max = max2(max, c);
//	max = max2(max, d);
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	int max = max4(a, b, c, d);
//	printf("%d", max);
//	return 0;
//}

//#include <stdio.h>
//int fac(int n)
//{
//	if (n < 0)
//		return -1;
//	else if (n == 0 || n == 1)
//		return 1;
//	else
//		return fac(n - 1) * n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d!=%d", n, fac(n));
//	return 0;
//}

//#include <stdio.h>
//int fac(int i)
//{
//	static int f = 1;
//	f = f * i;
//	return f;
//}
//int main()
//{
//	int i;
//	for (i = 1; i <= 5; i++)
//		printf("%d!=%d\n", i, fac(i));
//	return 0;
//}

//#include <stdio.h>
//void swap(int* p1, int* p2)
//{
//	int t = *p1;
//	*p1 = *p2;
//	*p2 = t;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int* p1, * p2;
//	p1 = &a; p2 = &b;
//	if (a < b)swap(p1, p2);
//	printf("max=%d,min=%d", a, b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int i, * p;
//	p = arr;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i < 10; i++)
//		printf("%d ", *p++);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	if (t++ < 6)printf("%d\n", t);
//	else
//		printf("%d\n", t--);
//	return 0;
//}

//#include <stdio.h>
//struct Person
//{
//	char name[20];
//	int count;
//}leader[3]={"Li",0,"Zhang",0,"Sun",0};
//int main()
//{
//	int i, j;
//	char leader_name[20];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%s", leader_name);
//		for (j = 0; j < 3; j++)
//			if (strcmp(leader_name, leader[j].name) == 0)leader[j].count++;
//	}
//	for (i = 0; i < 3; i++)
//		printf("%5s:%d\n", leader[i].name, leader[i].count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c = 128;
//	a = c / 100 % 6;
//	b = (5) && (-1);
//	printf("%d,%d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	for (int k = 1; k < 10; k++)
//		switch (k % 2)
//		{
//		case 0:
//			printf("#");
//			break;
//		case 1:
//			k += 2;
//			printf("*");
//		defalt:
//			printf("\n");
//		}
//}

//#include <stdio.h>
//void f1(int x);
//void f2(int* y);
//int x = 2, y = 4;
//int main()
//{
//	int y = 6;
//	f1(x); f2(&y);
//	printf("main:x=%d, y=%d", x, y);
//	return 0;
//}
//void f1(int x)
//{
//	x++;
//	y++;
//	printf("f1:x=%d, y=%d\n", x, y);
//}
//void f2(int* y)
//{
//	x++;
//	(*y)++;
//	printf("f2:x=%d, y=%d\n", x, *y);
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i, j;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//			if (i % j == 0)
//				break;
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int word = 0, num = 0, i;
//	char arr[80];
//	char c;
//	gets_s(arr,80);
//	for (i = 0; (c = arr[i]) != '\0'; i++)
//	{
//		if (c == ' ')word = 0;
//		else if (word == 0)
//		{
//			word = 1;
//			num ++ ;
//		}
//	}
//	printf("%d", num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num, i, j, k;
//	for (num = 100; num < 1000; num++)
//	{
//		k = num % 10;
//		j = num / 10 % 10;
//		i = num / 100;
//		if (k * k * k + j * j * j + i * i * i == num)
//			printf("%d ", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int  a = 2, b = 7, c = 5, d;
//	switch (a > 0)
//	{
//	case 1:
//		d = b < 0;
//		if (d == 0)
//			printf("$");
//		else
//			printf("!");
//		break;
//	case 0:
//		d = c == 5;
//		if (d == 0)
//			printf("*");
//		else if (d == 1)
//			printf("#");
//		else
//			printf("%");
//		break;
//	default:
//		printf("&");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[11] = { 1,3,5,7,9,11,13,15,17,19 };
//	int i, j;
//	printf("输入一个数:");
//	scanf("%d", &a[10]);
//	for(i=0;i<10;i++)
//		for (j = 0; j < 10 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
//			}
//		}
//	for (i = 0; i < 11; i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][4] = { 1,2,3,4,9,8,7,6,-10,10,-5,2 };
//	int max = a[0][0], row, col, i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//		{
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//				row = i;
//				col = j;
//			}
//		}
//	printf("%d,%d,%d", max, row, col);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5 - i; j++)
//			printf(" ");
//		for (j = 0; j < 5; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 2 * i; j++)
//			printf(" ");
//		for (j = 0; j < 9 - 2 * i; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, sum=0;
//	for (i = 0; i <= 100; i++)
//		sum += i;
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[20];
//	int i, max, min, m, n;
//	for (i = 0; i < 20; i++)
//		scanf("%d", &arr[i]);
//	max = arr[0]; min = arr[0];
//	for (i = 0; i < 20; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//			m = i;
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//			n = i;
//		}
//	}
//	printf("最大值:%d,第%d\n最小值:%d,第%d", max, m, min, n);
//	return 0;
//}

//#include <stdio.h>
//void swap(int arr[], int n)
//{
//	int i = 0, j = n - 1, k;
//	for (k = 0; k <= n / 2; k++)
//	{
//		int t = arr[i];
//		arr[i] = arr[j];
//		arr[j] = t;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	int arr[5] = { 8,6,5,4,1 };
//	int i;
//	swap(arr, 5);
//	for (i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x, y, t;
//	x = y = 4;
//	t = ++x || --y;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a[] = "I am a boy", b[20], * p1, * p2;
//	p1 = a; p2 = b;
//	for (; *p1 != '\0'; p1++, p2++)
//		*p2 = *p1;
//	*p2 = '\0';
//	printf("%s", b);
//	return 0;
//}

#include <stdio.h>
int main()
{

	return 0;
}