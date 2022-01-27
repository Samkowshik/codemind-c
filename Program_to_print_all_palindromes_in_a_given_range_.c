#include<stdio.h>
int main()
{
    int n1,n2,n,d,r,s,i;
    scanf("%d%d",&n1,&n2);
    for(n=n1;n<=n2;n++)
    {
        d=n;
        s=0;
        while(d!=0)
        {
            r=d%10;
            s=r+(s*10);
            d=d/10;
        }
        if(n==s)
        {
            printf("%d ",n);
        }
    }
}