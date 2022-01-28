#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>n/2;i--)
    {
        printf("%d ",a[i]);
    }
    for(i=1;i<=n/2;i++)
    {
        printf("%d ",a[i]);
    }
}