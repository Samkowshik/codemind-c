#include<stdio.h>
int main()
{
    int n,sq,re,sqre,r,d,s;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0)
    {
        r=n%10;
        s=r+s*10;
        n=n/10;
    }
    re=s;
    s=0;
    sqre=re*re;
    for(d=sqre;d!=0;d=d/10)
    {
        r=d%10;
        s=r+s*10;
    }
    if(sq==s)
    {
        printf("True");
    }
    else
    {
        printf("False")
    }
}