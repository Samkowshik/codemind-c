#include<stdio.h>
int main()
{
    int n,i,r,sq,s=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq)
    {
        r=sq%10;
        s=s+r;
        sq=sq/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}