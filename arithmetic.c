
#include<stdio.h>
int main()
{
int a,d,n,i,s=0;
printf("Enter the value");
scanf("%d%d%d",&a,&d,&n);
for(i=1;i<=n;i++)
{
s=s+a*(i*d);

}
printf("%d",s);
return 0;
}
