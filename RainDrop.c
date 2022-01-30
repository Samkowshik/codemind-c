#include<stdio.h>
int main()
{
    int n,f=1;
    scanf("%d",&n);
    if(n%3==0)
    {
        printf("Pling");
        f=0;
    }
    if(n%5==0)
    {
        printf("Plang");
        f=0;
    }
    if(n%7==0)
    {
        printf("Plong");
        f=0;
    }
    if(f==1)
    {
        printf("%d",n);
    }
}