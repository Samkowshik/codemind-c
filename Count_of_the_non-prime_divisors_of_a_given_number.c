#include<stdio.h>
int main()
{
    int n,i,j,f,c=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i!=0)
        continue;
        f=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        c++;
    }
    printf("%d",c);
}