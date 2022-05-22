#include<stdio.h>
int main()
{
    int n,o=1,p=0,s,r,x;
    scanf("%d",&n);
    x=n;
    while(x)
    {
        r=x%10;
        if(r==6)
        {
            p=o;
        }
        o=o*10;
        x=x/10;
    }
    printf("%d",n+3*p);
}