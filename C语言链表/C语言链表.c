#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����ĺ��� - �ڵ�

struct node
{
	int data;
	struct note* next;//ָ����һ���ṹ���ָ��
};

//����һ����ͷ���Ŀ�����
struct node* listCreat()
{
	struct node* ret = (struct node*)malloc(sizeof(struct node));
	if (ret == NULL)
	{
		printf("�ڴ����ʧ��\n");
		exit(1);
	}

	ret->next = NULL;
	return ret;
}

//����ͷ���Ŀ�����
//struct node* list = NULL;

int main()
{
	//���һ�µ�����Ĺ���
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