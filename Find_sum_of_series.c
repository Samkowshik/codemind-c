#include<stdio.h>
int main()
{
    float n,i,r,s=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        r=1/i;
        s=s+r;
    }
    printf("%.2f",s);
}