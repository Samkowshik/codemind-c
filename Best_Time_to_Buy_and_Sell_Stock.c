#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,d,m=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);  
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            d=a[j]-a[i];
            m=d>m?d:m; 
        }
    }
    printf("%d",m);
}