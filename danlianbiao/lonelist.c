#define _CRT_SECURE_NO_WARNINGS
#define Masize 10
#define Long 10
//�������� ������͵�ַ�򹹳�
//������
typedef struct
{
	char nume[Masize];
	char num[Long];
	int score;
}ElemType;
//������Ŀ�ʼ��һ��ͷָ�� Ҳ�Ǹ�ָ��  Ҳ�Ǹ���ַ
//1.����һ��������
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
	//����һ���յĵ�����
	//Lnode p; //
	LinkList L;
	//����һ���յ��б�
	InitList_L(&L);


}
