#include<stdio.h>
int main()
{
	int n,n1,n2,n3;
	scanf("%d",&n);
	while(n!=0)
	{
		n1=n%10;
		n=n/10;
		n2=n%10;
		n=n/10;
		n3=n%10;
		n=n/10;
	}
	printf("%d%d%d",n3,n2,n1);
	return 
