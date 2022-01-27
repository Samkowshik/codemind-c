#include<stdio.h>
int main()
{
    int s,i,o=0,e=0;
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("%d %d",e,o);
}