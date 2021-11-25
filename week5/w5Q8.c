#include<stdio.h>
int compare(char*,char*);
int main()
{
    char s1[10],s2[10],*p1,*p2;
    int f;
    printf("\nEnter first string :");
    gets(s1);
    printf("\nEnter second string :");
    gets(s2);
    f=compare(s1,s2);
    if(f==1)
        printf("strings are not  same");
    else
        printf("strings are  same");
    return 0;
}
int compare(char *p1,char *p2)
{
    int f=0;
    while(*p1!='\0' || *p2!='\0')
    {
        if(*p1!=*p2)
          {
              f++;
              break;
          }
          p1++;
          p2++;
    }
    return f;
}
