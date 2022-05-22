#include<stdio.h>
int main()
{
    int s=0,s1=0,s2=1,n;
    scanf("%d",&n);
    while(s<n)
    {
        s=s1+s2;
        s1=s2;
        s2=s;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}