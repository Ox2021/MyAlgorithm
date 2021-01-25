#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[11] = { 0 };
	int i = 0;
	int j = 0;

	for (i = 0; i < 5; i++)
	{
		int t = 0;
		scanf("%d", &t);
		a[t]++;
	}
	for (i = 10; i >= 0; i--)
	{
		for (j = 1; j <= a[i]; j++)
		{
			printf("%d ", i);
		}
	}
	return 0;
}