#define _CRT_SECURE_NO_WARNINGS
#define Initsize 10
#include <stdio.h>
#include <stdlib.h>
//��̬����
//
//typedef �Զ���
//struct �ṹ��
//Sqlist �ǽṹ�������
typedef struct Sqlist
{
	int* date; 
	int Maxsize;
	int length;
}Sqlist;
//malloc �����Ĳ���    malloc(sizeif(Elemtype)*Insize) 
//malloc ���� ����һ��ָ��  ��Ҫǿ��ת�����㶨�������Ԫ������ָ��
//��ʼ������
void Inlist(Sqlist* s)
{
	int i = 0;
	s->length = 0;
	s->date = (int*)malloc(sizeof(int)*Initsize);
	s->Maxsize = Initsize;
}
//��̬��������ĳ���
void IncreaseSize(Sqlist* s,int len)
{
	int 
}

void print(Sqlist* s)
{
	int i = 0;
	for (i = 0; i < Maxsize; i++)
	{
		printf("%d ",s->date[i]);
	}
}
int main()
{
	//����һ��˳���
	Sqlist L;
	//��ʼ��˳���
	Inlist(&L��);
	//��ӡ˳���
	print(&L);
	return 0;
}