#include<stdio.h>
int main()
{
    int n,i,j,r,a[10],f=1,c;
    scanf("%d",&n);
    for(c=0;n>0;c++)
    {
        r=n%10;
        a[c]=r;
        n=n/10;
    }
    for(i=0;i<=c;i++)
    {
        for(j=0;j<=c;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i]==a[j])
            {
                f=0;
                break;
            }
        }
    }
    if(f==1)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}