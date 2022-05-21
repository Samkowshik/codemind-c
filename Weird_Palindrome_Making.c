#include<stdio.h>
int main()
{
    int t,n,i,j,c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        c=0;
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]%2!=0)
            {
                c++;
            }
        }
        printf("%d
",c/2);
    }
}