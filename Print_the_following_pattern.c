#include<stdio.h>
int main()
{
    int n,d,i=1,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(d=i;d<=n;d++)
        {
            printf("%d ",d);
        }
        printf("
");
        i++;
    }
}