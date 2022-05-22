#include<stdio.h>
int main()
{
    int n,d,r,s=0;
    scanf("%d",&n);
    d=n;
    while(d)
    {
        r=d%10;
        s=s*10+r;
        d=d/10;
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