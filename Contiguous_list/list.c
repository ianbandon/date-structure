#define _CRT_SECURE_NO_WARNINGS
#define Initsize 10
#include <stdio.h>
#include <stdlib.h>
//动态分配
//
//typedef 自定义
//struct 结构体
//Sqlist 是结构体的类型
typedef struct Sqlist
{
	int* date; 
	int Maxsize;
	int length;
}Sqlist;
//malloc 函数的参数    malloc(sizeif(Elemtype)*Insize) 
//malloc 函数 返回一个指针  需要强制转换成你定义的数据元素类型指针
//初始化数组
void Inlist(Sqlist* s)
{
	int i = 0;
	s->length = 0;
	s->date = (int*)malloc(sizeof(int)*Initsize);
	s->Maxsize = Initsize;
}
//动态增加数组的长度
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
	//定义一个顺序表
	Sqlist L;
	//初始化顺序表
	Inlist(&L，);
	//打印顺序表
	print(&L);
	return 0;
}