#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    int b[n],q,c=0,f,x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&q);
    for(i=0;i<n;i++)
    {
        f=1;
        for(x=a[i];x<=b[i];x++)
        {
            if(x==q)
            {
                f=0;
            }
        }
        if(f==0)
        {
            c++;
        }
    }
    printf("%d",c);
}