#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	char arr1[] = "2023,我只想赚大钱!";
	char arr2[] = "##################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0])-2;
	int right1 = strlen(arr1) - 1;


	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);



	return 0;
}
