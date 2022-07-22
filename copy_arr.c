#include<stdio.h>
int main()
{
	int arr1[] = {1,2,3,4,5},arr2[] = {6,7,8};
	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);
	for(int i = 0;i < n;i++)
	{
		arr1[m] = arr2[i];
		m++;
	}for (int i = 0;i < m;i++)
	{
		printf("%d ",arr1[i]);
	}
	return 0;
}
