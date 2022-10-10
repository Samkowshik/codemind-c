#include<stdio.h>
int two(int n)
{
    int i=1;
    while(i<n)
    {
        i=i*2;
    }
    return i;
}
int main()
{
    int n,i,j,fi=0,fj=0;
    scanf("%d",&n);
    if(two(n)==n)
    printf("0");
    else
    {
        i=j=n;
        while(fi==0 && fj==0)
        {
            i++;
            if(two(i)==i)
            fi=1;
            j--;
            if(two(j)==j)
            fj=1;
        }
        if(fi==1)
        printf("%d",i-n);
        else
        printf("%d",n-j);
    }
}