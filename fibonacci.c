#include<stdio.h>
int main()
{
    int n,s,s1=0,s2=1,i;
    scanf("%d",&n);
    printf("0 1 ");
    for(i=1;i<=n-2;i++)
    {
        s=s1+s2;
        s1=s2;
        s2=s;
        printf("%d ",s);
    }
}