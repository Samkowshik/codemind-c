#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n][2];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d
",a[i][0]+a[i][1]);
    }
}