#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int m = 0;
		scanf("%d", &m);
		int i = 0;
		double temp = (double)n;
		double sum = (double)n;
		for (i = 1; i < m; i++)
		{
			temp = sqrt(temp);
			sum += temp;
		}
		printf("%.2lf\n", sum);
	}
	return 0;

}