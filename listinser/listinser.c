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
	//���жϲ���λ���Ƿ�Ϸ����Ѿ�Ԫ�ر��Ƿ�����
	//if()
	//�������
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
	//����һ��˳���
	Initlist(L);
	//��ʼ��˳���
	ListInsert(&L, 3, 3);
	//{������󣬲���λ�ã�����ֵ}
	return 0;
}