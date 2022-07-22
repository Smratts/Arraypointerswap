#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,7,2,6,9,4},temp;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n - 1-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		printf("\nDisplay sorted arra elements:\n ");
		for (int i = 0;i < n;i++)
		{
			printf("%d ",arr[i]);
		}
		return 0;

	}
}

/*Display sorted arra elements:
  1 2 3 4 5 2 6 7 4 9   */
