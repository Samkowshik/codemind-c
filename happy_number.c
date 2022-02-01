#include<stdio.h>
int main()
{
    int n,r,s,d;
    scanf("%d",&n);
    while(n/10!=0)
    {
        d=n;
        s=0;
        while(d!=0)
        {
            r=d%10;
            s=s+r*r;
            d=d/10;
        }
        n=s;
    }
    if(n==1 || n==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}