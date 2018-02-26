#include <stdio.h>
#include<conio.h>
  int main() 
  {
    int a[10];
    int i;
    int v;
        for(i=0;i<10;i++) 
        {
    scanf("%d",&a[i]);
    }
        v=a[0];
    for(i=0;i<10;i++) 
    {
if(a[i]>v)
{
v=a[i];
    }
    }
    printf("Greatest of ten numbers is %d",g);
    return 0;
}
