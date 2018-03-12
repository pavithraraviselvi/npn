#include<stdio.h>
int main()
{
	int i,n,t1=0,t2=1,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	t=t1+t2;
	t1=t2;
	t2=t;
	printf("%d",t1);
	}
	return 0;
}
