#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//{2,5,7}已经有的硬币 27要拼成的面额
int min(int a, int b)
{
	return a > b ? b : a;
}
int main()
{

	int a[3] = { 2,5,7 };
	int f[28] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 1; i <= 27; i++)
	{
		f[i] = _CRT_INT_MAX;
		for (j = 0; j < 3; j++)
		{
			if (i >= a[j] && f[i - a[j]] != _CRT_INT_MAX)
			{
				f[i] = min(f[i - a[j]] + 1, f[i]);
			}
		}
	}
	if (f[27] == _CRT_INT_MAX)
	{
		f[27] = -1;
	}
	printf("%d", f[27]);
	return 0;
}