#include<stdio.h>
int main()
{
    int a,t,r;
    scanf("%d",&a);
    while(a/10!=0)
    {
        t=a;
        a=0;
        while(t)
        {
            r=t%10;
            a=a+r;
            t=t/10;
        }
    }
   printf("%d",a);
}