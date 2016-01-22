#include<stdio.h>
void main()
{
int n,r,s=0;
printf("\nEnter the number to be reversed:");
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=(s*10)+r;
n=n/10;
}
printf("\nThe reversed number is %d",s);
}
