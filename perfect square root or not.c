#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i*i==n)
        {
            s=1;
            break;
        }
    }
    if(s==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}