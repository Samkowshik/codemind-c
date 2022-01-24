#include<stdio.h>
int main()
{
    int s,i,p,n;
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        p=0;
        for(n=1;n<a[i];n++)
        {
            if(n*n==a[i])
            {
                p=1;
            }
        }
        if(p==0)
        {
            printf("False
");
        }
        else
        {
            printf("True
");
        }
    }
}