#include<stdio.h>
void main()
{
    char s1[20],s2[10],*p1,*p2;
    printf("\nEnter First  string :");
    gets(s1);
     printf("\nEnter Second  string :");
    gets(s2);
    p1=s1;
    while(*p1!='\0')
    {
        p1++;
    }
    p2=s2;
    while(*p2!='\0')
    {
        *p1=*p2;
        p1++;
        p2++;
    }
    *p1='\0';
    printf("concatenation of string :  %s",s1);
}
