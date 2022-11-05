#include<stdio.h>
int pri(int n)
{
    if(n==0 ||n==1)
    return 0;
    int i,f=1;
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}
int main()
{
    int n,r,sc=0,c=0;
    scanf("%d",&n);
    if(pri(n)==1)
    {
        while(n)
        {
            r=n%10;
            if(pri(r)==1)
            sc++;
            n=n/10;
            c++;
        }
        if(sc==c)
        printf("Mega Prime");
        else
        printf("Not Mega Prime");
    }
    else
    printf("Not Mega Prime");
}