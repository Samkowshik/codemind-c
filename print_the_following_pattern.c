#include<stdio.h>
int main()
{
    int i,n,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(d=n;d>=1;d--)
        {
            printf("%d ",d);
        }
        printf("
");
    }
}