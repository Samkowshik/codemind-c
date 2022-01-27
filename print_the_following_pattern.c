#include<stdio.h>
int main()
{
    int n,i,d,j;
    scanf("%d",&n);
    d=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=d;j++)
        {
            printf("%d",j);
        }
        printf("
");
        d--;
    }
}