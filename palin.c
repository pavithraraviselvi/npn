
#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(t==rev)
{
printf("%d is palindrome",rev0;
}
else
{
printf("%d is not palindrome",n);
}
return0;
}
