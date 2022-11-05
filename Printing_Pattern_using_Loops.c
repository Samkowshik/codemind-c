#include <stdio.h>
int main() 
{
    int n,i,j,l,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=n;
        for(j=1;j<=n;j++)
        {
            printf("%d ",x);
            if(j<i)
            {
                x--;
            }
        }
        for(j=j-2;j>0;j--)
        {
            if(j<i)
            {
                x++;
            }
            printf("%d ",x);
        }
        printf("
");
    }
    for(i=i-2;i>0;i--)
    {
        x=n;
        for(j=1;j<=n;j++)
        {
            printf("%d ",x);
            if(j<i)
            {
                x--;
            }
        }
        for(j=j-2;j>0;j--)
        {
            if(j<i)
            {
                x++;
            }
            printf("%d ",x);
        }
        printf("
");
    }
    return 0;
}
