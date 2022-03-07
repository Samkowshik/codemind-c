#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,f,o=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i]==a[j])
            {
                f=1;
            }
        }
        if(f==0)
        {
            printf("%d ",a[i]);
            o=0;
        }
    }
    if(o==1)
    {
        printf("-1");
    }
}