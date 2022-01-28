#include<stdio.h>
int main()
{
    int a,b,i,m;
    scanf("%d%d",&a,&b);
    m=a>b?a:b;
    for(i=m/2;i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}