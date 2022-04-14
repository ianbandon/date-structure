#define _CRT_SECURE_NO_WARNINGS
#define Maxsize 10
#include <stdio.h>
typedef struct
{
	//数据数量最大值
	int date[Maxsize];
	//已存入的数据的个数
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
		printf("确认删除的数据是%d ", s->date[x - 1]);
		printf("确认输入1，取消输入0\n");
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
	//定义一个顺序表  默认最大值是10个int型
	Sqlist L;
	//初始化顺序表
	Inlist(&L);
	//顺序表的插入 1.插入的顺序表的地址 2.插入的位置 3.插入的数值（int）
	ListInsert(&L, 1, 3);
	print(&L);
	//顺序表的删除 1.删除的顺序表的地址 2.删除的位置
	ListDelet(&L, 1);
	//
	return 0;
}