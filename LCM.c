#include<stdio.h>
int main()
{
    int a,b,m,n;
    scanf("%d%d",&a,&b);
    m=a>b?a:b;
    for(n=m;;n++)
    {
        if(n%a==0&&n%b==0)
        {
            printf("%d",n);
            break;
        }
    }
}