#include<stdio.h>
int main()
{
    int n,d,r,i,f,s=0;
    scanf("%d",&n);
    d=n;
    while(d!=0)
    {
        f=1;
        r=d%10;
        while(r>=1)
        {
            f=f*r;
            r--;
        }
        s=s+f;
        d=d/10;
    }
    if(s==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}