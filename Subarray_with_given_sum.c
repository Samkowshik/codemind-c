#include<stdio.h>
int main()
{
    int t,n,sum,i,j,k,x,s,f;
    scanf("%d",&t);
    for(x=0;x<t;x++)
    {
        scanf("%d%d",&n,&sum);
        int a[n];
        f=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            if(f==1)
            break;
            for(j=i;j<n;j++)
            {
                s=0;
                for(k=i;k<=j;k++)
                {
                    s=s+a[k];
                }
                if(s==sum)
                {
                    printf("%d %d",i+1,j+1);
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        {
            printf("-1");
        }
        printf("
");
    }
}