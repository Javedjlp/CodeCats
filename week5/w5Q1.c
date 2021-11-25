//Swap without using 3rd variable
#include<stdio.h>
void main()
{
    int a,b,*p1,*p2;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("a=%d ",*p1);
    printf("b=%d",*p2);
}
