#include<stdio.h>
int main()
{
    int a,b,i,s1=0,s2=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            s1=s1+i;
        }
    }
    for(i=1;i<=b/2;i++)
    {
        if(b%i==0)
        {
            s2=s2+i;
        }
    }
    if(s1==b&&s2==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}