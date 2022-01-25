#include<stdio.h>
int main()
{
    int n,x,i,c,t=0;
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
            if(x%i==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            printf("%d ",x);
            t++;
        }
    }
    printf("
Total=%d",t);
}