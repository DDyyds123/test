#include<stdio.h>
//�ṹ��

struct Book
{
	char name[20];
	short price;

};

int main()
{
	//����һ���ṹ������
	struct Book b1 = { "C���Գ������",55 };
	struct Book *pb = &b1;
	pb->price= 20;
	strcpy(pb->name,"C++");
	printf("����:%s\n",pb->name);
	printf("�۸�:%d\n", pb->price);
//	printf("������%s\n", b1.name);
	//b1.price = 20;
	//printf("�۸�%d\n", b1.price);


	return 0;
}


