#include<stdio.h>
int main()
{
    int s,i,x,d,c;
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        c=0;
        d=i;
        x=a[i];
        for(i=0;i<s;i++)
        {
            if(a[i]<x)
            {
                c++;
            }
        }
        printf("%d ",c);
        i=d;
    }
}