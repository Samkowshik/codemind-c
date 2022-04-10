#include<stdio.h>
int main()
{
	int i,x=0,y=0;
	char str[20];
	scanf("%s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]=='z')
		{
			x++;
		}
		if(str[i]=='o')
		{
			y++;
		}
	}
	if(2*x==y)
	{
	    printf("Yes");
	}
	else
	{
	    printf("No");
	}
}