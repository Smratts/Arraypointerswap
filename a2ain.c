#include<stdio.h>
int main()
{
int ar1[]={1,2,3,4,5};
int length=sizeof(ar1)/sizeof(ar1[0]);
int ar2[length];
for(int i=0;i<length;i++)
{
ar2[i]=ar1[i];
}
printf("elements of original array: \n");
for(int i=0;i<length;i++)
{
printf("%d",ar1[i]);
}
printf("\n");
printf("elements of new array; \n");
for(int i=0;i<length;i++)
{
printf("%d",ar2[i]);
}
return 0;
}
