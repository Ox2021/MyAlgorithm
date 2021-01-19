#include<stdio.h>
int a[100];//定义全局变量，就可以在两个函数中使用了 
void quicksort(int left, int right)//传递数组中的第一个值的下标和最后一个值的下标 
{
	int i, j, temp, t;

	temp = a[left];//数组最左边的数设为标准 
	i = left;
	j = right;

	if (left >= right)
		return;
	while (i != j)
	{
		while (a[j] >= temp && i < j)//从数组最右边开始，右边的数大于标准，那么他的下标减一 
			j--;
		while (a[i] <= temp && i < j)//左边的数大于标准，那么他的下标加一 
			i++;
		if (i < j)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	a[left] = a[i];
	a[i] = temp;
	quicksort(left, i - 1);
	quicksort(i + 1, right);
}
int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	quicksort(0, n - 1);
	for (i = 0; i < n; i++)
		printf("%-4d", a[i]);
}
