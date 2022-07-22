#include<stdio.h>
int main()
{
int a[50],n,i,k,l;
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
 for(i=n-1;i>=l;i--)
{
a[i+1]=a[i];
}
a[l]=k;
for(i=0;i<n;i++)
{
printf("%d",a[i]);

}
}
