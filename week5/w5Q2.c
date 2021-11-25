#include<stdio.h>
void main()
{
    int *p,fact=1, i=1,n;
    printf("Enter the number");
    scanf("%d",&n);
    p=&fact;
    while(i<=n)
    {
        *p=(*p)*i;
        i++;
    }
    printf("factorial=%d",*p);
}
