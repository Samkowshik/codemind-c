#include<stdio.h>
int main()
{
    int s,x,c,i,ed=0;
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        c=0;
        x=a[i];
        while(x!=0)
        {
            x=x/10;
            c++;
        }
        if(c%2==0)
        {
            ed++;
        }
    }
    printf("%d",ed);
}