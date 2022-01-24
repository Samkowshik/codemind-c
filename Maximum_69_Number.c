#include<stdio.h>
int main()
{
    int n,r,o=1,p=0,x;
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        r=x%10;
        if(r==6)
        {
        	p=o;
		}
		o=o*10;
        x=x/10;
    }
    printf("%d",n+3*p);
    return 0;
}