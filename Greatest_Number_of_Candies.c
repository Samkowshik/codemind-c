#include<stdio.h>
int main()
{
    int n,i,j,g,ec,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&ec);
    for(i=0;i<n;i++)
    {
        g=0;
        c=a[i]+ec;
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(c>=a[j])
            {
                g++;
            }
        }
        if(g==n-1)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}