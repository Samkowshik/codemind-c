#include<stdio.h>
int main()
{
	int i,c=0;
	char str[100];
	fgets(str,100,stdin);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]==' ')
		{
			c++;
		}
	}
	printf("%d",c+1);
}