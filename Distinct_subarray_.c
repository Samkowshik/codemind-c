#include<stdio.h>
int main()
{
    int a,b,i,j,k,s,c=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=a;j<=b;j++)
        {
            s=0;
            for(k=i;k<=j;k++)
            {
                s=s+k;
            }
            if(s%2==1)
            c++;
        }
    }
    printf("%d",c);
}