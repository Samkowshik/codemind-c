#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    scanf("%[^
]s",s);
    int l=strlen(s);
    if(l==10 && s[0]!=0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}