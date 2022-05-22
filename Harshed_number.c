#include<stdio.h>
int main()
{
    int n,r,d,s=0;
    scanf("%d",&n);
    d=n;
    while(d)
    {
        r=d%10;
        s=s+r;
        d=d/10;
    }
    if(n%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}