#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d%d",&n,&x);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=x;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
}