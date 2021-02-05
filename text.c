#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//有序数组
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的长度
	int k = 0;
	scanf("%d", &k);//输入要查找的值
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("没找到!\n");
	}
	else
	{
		printf("找到了!下标是：%d\n", ret);
	}
	return 0;
}