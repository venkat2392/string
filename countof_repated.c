#include<stdio.h>
int main()
{
	int count[256]={0},count1[256]={0};
	char str[10];
	printf("enter input string:");
	scanf("%s",str);
	int i;
	for(i=0;str[i];i++)
	{
		count[str[i]]++;
	}
	
	for(i=0;str[i];i++)
	{
		if(count1[str[i]] != 0)
		{
			continue;
		}
		else
		{
			printf("%c%d",str[i],count[str[i]]);
			count1[str[i]]++;
		}
	}
	printf("\n");
}

