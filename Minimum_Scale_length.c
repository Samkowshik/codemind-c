#include<stdio.h>
int main()
{
    int si,s=99999,i,x,c;
    scanf("%d",&si);
    int a[si];
    for(i=0;i<si;i++)
    {
        scanf("%d",&a[i]);
        s=a[i]<s?a[i]:s;
    }
    for(x=s;x>=1;x--)
    {
        c=0;
        for(i=0;i<si;i++)
        {
            if(a[i]%x==0)
            {
                c++;
            }
        }
        if(si==c)
        {
            printf("%d",x);
            break;
        }
    }
}