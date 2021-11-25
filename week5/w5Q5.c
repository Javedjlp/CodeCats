//linear search of element in an array
#include<stdio.h>
int main()
{
    int a[10],n,*p,count=0;
    p=a;
    printf("enter number to search\n");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        scanf("%d",p+i);
        if(*(p+i)==n)
            count++;
    }
    if(count==1)
     printf("Number found" );
    else
    printf("Number not found");
}
