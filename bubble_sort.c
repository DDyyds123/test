#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int tmp = arr[j];
			arr[j] = arr[j+1];
			arr[j + 1] = tmp;

		}
	}

}
int main()
{
	//ÊµÏÖÃ°ÅÝÅÅÐò
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;
}