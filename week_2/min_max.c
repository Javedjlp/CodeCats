#include<stdio.h>
void main()
{
    int arr[5],i,min_sum=0,max_sum=0;
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    int min=arr[0],max=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]<min)
        min=arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]==min)
        continue;
        max_sum=max_sum+arr[i];


    }
     for(i=0;i<5;i++)
    {
        if(arr[i]==max)
        continue;
        min_sum=min_sum+arr[i];

    }
    printf("%d %d",min_sum,max_sum);


}


