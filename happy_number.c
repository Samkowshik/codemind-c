#include<stdio.h>
int main()
{
    int n,d,r,sq,s;
    scanf("%d",&n);
    while(n/10!=0)
    {
        d=n;
        s=0;
        while(d)
        {
            r=d%10;
            s=s+r*r;
            d=d/10;
        }
        n=s;
    }
    if(n==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}