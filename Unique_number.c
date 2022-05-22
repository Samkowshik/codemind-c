#include<stdio.h>
int main()
{
    int n,i,j,a[10],c=0,u=1;
    scanf("%d",&n);
    for(i=0;n!=0;i++)
    {
        a[i]=n%10;
        n=n/10;
        c++;
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i]==a[j])
            {
                u=0;
                break;
            }
        }
    }
    if(u==0)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}