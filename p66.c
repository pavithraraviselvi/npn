#include<stdio.h>
int main()
{
	int m,n,p;
	scanf("%d%d",&m,&n);
	p=m-n;
	if(p%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
