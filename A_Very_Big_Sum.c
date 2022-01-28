#include<stdio.h>
int main()
{
    long long int si,i,s,a[1010];
    scanf("%llu",&si);
    for(i=0;i<si;i++)
    {
        scanf("%llu",&a[i]);
        s=s+a[i];
    }
    printf("%llu",s);
}