#include<stdio.h>
int main()
{
int a[5]={5,3,9,6,2};
int i,max=0;
for(i=0;i<5;i++)
{
printf("\n enter arraelements");
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<5;i++)
if(a[i]>max)
max=a[i];
printf("\n max of all is %d",max);
return 0;
}


