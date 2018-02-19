#include<stdio.h>
int main()
{
	int i,count=0;
	char ch[100];
	scanf("%[^\n]",ch);
	for(i=0;ch[i]!=0;i++)
	{
		if(ch[i]=='.')
		{
			count++;
		}
	}
	printf("%d",count+1);
	return 0;
}
