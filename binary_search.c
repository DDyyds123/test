#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
int binary_search(int arr[], int k,int sz)
{
	//算法实现

	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if(arr[mid] < k)
		{
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);//arr 为首元素的地址
	if (ret == -1)
	{
		printf("没找到！");
	}
	else
	{
		printf("找到了，下标为；%d", ret);
	}
	return 0;
}