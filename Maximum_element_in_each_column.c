#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    int a[row][col],i,j,big;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<col;i++)
    {
        big=0;
        for(j=0;j<row;j++)
        {
            big=a[j][i]>big?a[j][i]:big;
        }
        printf("%d
",big);
    }
}