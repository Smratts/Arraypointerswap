#include<stdio.h>
//#include<conio.h>
void main()
{
	int a[10],i,j,n,temp;
	int *p =&a[0];// pointer containing the address of first element of an array
	printf("enter an array size");
	scanf("%d",&n);
	printf("\n enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	printf("\n the elements of an array :");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}

	/*logic for array sort using pointers*/

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(p+j)>*(p+(j+1)))
			{
				temp=*(p+j);
				*(p+j)=*(p+(j+1));
				*(p+(j+1))=temp;
			}
		}
	}
	printf("\n array eliments after sorting:  ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	//getch();
}



