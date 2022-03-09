#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,x,s=0,sq;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sq=1;
        for(x=1;x<=a[i]/2;x++)
        {
            if(a[i]==pow(x,2))
            {
                sq=0;
            }
        }
        if(a[i]==1||sq==0)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}