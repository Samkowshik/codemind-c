#include<stdio.h>
int main()
{
    int n,d,r,i,o,c,s=0;
    scanf("%d",&n);
    d=n;
    for(c=0;d!=0;c++)
    {
        d=d/10;
    }
    for(d=n;d!=0;c--)
    {
        o=1;
        r=d%10;
        for(i=1;i<c;i++)
        {
            o=o*10;
        }
        s=s+r*o;
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