#include<stdio.h>
int main()
{
    int si,i,s,r,d;
    scanf("%d",&si);
    int a[si];
    for(i=0;i<si;i++)
    {
        scanf("%d",&a[i]);
        d=a[i];
        s=0;
        while(d!=0)
        {
            r=d%10;
            s=r+s*10;
            d=d/10;
        }
        if(s==a[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}