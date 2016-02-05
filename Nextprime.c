#include<stdio.h>
void main()

  {
  int n,i;
  printf("\nEnter the number:");
  scanf("%d",&n);
  n=n+1;
  for(i=2;i<=(n/2);i++)
      {
        if(n%i==0)
         {
           n++;
           i=2;
         }
      }
  
printf("%d is the next prime",n);
  }

