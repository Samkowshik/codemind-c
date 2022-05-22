#include<stdio.h>
#include<math.h>
int main()
{
    int c,x,d,r;
    scanf("%d",&c);
    d=sqrt(1+4*c);
    r=(d-1)/2;
    if(r*(r+1)==c)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}