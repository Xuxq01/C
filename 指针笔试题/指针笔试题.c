#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
	//һά����
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));        //16 - sizeof(������)-������������ܴ�С-��λ���ֽ�
	//printf("%d\n", sizeof(a + 0));    //4/8 - �����������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ����ַ��С4/8�ֽ�
	//printf("%d\n", sizeof(*a));       //4 - ��������ʾ��Ԫ�ص�ַ��*a����Ԫ�أ�sizeof(*a)����4
	//printf("%d\n", sizeof(a + 1));    //4/8 - �����������ʾ�ڶ���Ԫ�ص�ַ��a+0������Ԫ�ص�ַ����ַ��С4/8�ֽ�
	//printf("%d\n", sizeof(a[1]));     //4 - �ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&a));       //4/8 - &aȡ������ĵ�ַ������ĵ�ַ��СҲ��4/8�ֽ�
	//printf("%d\n", sizeof(*&a));      //16 - &aȡ�������ַ�������ַ�����÷����������飬���������С
	//printf("%d\n", sizeof(&a + 1));   //4/8 - ������һ�����飬�����ǵ�ַ����СΪ4/8�ֽ�
	//printf("%d\n", sizeof(&a[0]));    //4/8 - ��һ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 - �ڶ���Ԫ�ص�ַ


	//�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));        //6 - ��������Ĵ�С
	//printf("%d\n", sizeof(arr + 0));    //4/8 - ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));       //1 - arr����Ԫ�ص�ַ��*arr����Ԫ�أ��ַ���С��һ���ֽ�
	//printf("%d\n", sizeof(arr[1]));     //1 - �ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&arr));       //4/8 - ����ĵ�ַ����С4/8�ֽ�
	//printf("%d\n", sizeof(&arr + 1));   //4/8 - ������һ�����飬���ǵ�ַ����С4/8�ֽ�
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - �ڶ���Ԫ�ص�ַ

	//printf("%d\n", strlen(arr));        //���ֵ - ��ȷ��\0λ��
	//printf("%d\n", strlen(arr + 0));    //����һ����ȫ��ͬ
	////printf("%d\n", strlen(*arr));       //err - ���˸��ַ�'a'��ASCII��ֵ97��strlenҪ��ַ����97��Ϊ��ַ�����ʣ��Ƿ�����
	////printf("%d\n", strlen(arr[1]));     //err - ���˸��ַ�'b'������һ����ͬ
	//printf("%d\n", strlen(&arr));       //���ֵ����ǰ����һ��
	//printf("%d\n", strlen(&arr + 1));   //���ֵ - ����һ�����飬��ǰ�������ֵ��6
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ - ��ǰ�������ֵ��1


	//�ַ�������
	//char arr[] = "abcdef";//a b c d e f \0
	//printf("%d\n", strlen(arr));        //6 - ��Ԫ�ؿ�ʼ������
	//printf("%d\n", strlen(arr + 0));    //6 - ��һ����ͬ
	////printf("%d\n", strlen(*arr));       //err - ���˸��ַ�'a'��ASCII��ֵ97��strlenҪ��ַ����97��Ϊ��ַ�����ʣ��Ƿ�����
	////printf("%d\n", strlen(arr[1]));     //err - ���ַ�'b'
	//printf("%d\n", strlen(&arr));       //6 - ����ʼ��ַ��ʼ��
	//printf("%d\n", strlen(&arr + 1));   //���ֵ - ������һ������
	//printf("%d\n", strlen(&arr[0] + 1));//5 - �ӵڶ���Ԫ�ص�ַ��ʼ��

	//printf("%d\n", sizeof(arr));        //7 - ���������С���߸��ַ��߸��ֽ�
	//printf("%d\n", sizeof(arr + 0));    //4/8 - ������Ԫ�ص�ַ��С
	//printf("%d\n", sizeof(*arr));       //1 - ��Ԫ�ش�С
	//printf("%d\n", sizeof(arr[1]));     //1 - �ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&arr));       //4/8 - ��������ĵ�ַ��С
	//printf("%d\n", sizeof(&arr + 1));   //4/8 - �������������ĵ�ַ����Ȼ�ǵ�ַ����С4/8�ֽ�
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - �ڶ���Ԫ�صĵ�ַ��С


	//�ַ���ָ��
	//char* p = "abcdef";//a b c d e f \0
	//printf("%d\n", sizeof(p));        //4/8 - ����ָ�����p�Ĵ�С
	//printf("%d\n", sizeof(p + 1));    //4/8 - �����ַ�b��ַ�Ĵ�С
	//printf("%d\n", sizeof(*p));       //1 - ��һ���ַ���С
	//printf("%d\n", sizeof(p[0]));     //1 - ͬ��
	//printf("%d\n", sizeof(&p));       //4/8 - ��ַ��С
	//printf("%d\n", sizeof(&p + 1));   //4/8 - �����ַ��������ǵ�ַ
	//printf("%d\n", sizeof(&p[0] + 1));//4/8

	//printf("%d\n", strlen(p));        //6
	//printf("%d\n", strlen(p + 1));    //5
	////printf("%d\n", strlen(*p));       //err
	////printf("%d\n", strlen(p[0]));     //err
	//printf("%d\n", strlen(&p));       //���ֵ
	//printf("%d\n", strlen(&p + 1));   //���ֵ
	//printf("%d\n", strlen(&p[0] + 1));//5


	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));         //48
//	printf("%d\n", sizeof(a[0][0]));   //4
//	printf("%d\n", sizeof(a[0]));      //16 - ��һ�������� - sizeof(������) - ��һ������Ĵ�С
//	printf("%d\n", sizeof(a[0]+1));    //4/8 - ��һ�еڶ���Ԫ�ص�ַ��С
//	printf("%d\n", sizeof(*(a[0]+1))); //4 - ��һ�еڶ���Ԫ�ش�С
//	printf("%d\n", sizeof(a+1));       //4/8 - �ڶ�������ĵ�ַ
//	printf("%d\n", sizeof(*(a+1)));    //16 - �൱���������������룬��a[1]������ڶ��д�С
//	printf("%d\n", sizeof(&a[0]+1));   //4/8 - �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0]+1)));//16
//	printf("%d\n", sizeof(*a));        //16 - ��һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));      //16 - �ĸ����ε�һά����
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//ǿ������ת����ֵû�з����ı�
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5
//	return 0;
//}


//#include <stdio.h>
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;//�ṹ��ָ��p
////����p��ֵΪ0x100000
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);               //100014 - �ṹ��ָ��+1������һ���ṹ��20�ֽ�
//	printf("%p\n", (unsigned long)p + 0x1);//100001 - ת��Ϊ��������+1������+1����+1
//	printf("%p\n", (unsigned int*)p + 0x1);//100004 - ����һ���޷������ͣ�+4
//	return 0;
//}



//#include <stdio.h>//64λ�±���
//int main()
//{
//	int a[4] = { 1,2,3,4 };        //С�˴洢:01 00 00 00,02 00 00 00,03 00 00 00,04 00 00 00
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//��ַǿת��+1�����ƫ����һ���ֽڣ�ptr2ָ��01���00
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr2ָ���ĸ��ֽ�����00 00 00 02����0x02 00 00 00
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//���ű��ʽ��ֵΪ�����ʽ��ֵ,����Ľ��Ϊ1��3��5���������ڴ�ŵ�ֻ��1��3��5��0��0��0
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];//ָ�����飬�����ĸ�Ԫ�أ�ÿ��Ԫ������
//	p = a;     //int(*)[4] - int(*)[5] - a��һ�����Ԫ��
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//aa[1] - �ڶ�����Ԫ�صĵ�ַ
//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}