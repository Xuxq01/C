#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s1 = { "张三",20,"15249287076","男" };
//	Stu s2 = { "旺财",30,"15596668862","女" };
//	return 0;
//}

//#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//#include <stdio.h>
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age:  %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex:  %s\n", tmp.sex);
//}
//
//Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age:  %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex:  %s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "李四",40,"15598886688","男" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

//void sort(int arr[])
//{
//	int i = 0, j = 0;
//	for(i=0;i<10;i++)
//		for (j = 0; j < 10; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
//			}
//		}
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[10];
//	int i=0;
//	printf("输入十个数字:");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	sort(arr);
//	printf("从大到小:");
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][3];
//	int i, j, sum=0;
//	printf("请输入数据:");
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf("%d", &arr[i][j]);
//	for (i = 0; i < 3; i++)
//		sum = sum + arr[i][i];
//	printf("sum=%d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[5];
//	int i=0;
//	printf("请输入数字:\n");
//	for (i = 0; i < 5; i++)
//		scanf("%d", &a[i]);
//	printf("原数据:\n");
//	for (i = 0; i < 5; i++)
//		printf("%4d", a[i]);
//	printf("\n");
//	printf("现数据:\n");
//	for (i = 0; i < 5 / 2; i++)
//	{
//		int t = a[i]; a[i] = a[4 - i]; a[4 - i] = t;
//	}
//	for (i = 0; i < 5; i++)
//		printf("%4d", a[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char text[3][80];
//	int low=0, big=0, digit=0, space=0, other=0;
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入第%d行:\n", i + 1);
//		gets(text[i]);
//		for (j = 0; j < 80 && text[i][j] != '\0'; j++)
//		{
//			if (text[i][j] >= 'A' && text[i][j] <= 'Z')
//				big++;
//			else if (text[i][j] >= 'a' && text[i][j] <= 'z')
//				low++;
//			else if (text[i][j] >= '0' && text[i][j] <= '9')
//				digit++;
//			else if (text[i][j] == ' ')
//				space++;
//			else
//				other++;
//		}
//	}
//	printf("大写字母数:%d\n", big);
//	printf("小写字母数:%d\n", low);
//	printf("数字数:    %d\n", digit);
//	printf("空格数:    %d\n", space);
//	printf("其他字符数:%d\n", other);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr[5] = { '*','*','*','*','*' };
//	char* p = arr;
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < i; j++)
//			printf(" ");
//		for (j = 0; j < 5; j++)
//			printf("%c", *p++);
//		printf("\n");
//		p = arr;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a1[80], a2[40];
//	int i = 0, j = 0;
//	printf("输入第一行:");
//	scanf("%s", a1);
//	printf("输入第二行:");
//	scanf("%s", a2);
//	while (a1[i] != '\0')
//		i++;
//	while (a2[j] != '\0')
//		a1[i++] = a2[j++];
//	a1[i] = '\0';
//	printf("新句子:%s", a1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a1[80], a2[80];
//	printf("输入a2:");
//	scanf("%s", a2);
//	int sz = sizeof(a1) / sizeof(a1[0]);
//	int i;
//	for (i = 0; i <= sz; i++)
//		a1[i] = a2[i];
//	printf("a1:%s", a1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0; 
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}//debug下死循环,release下正常运行,release进行优化

////F5-启动调试-和F9配合使用的
////F9切换断点，再按消失,红点称为断点,F5直接跳到断点(执行逻辑上的下一个断点)
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//		printf("%d ", i);
//
//	for (i = 0; i < 100; i++)
//		printf("%d", 10 - i);
//	return 0;
//}

////F10逐过程，不会进入函数内部，F11逐语句，会进入函数内部，部分库函数不会进入
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	//while (*src != '\0')//第一次
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;
//
//	//while (*src!='\0')//第二次
//	//{
//	//	*dest++ = *src++;
//	//}
//	//*dest = *src;
//
//	//while (*dest++ = *src++)//第三次
//	//{
//	//	;
//	//}
//
//	//if (dest != NULL && src != NULL)//第四次，传错参不会崩溃，规避了问题但不利于发现问题
//	//{
//	//	while (*dest++ = *src++)
//	//	{
//	//		;
//	//	}
//	//}
//
//	//assert(dest != NULL);//第五次，断言为真什么都不发生，为假报错。断言，要头文件<assert.h>
//	//assert(src != NULL);
//	//while (*dest++ = *src++)
//	//{
//	//	;
//	//}
//}

//void my_strcpy(char* dest, const char* src)//第六次,const使写反会报错
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
// 
//char* my_strcpy(char* dest, const char* src)//第七次，最终
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
// 
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 100;
//	const int num = 10;
//	//int* p = &num;//const修饰的num依旧被修改，非法操作，因为p不知道const的存在
//	//const int* p = &num;//err const放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p(num)的值
//	//int* const p = &num;//const修饰的是指针变量p，即下行,p不能改变
//	//p = &n;
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 100;
//	const int num = 10;
//	const int* p = &num;
//	p = &n;//此时p指向的为n，*p随之改变为100
//	printf("%d\n", n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//	return 0;
//}

//int my_strlen(const char* str)//方法一，计数器
//{
//	int count = 0;
//	assert(str != NULL);//断言保证指针的有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[100];
//	gets(arr);
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int my_strlen(const char* str)//方法二，指针
//{
//	char* temp = str;
//	assert(str != NULL);//断言保证指针的有效性
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str-temp;
//}
//
//int main()
//{
//	char arr[100];
//	gets(arr);
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>//方法三，函数递归
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[100];
//	gets(arr);
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[100]={0};
//	gets(arr);
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>
//void test(/*void*/)//加void会出现警告
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test(100);//传了100但没接收，正常运行
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;//返回1，小端，返回0，大端
//}
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	//返回1,小端
//	//返回0,大端
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//#include <stdio.h>//整型提升
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//char只能存一个字节，八个比特位11111111
//	signed char b = -1;
//	//11111111
//	unsigned char c = -1;
//	//11111111
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//%d整型11111111最前边的1看作符号位，a,b补齐32位为11111111111111111111111111111111
//	//c的类型无符号，高位补0，00000000000000000000000011111111，原反补一样，打印255
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -128;//a=128输出结果相同，可按下述备注同样分析
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//10000000
//	//char类型，高位看作符号位，负数高位全补1
//	//11111111111111111111111110000000-补码
//	//无符号数原反补相同
//	printf("%u\n", a);
//	//%d - 打印十进制的有符号数字
//	//%u - 打印十进制的无符号数字
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}
//10000000 00000000 00000000 00010100
//11111111 11111111 11111111 11101011
//11111111 11111111 11111111 11101100 - -20的补码
//00000000 00000000 00000000 00001010 - 10的补码
//11111111 11111111 11111111 11110110 - 相加后的结果
//11111111 11111111 11111111 11110101
//10000000 00000000 00000000 00001010 - 原码-10

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}
//00000000 00000000 00000000 00001001
//...
//00000000 00000000 00000000 00000000
//10000000 00000000 00000000 00000001

//#include <stdio.h>
//int main()
//{
//	void hanoi(int, char, char, char);
//	int m;
//	printf("请输入盘子数:");
//	scanf("%d", &m);
//	printf("移动步骤为:\n");
//	hanoi(m, 'A', 'B', 'C');
//	return 0;
//}
//
//void hanoi(int n, char one, char two, char three)
//{
//	void move(char, char);
//	if (n == 1)
//		move(one, three);
//	else
//	{
//		hanoi(n - 1, one, three, two);
//		move(one, three);
//		hanoi(n - 1, two, one, three);
//	}
//}
//
//void move(char x, char y)
//{
//	printf("%c->%c\n", x, y);
//}

//#include <stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//		a[i] = -1 - i;
//	printf("%d", strlen(a));
//	return 0;
//}

//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//		printf("hello world\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
//	return 0;
//}//说明浮点型和整形在内存中的存储方式不同

//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	char* p = "abcdef";//"abcdef"是一个常量字符串，将a的地址付给了p
//	//*p = 'W';//错误
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	printf("%s\n", p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const char* p = "abcdef";
//	*p = 'W';
//	printf("%s\n", p);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";//p1和p2指向的常量字符串，因为不能改变，所以只创建了一个，指向同一个
//	if (p1 == p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	//if (arr1 == arr2)
//	//	printf("hehe\n");
//	//else
//	//	printf("haha\n");
//	return 0;
//}

//指针数组 - 数组 - 用来存放指针
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型的指针的数组 - 指针数组
//	char* pch[5];//存放字符的指针的数组 - 指针数组
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10; 
//	int b = 20; 
//	int c = 30; 
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//		printf("%d\n", *(arr[i]));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//			printf("%d ", *parr[i] + j);
//		printf("\n");
//	}
//	return 0;
//}

//数组指针 - 指针 - 指向数组的指针 - 存放数组的地址
//#include <stdio.h>
//int main()
//{
//	//int* p = NULL;//p是整形指针 - 指向整形的指针 - 可以存放整形的地址
//	//char* p = NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	//int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素的地址
//	//&arr - 数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(* p)[10] = &arr;//数组的地址要存起来
//	//上边的p就是数组指针
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));//*pa=arr
//	}
//	return 0;
//}

//#include <stdio.h>
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			printf("%d ", *(p[i]+j));
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);//arr - 数组名 - 首元素地址(1.sizeof(arr)，2.&arr除了两种情况都成立)
//	print2(arr, 3, 5);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针
//	int arr2[5];
//	int(*pa)[5] = &arr2;
//	return 0;
//}

//#include <stdio.h>
//void test(char* p)
//{
//	printf("%d", *p);
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test(p);
//	return 0;
//}

//函数指针 - 是指向函数的指针 - 存放函数地址的一个指针
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d", Add(a, b));
//	//&函数名 和 函数名 都是函数的地址
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int (*pa)(int,int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//代码1
//(*(void(*)())0)();//void(*)()说明是一个函数指针，括起来后边放0是强制类型转换，再解引用是调用该函数，最后的括号说明无参数。
//代码2
//void(*signal(int, void(*)(int)))(int);
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);

//#include <stdio.h>
//void menu()
//{
//	printf("******************************\n");
//	printf("**     1.add    2.sub       **\n");
//	printf("**     3.mul    4.div       **\n");
//	printf("**          0.exit          **\n");
//	printf("******************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//			printf("退出\n");
//		else
//			printf("选择错误\n");
//	} while (input);
//	return 0;
//}

//#include <stdio.h>//指向函数指针数组的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	int (*pfArr[4])(int, int);
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//ppfArr是一个数组指针，指针指向的数组有四个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)
//	return 0;
//}

//#include <stdio.h>//回调函数
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	void swap(int* p1, int* p2);
//	int a, b;
//	int* pointer_1, * pointer_2;
//	printf("please enter a and b:");
//	scanf("%d,%d", &a, &b);
//	pointer_1 = &a;
//	pointer_2 = &b;
//	if (a < b)swap(pointer_1, pointer_2);
//	printf("max=%d,min=%d\n", a, b);
//	return 0;
//}
//void swap(int* p1, int* p2)
//{
//	int* temp = NULL;
//	*temp = *p1;
//	*p1 = *p2;
//	*p2 = *temp;
//}

//#include <stdio.h>
//#include <stdlib.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i, j;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));//库函数
//
//int cmp_int(const void*e1,const void*e2)
//{
//	//比较两个整型值的函数
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	//float f[] = {9.0,8.0,7.0,6.0,5.0,4.0};
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//
//	//int* pa = &a;
//	//char* pc = &a;
//	//char ch = 'w';
//
//	void* p = &a;//void* 类型的指针 可以接收任意类型的地址
//	//*p = 0;//void* 类型的指针 不能进行解引用操作 不确定访问几个字节
//	//p++;//void* 类型的指针 不能进行+-整数的操作
//
//	//p = &ch;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//
//int cmp_float(const void*e1,const void*e2)
//{
//	return *(float*)e1 - *(float*)e2;
//}
//
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//		printf("%f ", f[j]);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串,不能直接用><=来比较，应该用strcpy函数
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test4()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
// //第一个参数：待排序数组的元素地址
// //第二个参数：待排序数组的元素个数
// //第三个参数：待排序数组的每个元素大小 - 字节
// //第四个参数：是函数指针，比较两个元素的所用函数的地址 - 这个函数使用者自己实现
// //              函数指针的两个参数是：待比较的两个元素的地址
//}
//
//int main()
//{
//	test1();
//	printf("\n");
//	test2();
//	printf("\n");
//	test3();
//	printf("\n");
//	test4();
//	return 0;
//}

//#include <stdio.h>
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void bubble_sort(void* base, int sz, int width,int (*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + width > 0))
//			{
//				Swap((char*)base + j * width, (char*)base + width, width);
//			}
//		}
//	}
//}
//void test()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就知道应该如何比较待排序额数组中的元素
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}


//#include <stdio.h>//求自幂数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//			n++;
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//pow函数求x的y次幂,返回double类型
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//			printf(" ");
//		for (j = 0; j < 2 * i + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//			printf(" ");
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)//越界后继续往上找，将i也改为了0，循环往复
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//void reverse(int *p1,int*p2)
//{
//	int t = *p1; *p1 = *p2; *p2 = t;
//}
//int main()
//{
//	int a1, a2, a3;
//	int* p1, * p2, * p3;
//	scanf("%d,%d,%d", &a1, &a2, &a3);
//	p1 = &a1;
//	p2 = &a2;
//	p3 = &a3;
//	if (a1 > a2) reverse(p1, p2);
//	if (a1 > a3) reverse(p1, p3);
//	if (a2 > a3) reverse(p2, p3);
//	printf("%d,%d,%d", a1, a2, a3);
//	return 0;
//}

//#include <stdio.h>
//void input(int*p)
//{
//	printf("输入10个数:");
//	int i;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &p[i]);
//}
//void swap(int arr[])
//{
//	int* p1 = arr;
//	int* p2 = arr;
//	int* p = arr;
//	int i;
//	for (p = arr+1; p < arr + 10; p++)
//	{
//		if (*p > *p1)
//			p1 = p;
//		if (*p < *p2)
//			p2 = p;
//	}
//	int t = arr[0]; arr[0] = *p2; *p2 = t;
//	int j = arr[9]; arr[9] = *p1; *p1 = j;
//}
//void print(int arr[])
//{
//	int i;
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//}
//int main()
//{
//	int arr[10];
//	input(arr);
//	swap(arr);
//	print(arr);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&((b == 2) + (e == 4) == 1) &&((c == 1) + (d == 2) == 1) &&((c == 5) + (d == 3) == 1) &&((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdlib.h>
//#include <stdio.h>
//int main()
//{
//	//申请空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用空间
//	//****
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 5,4,3,2,1 };
//	int* ptr = (int*)(&arr + 1);
//	printf("%d,%d", *(arr + 1), *(ptr - 1));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = &aa + 1;
//	int* ptr2 = *(aa + 1);
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char t = *left;
//		*left = *right;
//		*right = t;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	int len = strlen(arr);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 4);
//	printf("%s\n", arr);
//	return 0;
//}

//#include <stdio.h>
//void scan(int *arr)
//{
//	int *p;
//	printf("输入10个数:");
//	for (p = arr; p < (arr + 10); p++)
//		scanf("%d", p);
//}
//void reverse(int *arr)
//{
//	int* p = arr;
//	int* q = arr;
//	int* k;
//	int t;
//	for (k = arr + 1; k < arr + 10; k++)
//		if (*k > *p)p = k;
//		else if (*k < *q)q = k;
//	t = arr[0]; arr[0] = *q; *q = t;
//	if (p == arr)p = q;
//	t = arr[9]; arr[9] = *p; *p = t;
//}
//void print(int* arr)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	scan(arr);
//	reverse(arr);
//	print(arr);
//	return 0;
//}

//#include <stdio.h>
//int length(char* arr)
//{
//	int n = 0;
//	while (*arr != '\0')
//	{
//		n++;
//		arr++;
//	}
//	return n;
//}
//int main()
//{
//	char arr[20];
//	printf("输入字符串:");
//	gets(arr);
//	int len = length(arr);
//	printf("%d", len);
//	return 0;
//}

//#include <stdio.h>
//int FindNum(int arr[3][3], int k, int* px, int* py)//杨氏矩阵
//{
//	int x = 0;
//	int y = *py - 1;//右上角元素坐标
//
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	//找不到
//	*px = -1;
//	*py = -1;
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了");
//		printf("下标是:%d %d\n", x, y);
//	}
//	else
//		printf("找不到");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i, j, t, k;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i < 9; i++)
//	{
//		k = i;
//		for (j = i; j < 10; j++)
//			if (arr[j] > arr[k])k = j;
//		if (k != i)
//		{
//			t = arr[i]; arr[i] = arr[k]; arr[k] = t;
//		}
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int year;
//	printf("请输入年份:>");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		printf("闰年");
//	else
//		printf("平年");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int x, y;
//	printf("输入x的值:>");
//	scanf("%d", &x);
//	if (x < 1)
//		y = x;
//	else if (x < 10)
//		y = 2 * x - 1;
//	else
//		y = 3 * x - 11;
//	printf("y=%d", y);
//	return 0;
//}

//#include <stdio.h>
//void swap(int *p)
//{
//	int i, j;
//	for (i = 0; i < 9; i++)
//	{
//		int k = i;
//		for (j = i + 1; j < 10; j++)
//		{
//			if (p[j] < p[k])
//				k = j;
//		}
//		if (k != i)
//		{
//			int t = p[i]; p[i] = p[k]; p[k] = t;
//		}
//	}
//}
//void print(int arr[])
//{
//	int i;
//	for (i = 0; i < 10; i++)
//		printf("%d ",arr[i]);
//}
//int main()
//{
//	int arr[10];
//	int i;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	swap(arr);
//	print(arr);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i, j, k, m = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		for (j = 1; j <= 33; j++)
//		{
//			k = 100 - i - j;
//			if (5 * i + 3 * j + k / 3 == 100 && k % 3 == 0)
//			{
//				printf("i=%d j=%d k=%d\n", i, j, k);
//				m++;
//			}
//		}
//	}
//	printf("%d", m);
//	return 0;
//}

//#include <stdio.h>//暴力位移法左旋字符串
//#include <string.h>
//void string_left(char* arr,int k)
//{
//	int len = strlen(arr);
//	int i, j;
//	for (i = 0; i < k; i++)
//	{
//		char t = *arr;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = t;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	int k = 3;
//	string_left(arr1, k);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>//三步位移法左旋字符串
//void reverse(char* left, char* right)
//{
//	int t;
//	while (left < right)
//	{
//		t = *left;
//		*left = *right;
//		*right = t;
//		left++;
//		right--;
//	}
//}
//void string_left(char* arr, int k)
//{
//	int len = strlen(arr);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[10] = "abcdef";
//	int k = 3;
//	string_left(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//#include <stdio.h>//自定义函数求strcpy
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)//包含了\0
//		;
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghij";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	while (*dest)
//		dest++;
//	while (*dest++ = *src++)
//		;
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = " world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;//上面四行可以改为return (*str1 - *str2);
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 6);//如果源字符串的长度小于n,则拷贝完源字符串后追加\0直到n个，即bit\0\0\0
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//char* my_strncpy(char* dest, char* src, int n)
//{
//	char* start = dest;
//	while (n && (*dest++ = *src++))
//		n--;
//	if (n)
//		while (--n)
//			*dest++ = '\0';
//	return start;
//}
//int main()
//{
//	char arr1[10] = "abcfefgh";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);//调试可知wor追加后跟着追加了一个\0,如果3改为8即n比arr2要长，则全部追加后只追加一个\0
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main() 
//{//求1-n之间所有的自幂数
//	int i;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i < n + 1; i++) 
//	{
//		int num = i;
//		int n = 0;
//		while (num != 0) 
//		{
//			num /= 10;
//			n++;//确定num的位数
//		}
//		num = i;
//		int sum = 0;
//		while (num != 0) 
//		{
//			for (int j = 0; j < n; j++) 
//			{
//				int a = pow((num % 10), n);//
//				num /= 10;
//				sum += a;//算位数的n次方和
//			}
//		}
//		if (sum == i) {
//			printf("%d  ", i);
//		}
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define LEN sizeof(struct Student)
//struct Student
//{
//	long num;
//	float score;
//	struct Student* next;
//};
//int n;
//struct Student* creat()
//{
//	struct Student* head;
//	struct Student* p1, * p2;
//	n = 0;
//	p1 = p2 = (struct Student*)malloc(LEN);
//	scanf("%ld,%f", &p1->num, &p1->score);
//	head = NULL;
//	while (p1->num != 0)
//	{
//		n = n + 1;
//		if (n == 1)head = p1;
//		else p2->next = p1;
//		p2 = p1;
//		p1 = (struct Student*)malloc(LEN);
//		scanf("%ld,%f", &p1->num, &p1->score);
//	}
//	p2->next = NULL;
//	return head;
//}
//void print(struct Student* head)
//{
//	struct Student* p;
//	printf("\nNow,These %d record are:\n", n);
//	p = head;
//	if(head!=NULL)
//		do
//		{
//			printf("%ld,%5.1f\n", p->num, p->score);
//			p = p->next;
//		} while (p != NULL);
//}
//int main()
//{
//	struct Student* head;
//	head = creat();
//	print(head);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	enum Color { red, yellow, blue, white, black };
//	enum Color i, j, k, pri;
//	int n, loop;
//	n = 0;
//	for(i=red;i<=black;i++)
//		for(j=red;j<=black;j++)
//			if (i != j)
//			{
//				for(k=red;k<=black;k++)
//					if ((k != i) && (k != j))
//					{
//						n += 1;
//						printf("%-4d", n);
//						for (loop = 1; loop <= 3; loop++)
//						{
//							switch (loop)
//							{
//							case 1:pri = i; break;
//							case 2:pri = j; break;
//							case 3:pri = k; break;
//							default:break;
//							}
//							switch (pri)
//							{
//							case red:printf("%-10s", "red"); break;
//							case yellow:printf("%-10s", "yellow"); break;
//							case blue:printf("%-10s", "blue"); break;
//							case white:printf("%-10s", "white"); break;
//							case black:printf("%-10s", "black"); break;
//							default:break;
//							}
//						}
//					printf("\n");
//					}
//			}
//	printf("\ntotal:%5d\n", n);
//	return 0;
//}

//#include <stdio.h>
//struct Student
//{
//	char num[6];
//	char name[20];
//	int score[3];
//}stu[5];
//void print(struct Student stu[])
//{
//	int i, j;
//	printf("\n NO. name score1 score2 score3\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%5s%10s", stu[i].num, stu[i].name);
//		for (j = 0; j < 3; j++)
//			printf("%9d", stu[i].score[j]);
//		printf("\n");
//	}
//}
//void input(struct Student stu[])
//{
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		printf("\ninput score of student %d:\n", i + 1);
//		printf("NO.:");
//		scanf("%s", stu[i].num);
//		printf("name:");
//		scanf("%s", stu[i].name);
//		for (j = 0; j < 3; j++)
//		{
//			printf("score %d:", j + 1);
//			scanf("%d", &stu[i].score[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	input(stu);
//	print(stu);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//		printf("子串不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1;
//	char* s2;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//		return (char*)p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cur;
//		if (*s1 == '\0')
//			return NULL;
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("子串不存在\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//#include <stdio.h>//strtok函数的使用，返回一个地址
//#include <string.h>
//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	char* ret = strtok(arr, p);
//	//for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	//	printf("%s\n", ret);
//	while (ret != NULL)
//	{
//		printf("%s\n", ret);
//		ret = strtok(NULL, p);
//	}
//	//char*ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//错误码  错误信息
//	//0 -     No error
//	//1 -     Operation not permitted
//	//2 -     No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf= fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 0 };
//	struct S arr3[] = { {"zhangsan",20} ,{"lisi",30} };
//	struct S arr4[] = { 0 };
//
//	//memcpy(arr2, arr1, sizeof(arr1));
//	memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	struct S arr3[] = { {"张三",20} ,{"李四",30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}

//#include<stdio.h> 
//int x = 3;
//main()
//{
//    int i;
//    for (i = 1; i < x; i++)
//        incre();
//}
//
//incre()
//{
//    static int x = 1;
//    x *= x + 1;
//    printf("%d", x);
//}

//#include <stdio.h>
//int main()
//{
//	int a[10] = { 12,324,65,32,97,42,43,87,987,23 };
//	int i, j, k;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			k = i;
//			if (a[k] > a[j])k = j;
//			if (k != i)
//			{
//				int t = a[i]; a[i] = a[k]; a[k] = t;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[10] = { 12,324,65,32,97,42,43,87,987,23 };
//	int i, j;
//	for(i=0;i<9;i++)
//		for(j=0;j<9-i;j++)
//			if (a[j] > a[j + 1])
//			{
//				int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
//			}
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//#include <stdio.h>
//void sort(int a[], int n)
//{
//	int i, j;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1 - i; j++)
//			if (a[j] > a[j + 1])
//			{
//				int t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//}
//void main()
//{
//	int a[] = { -1,5,6,0,-8 };
//	sort(a + 1, 3);
//	for (int i = 0; i < 5; i++)
//		printf("%3d", a[i]);
//}

//#include <stdio.h>
//int main()
//{
//	double x = 2;
//	double y = x + 3 / 2;
//	printf("%lf", y);
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
//#include <assert.h>
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//从前向后拷贝
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后向前拷贝
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);//dest+19就是最后一个“字节”的地址
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr3 + 2, arr3, 20);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 8);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//void bubble(int arr[])
//{
//	int i, j;
//	for(i=0;i<9;i++)
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
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
//			if (arr[j] > arr[k])k = j;
//			if (i != k)
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
////	bubble(arr);
//	select(arr);
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include <stdio.h>
//void bubble(char arr[])
//{
//	int i, j;
//	for (i = 0; i < 9; i++)
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				char t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
//			}
//		}
//}
//void select(char arr[])
//{
//	int i, j, k;
//	for (i = 0; i < 9; i++)
//		for (j = i + 1; j < 10; j++)
//		{
//			k = i;
//			if (arr[j] > arr[k])k = j;
//			if (i != k)
//			{
//				char t = arr[i]; arr[i] = arr[k]; arr[k] = t;
//			}
//		}
//}
//int main()
//{
//	char arr[10];
//	int i;
//	for (i = 0; i < 10; i++)
//		scanf("%c", &arr[i]);
//	bubble(arr);
//	//select(arr);
//	for (i = 0; i < 10; i++)
//		printf("%c", arr[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	struct Stu
//	{
//		char name[20];
//		int age;
//		char sex[5];
//		char id[20];
//	};
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4, s5, s6;
//struct Stu s3;//全局变量
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//struct//匿名结构体类型
//{
//	int a;
//	char c;
//}sa;
//struct
//{
//	int a;
//	char c;
//}*psa;
//int main()
//{
//	psa = &sa;//语法错误，编译器认为两种结构体类型不一样
//	return 0;
//}

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//int main()
//{
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

#include <stdio.h>
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello bit" };
//	struct S s = { 'c',{55.6,30},100,3,14,"hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}


//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//对齐数的概念
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

//#include <stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));//offsetof返回偏移量，是宏
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
////传值
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
////传址
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	//s.a = 100;
//	//s.c = 'w';
//	//s.d = 3.14;
//	//printf("%d\n", s.a);
//	return 0;
//}

//位段 - 二进制位
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////47个比特位 - 6个字节 * 8 = 48bit
//int main()
//{
//	struct S s;
//	printf("%zd\n", sizeof(s));//8个字节
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//	return 0;
//}


//int check_sys()
//{
//	int a = 1;
//	//返回1表示小端
//	return *(char*)&a;
//}
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//}



