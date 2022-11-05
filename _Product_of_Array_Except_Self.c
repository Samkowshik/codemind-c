#include<stdio.h>
int main()
{
    int n,i,j,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<n;j++)
        {
            if(i==j)
            continue;
            p=p*a[j];
        }
        printf("%d ",p);
    }
}