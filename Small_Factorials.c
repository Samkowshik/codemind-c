#include<stdio.h>
int main()
{
    int n,i,x,j,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        x=a[i];
        p=1;
        for(j=1;j<x;j++)
        {
            p=p*(j+1);
        }
        printf("%d
",p);
    }
}