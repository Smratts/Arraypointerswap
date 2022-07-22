// prog. to insert an element at a location l

#include<stdio.h>
int main()
{
	int a[50],n,i,k,l,b[0],m;
	printf("enter the number of elements in array size : ");
	scanf("%d",&n); // reding elements
	printf("enter elements into array :"); //enter elements using loop to read elements
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]); // every time we are reading one element ata time
	}
	printf("enter the new element to insert Keyelement :");
	scanf("%d",&k); // new element k is read
	printf("enter the location l were to insert the new element :"); 
	scanf("%d",&l); // addres of location

	//logic to shift the existing location 
	for(i=n-1;i>=l;i--)  // we will shift all the eliments by one location as we are inserting one new element 
                               // for(i=n-1;i>=l;i--) n=6,l=2, i--
	{
		a[i+1]=a[i]; 
        }
		a[l]=k;

	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

/*enter the number of elements in array size : 5
enter elements into array :10
20
30
40
50
enter the new element to insert Keyelement :100
enter the location l were to insert the new element :2
10 20 100 30 40 */

