#include<stdio.h>
int main()
{
    int t,tc,n,i,r,max,min;
    scanf("%d",&tc);
    for(t=0;t<tc;t++)
    {
        i=0,max=0;
        min=10;
        scanf("%d",&n);
        while(n)
        {
            r=n%10;
            max=r>max?r:max;
            min=r<min?r:min;
            n=n/10;
            i++;
        }
        if(i==max-min+1)
        printf("YES
");
        else
        printf("NO
");
    }
}