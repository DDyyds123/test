#include<stdio.h>
#include<string.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	//scanf �������������
	int a;
	int b;
	char op;
	printf("������������:");
	scanf_s("%d%d", &a, &b);
	printf("�����������:");
	rewind(stdin);
	scanf_s("%c", &op);
	printf("%d %c %d= \n", a, op, b);
	return 0;
}