#define _CRT_SECURE_NO_WARNINGS
#define Maxsize 10
#include <stdio.h>
typedef struct
{
	//�����������ֵ
	int date[Maxsize];
	//�Ѵ�������ݵĸ���
	int length;
}Sqlist;
void Inlist(Sqlist*L)
{
	L->length =0;
	int i = 0;
	for (i = 0; i < Maxsize; i++)
	{
		L->date[i] =0;
	}
}
void print(Sqlist* s)
{
	printf("L.length= %d\n", s->length);
	int i = 0;
	for (i = 0; i <Maxsize; i++)
	{
		printf("L.date[%d]=%d ",i, s->date[i]);
	}
}
void ListInsert(Sqlist* s, int x, int y)
{


	if (x > Maxsize||x < 1)
	{
		printf(" error \n");
	}
	else if(s->length == Maxsize)
	{
		printf("list is full\n");
	}
	else
	{
		if (s->length == 0)
		{
			((*s).date)[x-1] = y;
			(*s).length = (*s).length + 1;
			printf("success\n");
		}
		else
		{
			int i = 0;

			for (i = s->length; i>= x; i--)
			{
				((*s).date)[i] = ((*s).date)[i-1];
			}
			 ((*s).date)[x-1] = y;
			 (*s).length = (*s).length + 1;
			printf("success\n");
		}
	}
}
void ListDelet(Sqlist*s,int x)
{
	if (x > Maxsize || x < 1)
	{
		printf(" error \n");
	}
	else if (s->length == 0)
	{
		printf("list is empty \n");
	}
	else
	{
		int b = 0;
		printf("ȷ��ɾ����������%d ", s->date[x - 1]);
		printf("ȷ������1��ȡ������0\n");
		scanf("%d",&b);
			while (b==1)
			{
				int i = 0;
				for (i = x; i<=s->length; i++)
				{
					//x-1=x
					//
					((*s).date)[i - 1] = ((*s).date)[i];
				}
				(*s).length = (*s).length - 1;
				printf("success\n");
				break;
			}
	}
}

int main()
{
	//����һ��˳���  Ĭ�����ֵ��10��int��
	Sqlist L;
	//��ʼ��˳���
	Inlist(&L);
	//˳���Ĳ��� 1.�����˳���ĵ�ַ 2.�����λ�� 3.�������ֵ��int��
	ListInsert(&L, 1, 3);
	print(&L);
	//˳����ɾ�� 1.ɾ����˳���ĵ�ַ 2.ɾ����λ��
	ListDelet(&L, 1);
	//
	return 0;
}