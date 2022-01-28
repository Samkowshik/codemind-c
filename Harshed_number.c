#include<stdio.h>
int main()
{
    int n,d,s=0,r;
    scanf("%d",&n);
    for(d=n;d!=0;d=d/10)
    {
        r=d%10;
        s=s+r;
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