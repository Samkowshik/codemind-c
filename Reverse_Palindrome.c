#include<stdio.h>
int rev(int n)
{
    int r,s=0;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,u,f=1;
    scanf("%d",&n);
    u=n+rev(n);
    while(f==1)
    {
        if(u==rev(u))
        {
            f=0;
            printf("%d",u);
        }
        else
        {
            u=u+rev(u);
        }
    }
}