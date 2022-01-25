#include<stdio.h>
int main()
{
    int n1,n2,x,d,r,c,sd,l=0;
    scanf("%d%d",&n1,&n2);
    for(x=n1;x<=n2;x++)
    {
    	if(x%10==0)
    	{
    		continue;
		}
        c=0;
    	sd=0;
        d=x;
        while(d!=0)
        {
            d=d/10;
            c++;
        }
        d=x;
        while(d!=0)
        {
            r=d%10;
            if(x%r==0)
            {
                sd++;
            }
            d=d/10;
        }
        if(c==sd)
        {
            printf("%d ",x);
        }
        l++;
    }
}