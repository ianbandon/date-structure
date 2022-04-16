#define _CRT_SECURE_NO_WARNINGS
#define Masize 10
#define Long 10
//单链表有 数据域和地址域构成
//数据域
typedef struct
{
	char nume[Masize];
	char num[Long];
	int score;
}ElemType;
//单链表的开始是一个头指针 也是个指针  也是个地址
//1.定义一个单链表
//typedef struct Lnode
//{ 
//	ElemType date;
//	struct Lnode* next;
//	
//}Lnode;//
typedef struct Lnode
{ 
	ElemType date;
	struct Lnode* next;
	
}*LinkList;
void InitList_L(LinkList* L)
{
	
	
}
int main()
{
	//定义一个空的单链表
	//Lnode p; //
	LinkList L;
	//创建一个空的列表
	InitList_L(&L);


}
