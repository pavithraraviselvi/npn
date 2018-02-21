#include<stdio.h>
int main()
{
int a=3,b=2;
printf("values of a&b before swapping:%d%d",a,b);
{
a=a++b;
b=a-b;
a=a-b;
}
printf("values of a&b after swapping:%d%d",a,b);
return 0;
}
