#include<stdio.h>
#include<string.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	//scanf 缓冲区溢出问题
	int a;
	int b;
	char op;
	printf("请输入两个数:");
	scanf_s("%d%d", &a, &b);
	printf("输入操作方法:");
	rewind(stdin);
	scanf_s("%c", &op);
	printf("%d %c %d= \n", a, op, b);
	return 0;
}