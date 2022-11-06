#include<stdio.h>
int main()
{
    int t,tc,n,i,m,c;
    scanf("%d",&tc);
    for(t=0;t<tc;t++)
    {
        c=1;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        m=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]<m)
            {
                m=a[i];c++;
            }
        }
        printf("%d
",c);
    }
}