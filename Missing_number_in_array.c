#include<stdio.h>
int main()
{
    int tc,t,n,i,s,x;
    scanf("%d",&tc);
    for(t=0;t<tc;t++)
    {
        scanf("%d",&n);
        int a[n];
        s=0;
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&a[i]);
            s=s+a[i];
        }
        x=(n*(n+1))/2;
        printf("%d
",x-s);
    }
    
}