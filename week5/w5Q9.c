#include<stdio.h>
int main()
{
    int n,a[n];
    printf("Size of array");
    scanf("%d",&n);
    printf("Enter elements of array");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    const int N=100;
    int idx[N];
    for(int i=0;i<N;i++)
        idx[i]=-1;

    int minidx=1000;
    for(int i=0;i<n;i++)
    {
       if(idx[a[i]]!=-1)
        minidx=min(minidx,idx[a[i]]);
        else
        idx[a[i]]=i;

    }
    if(minidx==1000)
        printf("-1");
    else
       printf("%d",minidx+1);
    return 0;
}
