#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,s;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=1;
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i]==a[j])
            {
                s=0;
            }
        }
        if(s==1)
        {
            printf("%d",a[i]);
            break;
        }
    }
}