#include<stdio.h>
int main()
{
    int rw,i,j,s;
    scanf("%d",&rw);
    int a[rw][2];
    for(i=0;i<rw;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rw;i++)
    {
        s=0;
        for(j=0;j<2;j++)
        {
            s=s+a[i][j];
        }
        printf("%d
",s);
    }
}