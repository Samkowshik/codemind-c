#include<stdio.h>
int main()
{
    int n,r,c,o=0,e=0;
    scanf("%d",&n);
    for(c=0;n!=0;c++)
    {
        r=n%10;
        if(r%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        n=n/10;
    }
    if(c==e)
    {
        printf("Even");
    }
    else if(c==o)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}