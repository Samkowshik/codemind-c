#include<stdio.h>
int main()
{
    int rw,cl,i,j,s=0;
    scanf("%d%d",&rw,&cl);
    int a[rw][cl];
    for(i=0;i<rw;i++)
    {
        for(j=0;j<cl;j++)
        {
            scanf("%d",&a[i][j]);
            s=s+a[i][j];
        }
    }
    printf("%d",s);
}