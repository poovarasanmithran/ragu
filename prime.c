#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f=0;
printf("enter the integer:");
scanf("%d",&n);
for(i=2;i<=n\2;i++)
{
if(n%i==0)
{
f=1;
}
}
if(f==0)
{
printf(" prime number");
}
else
{
printf("not a prime number");
}
}
