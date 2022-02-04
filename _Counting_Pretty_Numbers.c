#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int a[s][2],i,j,x,r,c;
    for(i=0;i<s;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<s;i++)
    {
        c=0;
        for(x=a[i][0];x<=a[i][1];x++)
        {
            r=x%10;
            if(r==2||r==3||r==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}