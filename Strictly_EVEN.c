#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,sc=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            c++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && i%2==0)
        {
            sc++;
        }
    }
    if(c==sc)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}