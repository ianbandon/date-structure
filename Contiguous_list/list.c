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
	//�����������ֵ
	int Maxsize;
	//�Ѵ�������ݵĸ���
	int length;
	//�����ָ��-->date
	int(* date)[Initsize];
}Sqlist;
//int arr[Initsize];
//int *date=&arr
//

//malloc �����Ĳ���    malloc(sizeif(Elemtype)*Insize) 
//malloc ���� ����һ��ָ��  ��Ҫǿ��ת�����㶨�������Ԫ������ָ��
     //��ʼ������
void Inlist(Sqlist* s)
{
	//û�д��������� ����������0
	 s->length = 0;
	 s->Maxsize = Initsize;
	//�����ڴ�ռ� 10��int��
	//malloc������������������ĵ�ַ
	 //p Ϊָ�� ָ����һ������ ����Ԫ��int
	s->date=malloc(sizeof(int)*Initsize);
	
	 int i = 0;
	 for (i = 0; i < Initsize; i++)
	 {
		 *(s->date)[i] = 0;
	 }
}
//��̬��������ĳ���
void IncreaseSize(Sqlist* s,int len)
{}
//��ӡ ����
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
	//����һ��˳���  Ĭ�����ֵ��10��int��
	Sqlist L;
	//��ʼ��˳���
	Inlist(&L);
	//��ӡ˳���
	print(&L);

	return 0;
}