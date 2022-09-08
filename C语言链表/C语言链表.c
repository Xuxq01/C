#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//链表的核心 - 节点

struct node
{
	int data;
	struct note* next;//指向下一个结构体的指针
};

//创建一个带头结点的空链表
struct node* listCreat()
{
	struct node* ret = (struct node*)malloc(sizeof(struct node));
	if (ret == NULL)
	{
		printf("内存分配失败\n");
		exit(1);
	}

	ret->next = NULL;
	return ret;
}

//不带头结点的空链表
//struct node* list = NULL;

int main()
{
	//体会一下单链表的构建
	struct node node1, node2, node3;
	node1.data = 1;
	node2.data = 2;
	node3.data = 3;

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	struct node* list = &node1;
	
	return 0;
}