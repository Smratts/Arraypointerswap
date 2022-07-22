#include<stdio.h>
#define N 5
int main()
{int a[N],b[N],i;
printf("enterinteger number %d\n",N);
for(i=0;i<N;i++)
scanf("%d",&a[i]);
printf("\n copying elements of array a to b \n");
for (i=0;i<N;i++)
b[i]=a[i];
printf("\n original (a[%d]) ---> copy(b[%d])\n",N,N);
for(i=0;i<N;i++)
printf("%d\t\t --> %d\n",a[i],b[i]);
return 0;
}

/* o/p:
enterinteger number 5
10
20
30
40
50

 copying elements of array a to b 

 original (a[5]) ---> copy(b[5])
10		 --> 10
20		 --> 20
30		 --> 30
40		 --> 40
50		 --> 50
mahender@TSHYD-032:~/Document */
