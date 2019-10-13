#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="sharp software development india";
	char words[4][15];
        int cnt,j, i;
        char temp[15];
        cnt = j =0;
	for(i=0;str[i];i++)
	{
		if(str[i]!=' ')
		{
			words[cnt][j]=str[i];
                        j++;
                        continue;
		}
		else
		{
			words[cnt][j]='\0';
			cnt++;
                        j=0;
                }
	}
	words[cnt][j]='\0';
	
	for(i=0;i<4;i++)
	{
		printf("%s\n",words[i]);
	}
	
	strcpy(temp,words[1]);
	strcpy(words[1],words[2]);
	strcpy(words[2],temp);

	for(i=0;i<4;i++)
	{
		printf("%s ",words[i]);
	}
}

