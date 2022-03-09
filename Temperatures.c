#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c,f;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        f=0;
        for(j=i;j<n-1;j++)
        {
            c++;
            if(a[j+1]>a[i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            printf("%d ",c);
        }
        else
        {
            printf("0 ");
        }
    }
}