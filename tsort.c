#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[1000] = { 0 };
	int n = 0;
	int i = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int t = 0;
		scanf("%d", &t);
		arr[t]++;
	}
	for (i = 999; i >= 0; i--)
	{
		int j = 0;
		for (j = 1; j <= arr[i]; j++)
		{
			printf("%d ", i);
		}
	}
	return 0;
}