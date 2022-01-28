#include<stdio.h>
int main()
{
    int si,i,t,s=0;
    scanf("%d",&si);
    int a[si];
    for(i=0;i<si;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<si;i++)
    {
        if(a[i]<=t)
        {
            s++;
        }
        else
        {
            s=s+2;
        }
    }
    printf("%d",s);
}