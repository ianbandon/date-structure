#define _CRT_SECURE_NO_WARNINGS
#define Maxsize 10
#include <stdio.h>
typedef struct Sqlist
{
	int date[Maxsize];
	int length;
}Sqlist;
void ListInsert(Sqlist* L, int x, int y)
{
	//先判断插入位置是否合法，已经元素表是否已满
	//if()
	//插入操作
	int j =0 ;
	for (j=L->length;j>=x;j--)
	{
		L->date[j+1] = L->date[j];

	}
	L->date[x - 1] = y;
	L->length++;
}
int main()
{
	Sqlist L;
	//声明一个顺序表
	Initlist(L);
	//初始化顺序表
	ListInsert(&L, 3, 3);
	//{插入对象，插入位置，插入值}
	return 0;
}