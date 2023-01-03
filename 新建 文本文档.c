#include<stdio.h>
#include<string.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS


int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}
int main()
{
	//求n的阶乘
	int n = 0;
	int  ret = 0;
	scanf_s("%d",&n);
	rewind(stdin);
	ret=Fac2(n);
	printf("%d\n", ret);
	return 0;
}
