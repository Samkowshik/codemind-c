#include<stdio.h>
int main()
{
    int n,i,k,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            f=1;
            break;
        }
    }
    if (f==1)
    printf("%d",i);
    else
    printf("-1");
}