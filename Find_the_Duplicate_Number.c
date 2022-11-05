#include<stdio.h>
int main()
{
    int n,i,j,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            continue;
            if (a[i]==a[j])
            f=1;
        }
        if(f==1)
        {
            printf("%d",a[i]);
            break;
        }
    }
}