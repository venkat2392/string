#include<stdio.h>
int main()
{
	char str[]="abababccdefghi";
	int count[256]={0};
	int i;
	for(i=0;str[i];i++)
	{
		count[str[i]]++;
	}

	for(i=0;str[i];i++)
	{
		if(count[str[i]]==1)
		{
			printf("%c\n",str[i]);
			//break;
		}
	}
}

