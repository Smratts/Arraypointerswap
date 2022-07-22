// copy elements from one arry to another using pointer

#include<stdio.h>
#include<stdlib.h>
int main()
{
int num[100],copy[100],*p,*p1,n,i;
printf("enter number of elements in array");
scanf("%d",&n);
p=&num;
p1=&copy;
printf("enter array elements  ..\n");
for (i=0;i<n;i++)
{
printf("enter elements in array [%d]",i);
scanf("%d",&*(p+i));
}
printf("\n array elements...");
for (i=0;i<n;i++)
{
printf("%d\t",*(p+i));
}
for(i=0;i<n;i++)
{
*(p1+i)=*(p+i);
}
printf("\n after copying of array using pointer");
for (i=0;i<n;i++)
{
printf("%d\t",*(p1+i));
}

}


