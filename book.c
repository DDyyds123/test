#include<stdio.h>
//结构体

struct Book
{
	char name[20];
	short price;

};

int main()
{
	//创建一个结构体类型
	struct Book b1 = { "C语言程序设计",55 };
	struct Book *pb = &b1;
	pb->price= 20;
	strcpy(pb->name,"C++");
	printf("书名:%s\n",pb->name);
	printf("价格:%d\n", pb->price);
//	printf("书名：%s\n", b1.name);
	//b1.price = 20;
	//printf("价格：%d\n", b1.price);


	return 0;
}


