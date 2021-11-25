//copying string to another using pointer
#include<stdio.h>
int main()
{
    char s1[10],s2[10],*p1,*p2;

    printf("enter string of s1 :");
    gets(s1);
    p1=s1;
    p2=s2;
    while(*p1!='\0')
          {
              *p2=*p1;
              p1++;
            p2++;
          }
    p2='\0';
    printf("string s2 :%s",s2);
    return 0;
}
