#include<stdio.h>
int main()
{
    int n,r,m=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        m=r>m?r:m;
        n=n/10;
    }
    printf("%d",m);
}