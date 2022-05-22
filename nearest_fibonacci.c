#include<stdio.h>
int feb(int n)
{
    int s=0,s1=0,s2=1,f=1;
    while(s<n)
    {
        s=s1+s2;
        s1=s2;
        s2=s;
    }
    if(s==n)
    {
        f=0;
    }
    return f;
}

    int main()
    {
        int n,i,j,fi=1,fj=1;
        scanf("%d",&n);
        i=n,j=n;
        while(fi==1&&fj==1)
        {
            i++;
            if(feb(i)==0)
            {
                fi=0;
            }
            j--;
            if(feb(j)==0)
            {
                fj=0;
            }
        }
        if(fi==0&&fj==0)
        {
            printf("%d %d",j,i);
        }
        else if(fi==0)
        {
            printf("%d",i);
        }
        else
        {
            printf("%d",j);
        }
    }