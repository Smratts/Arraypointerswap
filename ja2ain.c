#include<stdio.h>
int main()
{
	int a[100],b[0],n,i,k,l;
	printf("enter size of array :");
	scanf("%d",&n);
	printf("enter number of elements %d :",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]); //reading element
	}
	printf("enter new element to insert:");
	scanf("%d",&k);
	printf("enter address location to insert :");
	scanf("%d",&l);
	//logic
	/*for(i=m-1;i>=l;i--)
	{
		a[i+n]=a[i];
	}*/
	for(i=0;i<n;i++)
	{
		a[l+i]=b[i];
	}
	for(i=n-1;i>=l;i--)
	  {
	  a[i+1]=a[i];
	  }
	  a[l]=k;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);

	}
}


/* enter size of array :5
   enter number of elements 5 :20
   30
   60
   40
   50
   enter new element to insert:800
   enter address location to insert :2
   Segmentation fault (core dumped)
 */
