#include<stdio.h>
int main()
{
    int n1,n2,n,x,i,p;
    scanf("%d%d",&n1,&n2);
    n=n1+n2;
    for(x=n+1;;x++)
    {
        p=1;
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
                p=0;
            }
        }
        if(p==1)
        {
            printf("%d",x-n);
            break;
        }
    }
}