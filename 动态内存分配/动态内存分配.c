#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()//变长数组不是所有编译器都支持(C99标准)
//{
//	int n, i;
//	scanf("%d", &n);
//	int arr[n];
//	for (i = 0; i < n; i++)
//		arr[i] = i;
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <windows.h>

//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//			printf("%d ", *(p + i));
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);//此时内存已经返还，但p的指向仍然没发生变化
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	//malloc(10*sizeof(int))
//	int* p = (int*)calloc(10, sizeof(int));//calloc会初始化为0,效率低于malloc(不初始化)
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间(free函数是用来释放动态开辟的空间的)
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc
//调整动态开辟内存空间的大小
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//只是在使用malloc开辟的20个字节空间
//	//假设这里20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	//
//	//realloc使用的注意事项
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域开辟一块满足需求的空间
//	//  并且把原来内存中的数据拷贝，释放旧的内存空间，最后返回新开辟的内存空间地址
//	//3.得用一个新的变量来接受realloc函数的返回值，因为倘若realloc追加失败会返回一个空指针
//	int* ptr = realloc(p, 400);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//	ptr = NULL;
//
//	return 0;
//}


//realloc可以实现malloc的功能
//int main()
//{
//	int* p = realloc(NULL, 40);//malloc(40);
//	return 0;
//}


//可能遇到的一些问题
//int main()
//{
//	//1.对NULL进行解引用操作
//	//int* p = (int*)malloc(40);
//	////万一malloc失败了,p就被赋值为NULL
//	//*p = 0;//err
//	//int i = 0;
//	//for (i = 0; i < !0; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//	//2.对动态开辟内存的越界访问
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
//	//3.对非动态开辟内存的free，栈区
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//
//	//free(p);
//	//p = NULL;
//
//	//4.使用free释放动态开辟内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////回收空间
//	//free(p);//free只能从起始位置开始释放，此时p已指向最后
//	//p = NULL;
//
//	//5.对同一块动态内存的多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放空间
//	//free(p);
//	////p = NULL;//此处p置为空指针之后再释放等于什么都没有干，不会卡死
//	////...
//	//free(p);
//
//	//6.动态开辟内存忘记释放(内存泄漏)
//	while (1)
//	{
//		malloc(1);
//	}
//
//	return 0;
//}



//柔性数组
//struct S
//{
//	int n;
//	int arr[];//未知大小的
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//
//	return 0;
//}


//方法2
//struct S {
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//调整大小
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放内存
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

