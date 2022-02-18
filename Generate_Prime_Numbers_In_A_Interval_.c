#include<stdio.h>
int main()
{
    int n1,n2,n,i,p;
    scanf("%d%d",&n1,&n2);
    for(n=n1;n<n2;n++)
    {
        p=1;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                p=0;
                break;
            }
        }
        if(p==1&&n!=1)
        {
            printf("%d
",n);
        }
    }
}