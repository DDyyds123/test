#include<stdio.h>
#include<string.h>
#include<windows.h>
#define _CRT_SECURE_NO_WARNINGS
int  Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int Fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	//ì³²¨ÄÇÆõÊýÁÐ
	int n = 0;
	int ret = 0;
	scanf_s("%d", &n);
	ret = Fib2(n);
	printf("%d\n", ret);

}
