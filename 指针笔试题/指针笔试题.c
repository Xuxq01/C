#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
	//一维数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));        //16 - sizeof(数组名)-计算的是数组总大小-单位是字节
	//printf("%d\n", sizeof(a + 0));    //4/8 - 数组名这里表示首元素地址，a+0还是首元素地址，地址大小4/8字节
	//printf("%d\n", sizeof(*a));       //4 - 数组名表示首元素地址，*a是首元素，sizeof(*a)就是4
	//printf("%d\n", sizeof(a + 1));    //4/8 - 数组名这里表示第二个元素地址，a+0还是首元素地址，地址大小4/8字节
	//printf("%d\n", sizeof(a[1]));     //4 - 第二个元素大小
	//printf("%d\n", sizeof(&a));       //4/8 - &a取出数组的地址，数组的地址大小也是4/8字节
	//printf("%d\n", sizeof(*&a));      //16 - &a取出数组地址，数组地址解引用访问整个数组，计算数组大小
	//printf("%d\n", sizeof(&a + 1));   //4/8 - 跳过了一个数组，但还是地址，大小为4/8字节
	//printf("%d\n", sizeof(&a[0]));    //4/8 - 第一个元素地址
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 - 第二个元素地址


	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));        //6 - 计算数组的大小
	//printf("%d\n", sizeof(arr + 0));    //4/8 - 首元素地址
	//printf("%d\n", sizeof(*arr));       //1 - arr是首元素地址，*arr是首元素，字符大小是一个字节
	//printf("%d\n", sizeof(arr[1]));     //1 - 第二个元素大小
	//printf("%d\n", sizeof(&arr));       //4/8 - 数组的地址，大小4/8字节
	//printf("%d\n", sizeof(&arr + 1));   //4/8 - 跳过了一个数组，还是地址，大小4/8字节
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - 第二个元素地址

	//printf("%d\n", strlen(arr));        //随机值 - 不确定\0位置
	//printf("%d\n", strlen(arr + 0));    //和上一行完全相同
	////printf("%d\n", strlen(*arr));       //err - 传了个字符'a'，ASCII码值97，strlen要地址，将97作为地址向后访问，非法访问
	////printf("%d\n", strlen(arr[1]));     //err - 传了个字符'b'，与上一行相同
	//printf("%d\n", strlen(&arr));       //随机值，与前两个一样
	//printf("%d\n", strlen(&arr + 1));   //随机值 - 跳过一个数组，比前两个随机值少6
	//printf("%d\n", strlen(&arr[0] + 1));//随机值 - 比前两个随机值少1


	//字符串数组
	//char arr[] = "abcdef";//a b c d e f \0
	//printf("%d\n", strlen(arr));        //6 - 首元素开始往后数
	//printf("%d\n", strlen(arr + 0));    //6 - 上一行相同
	////printf("%d\n", strlen(*arr));       //err - 传了个字符'a'，ASCII码值97，strlen要地址，将97作为地址向后访问，非法访问
	////printf("%d\n", strlen(arr[1]));     //err - 传字符'b'
	//printf("%d\n", strlen(&arr));       //6 - 从起始地址开始数
	//printf("%d\n", strlen(&arr + 1));   //随机值 - 跳过了一个数组
	//printf("%d\n", strlen(&arr[0] + 1));//5 - 从第二个元素地址开始数

	//printf("%d\n", sizeof(arr));        //7 - 整个数组大小，七个字符七个字节
	//printf("%d\n", sizeof(arr + 0));    //4/8 - 计算首元素地址大小
	//printf("%d\n", sizeof(*arr));       //1 - 首元素大小
	//printf("%d\n", sizeof(arr[1]));     //1 - 第二个元素大小
	//printf("%d\n", sizeof(&arr));       //4/8 - 计算数组的地址大小
	//printf("%d\n", sizeof(&arr + 1));   //4/8 - 跳过整个数组后的地址，仍然是地址，大小4/8字节
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 - 第二个元素的地址大小


	//字符串指针
	//char* p = "abcdef";//a b c d e f \0
	//printf("%d\n", sizeof(p));        //4/8 - 计算指针变量p的大小
	//printf("%d\n", sizeof(p + 1));    //4/8 - 计算字符b地址的大小
	//printf("%d\n", sizeof(*p));       //1 - 第一个字符大小
	//printf("%d\n", sizeof(p[0]));     //1 - 同上
	//printf("%d\n", sizeof(&p));       //4/8 - 地址大小
	//printf("%d\n", sizeof(&p + 1));   //4/8 - 跳过字符串，还是地址
	//printf("%d\n", sizeof(&p[0] + 1));//4/8

	//printf("%d\n", strlen(p));        //6
	//printf("%d\n", strlen(p + 1));    //5
	////printf("%d\n", strlen(*p));       //err
	////printf("%d\n", strlen(p[0]));     //err
	//printf("%d\n", strlen(&p));       //随机值
	//printf("%d\n", strlen(&p + 1));   //随机值
	//printf("%d\n", strlen(&p[0] + 1));//5


	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));         //48
//	printf("%d\n", sizeof(a[0][0]));   //4
//	printf("%d\n", sizeof(a[0]));      //16 - 第一行数组名 - sizeof(数组名) - 第一行数组的大小
//	printf("%d\n", sizeof(a[0]+1));    //4/8 - 第一行第二个元素地址大小
//	printf("%d\n", sizeof(*(a[0]+1))); //4 - 第一行第二个元素大小
//	printf("%d\n", sizeof(a+1));       //4/8 - 第二行数组的地址
//	printf("%d\n", sizeof(*(a+1)));    //16 - 相当于数组名单独放入，即a[1]，计算第二行大小
//	printf("%d\n", sizeof(&a[0]+1));   //4/8 - 第二行的地址
//	printf("%d\n", sizeof(*(&a[0]+1)));//16
//	printf("%d\n", sizeof(*a));        //16 - 第一行的大小
//	printf("%d\n", sizeof(a[3]));      //16 - 四个整形的一维数组
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//强制类型转换，值没有发生改变
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
//}*p;//结构体指针p
////假设p的值为0x100000
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);               //100014 - 结构体指针+1，跳过一个结构体20字节
//	printf("%p\n", (unsigned long)p + 0x1);//100001 - 转换为整型类型+1，整数+1就是+1
//	printf("%p\n", (unsigned int*)p + 0x1);//100004 - 跳过一个无符号整型，+4
//	return 0;
//}



//#include <stdio.h>//64位下报错
//int main()
//{
//	int a[4] = { 1,2,3,4 };        //小端存储:01 00 00 00,02 00 00 00,03 00 00 00,04 00 00 00
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);//地址强转后+1，向后偏移了一个字节，ptr2指向01后的00
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr2指向四个字节内容00 00 00 02，即0x02 00 00 00
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式，值为最后表达式的值,算出的结果为1，3，5，即数组内存放的只有1，3，5，0，0，0
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
//	int(*p)[4];//指向数组，数组四个元素，每个元素整型
//	p = a;     //int(*)[4] - int(*)[5] - a第一行五个元素
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//aa[1] - 第二行首元素的地址
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