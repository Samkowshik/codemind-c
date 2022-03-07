#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,f=0,c=0,b=0,p;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        c=0;
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i]==a[j])
            {
                f=1;
                c++;
            }
        }
        if(f==1&&c>b)
        {
            p=i;
            b=c;
        }
    }
    printf("%d",a[p]);
}