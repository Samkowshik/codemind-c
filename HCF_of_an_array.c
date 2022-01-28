#include<stdio.h>
int main()
{
    int n,i,x,c,s=99999;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=a[i]<s?a[i]:s;
    }
    for(x=s;x>=1;x--)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%x==0)
            {
                c++;
            }
        }
        if(c==n)
        {
            printf("%d",x);
            break;
        }
    }
}