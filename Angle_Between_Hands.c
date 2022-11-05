#include<stdio.h>
#include<math.h>
int main()
{
    int h,m;
    float ha,ma,a;
    scanf("%d:%d",&h,&m);
    ma=m*6;
    ha=h*30+m*0.5;
    a=abs(ha-ma);
    if(a>180)
    printf("%.1f",360-a);
    else
    printf("%.1f",a);
}