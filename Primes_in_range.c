#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,c=0,f;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        f=0;
        if(i==1)
        continue;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        c++;
    }
    printf("%d",c);
}