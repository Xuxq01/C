#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()//�䳤���鲻�����б�������֧��(C99��׼)
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
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��ķ�ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//			printf("%d ", *(p + i));
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);//��ʱ�ڴ��Ѿ���������p��ָ����Ȼû�����仯
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	//malloc(10*sizeof(int))
//	int* p = (int*)calloc(10, sizeof(int));//calloc���ʼ��Ϊ0,Ч�ʵ���malloc(����ʼ��)
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
//	//�ͷſռ�(free�����������ͷŶ�̬���ٵĿռ��)
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc
//������̬�����ڴ�ռ�Ĵ�С
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
//	//ֻ����ʹ��malloc���ٵ�20���ֽڿռ�
//	//��������20���ֽڲ����������ǵ�ʹ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//	//
//	//reallocʹ�õ�ע������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ����򿪱�һ����������Ŀռ�
//	//  ���Ұ�ԭ���ڴ��е����ݿ������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ����Ϊ����realloc׷��ʧ�ܻ᷵��һ����ָ��
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
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	ptr = NULL;
//
//	return 0;
//}


//realloc����ʵ��malloc�Ĺ���
//int main()
//{
//	int* p = realloc(NULL, 40);//malloc(40);
//	return 0;
//}


//����������һЩ����
//int main()
//{
//	//1.��NULL���н����ò���
//	//int* p = (int*)malloc(40);
//	////��һmallocʧ����,p�ͱ���ֵΪNULL
//	//*p = 0;//err
//	//int i = 0;
//	//for (i = 0; i < !0; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//	//2.�Զ�̬�����ڴ��Խ�����
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
//	//3.�ԷǶ�̬�����ڴ��free��ջ��
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//
//	//free(p);
//	//p = NULL;
//
//	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
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
//	////���տռ�
//	//free(p);//freeֻ�ܴ���ʼλ�ÿ�ʼ�ͷţ���ʱp��ָ�����
//	//p = NULL;
//
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷſռ�
//	//free(p);
//	////p = NULL;//�˴�p��Ϊ��ָ��֮�����ͷŵ���ʲô��û�иɣ����Ῠ��
//	////...
//	//free(p);
//
//	//6.��̬�����ڴ������ͷ�(�ڴ�й©)
//	while (1)
//	{
//		malloc(1);
//	}
//
//	return 0;
//}



//��������
//struct S
//{
//	int n;
//	int arr[];//δ֪��С��
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


//����2
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
//	//������С
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
//	//�ͷ��ڴ�
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

