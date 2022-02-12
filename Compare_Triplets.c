#include<stdio.h>
int main()
{
    int a[3],b[3],i,j,ap=0,bp=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            ap++;
        }
        if(a[i]<b[i])
        {
            bp++;
        }
    }
    printf("%d %d",ap,bp);
}