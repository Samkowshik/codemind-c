#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],i,j,p=0,s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                p=p+a[i][j];
            }
            if(i==n-j-1)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",p);
    printf("Secondary Diagonal:%d",s);
}