#include<stdio.h>
#include<math.h>
int main()
{
    double t,p,r,i;
    scanf("%lf%lf%lf",&p,&r,&t);
    i=p*pow((1+r/100),t);
    printf("%.2f",i);
}