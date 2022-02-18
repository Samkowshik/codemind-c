#include<stdio.h>
int rev(int n)
{
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,i,j,fi=1,fj=1;
    scanf("%d",&n);
    i=n;
    j=n;
    while(fi==1&&fj==1)
    {
        i++;
        if(i==rev(i))
        {
            fi=0;
        }
        j--;
        if(j==rev(j))
        {
            fj=0;
        }
    }
    if(fi==0 && fj==0)
    {
        printf("%d %d",j,i);
    }
    else if(fi==0)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d",j);
    }
}