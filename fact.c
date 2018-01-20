#include<stdio.h>
#include<conio.h>
int main()
{
int n,fact=1;
printf("Enter any integer");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
fact=fact*i;
}
printf("Factorial of a given no is %d",fact);
return0;
}
