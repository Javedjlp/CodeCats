#include<stdio.h>
void main()
{   int n,ar[n],i,sum=0,esum=0,osum=0,epsum=0,opsum=0;
    printf("Enter range of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
       {
           scanf("%d",&ar[i]);
           sum=sum+ar[i];
           }

    for(i=0;i<n;i++)
      {
          if(ar[i]%2==0)
            esum=esum+ar[i];
          else
            osum=osum+ar[i];
      }
      for(i=0;i<n;i++)
      {
          if(i%2==0)
            epsum=epsum+ar[i];
          else
            opsum=opsum+ar[i];
      }

      printf("Sum of array:%d\n",sum);
       printf("Sum of even number:%d\n",esum);
        printf("Sum of odd number:%d\n",osum);
         printf("Sum of even position number:%d\n",epsum);
          printf("Sum of odd position number:%d\n",opsum);
          getch();

}
