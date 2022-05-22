#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,s=0,c=0,r,i;
    scanf("%d",&n);
    d=n;
    while(d)
    {
        d=d/10;
        c++;
    }
    d=n;
    for(i=c;d!=0;i--)
    {
        r=d%10;
        s=s+pow(r,i);
        d=d/10;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}