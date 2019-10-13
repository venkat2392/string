#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="india bangalore venkat and santhosh";
	char tmp;
	int i,j,m,n,cnt=0,cnt1=0;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
	{
		tmp=s[i];
		s[i]=s[j];
		s[j]=tmp;
	}
	//printf("%s\n",s);
	for(i=0;s[i];i++)
	{
		if(s[i]!=' ')
		{
			cnt++;
			continue;
		}
		else
		{
			 cnt1++;
		}
		for(m=(i-cnt),n=i-cnt1;m<n;m++,n--)
		{
			tmp=s[m];
			s[m]=s[n];
			s[n]=tmp;
		}
	//printf("%s\n",s);
	cnt=cnt1=0;
	}
	for(m=(i-cnt),n=i-1;m<n;m++,n--)
	{
		tmp=s[m];
		s[m]=s[n];
		s[n]=tmp;
	}
	printf("%s\n",s);
}
