#include<stdio.h>
int pri(int n)
{
    int i,f=1;
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}
int main()
{
    int n,i,f=0;
    scanf("%d",&n);
    for(i=2;i<=n/2+1;i++)
    {
        if (i*(n/i)==n && pri(i)==1 && pri(n/i)==1)
        {
            printf("%d %d",i,n/i);
            f=1;
            break;
        }
    }
    if(f==0)
    printf("-1");
}