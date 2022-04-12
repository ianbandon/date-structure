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
	//数据数量最大值
	int Maxsize;
	//已存入的数据的个数
	int length;
	//数组的指针-->date
	int(* date)[Initsize];
}Sqlist;
//int arr[Initsize];
//int *date=&arr
//

//malloc 函数的参数    malloc(sizeif(Elemtype)*Insize) 
//malloc 函数 返回一个指针  需要强制转换成你定义的数据元素类型指针
     //初始化数组
void Inlist(Sqlist* s)
{
	//没有存数据所以 数据数量是0
	 s->length = 0;
	 s->Maxsize = Initsize;
	//申请内存空间 10个int型
	//malloc传过来的是整个数组的地址
	 //p 为指针 指向是一个数组 三个元素int
	s->date=malloc(sizeof(int)*Initsize);
	
	 int i = 0;
	 for (i = 0; i < Initsize; i++)
	 {
		 *(s->date)[i] = 0;
	 }
}
//动态增加数组的长度
void IncreaseSize(Sqlist* s,int len)
{}
//打印 数组
void print(Sqlist* s)
{
	printf("L.length=%d\n", s->length);
	printf("L.Maxsize=%d\n", s->Maxsize);
	int i = 0;
	for (i = 0; i < Initsize; i++)
	{
		printf("date[%d]=%d ",i,*(s->date)[i]);
	}
}
int main()
{
	//定义一个顺序表  默认最大值是10个int型
	Sqlist L;
	//初始化顺序表
	Inlist(&L);
	//打印顺序表
	print(&L);

	return 0;
}