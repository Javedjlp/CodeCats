//sum of array using pointer
#include<stdio.h>
void main()
{
   int a[5],*p,i,sum=0;
   p=a;
   for(i=0;i<5;i++)
   {
       scanf("%d",p+i);
       sum=sum+ (*(p+i));
   }
   printf("sum= %d",sum);
}
