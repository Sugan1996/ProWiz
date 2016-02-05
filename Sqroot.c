#include<stdio.h>

float SquareRoot(float n);

void main()
{
    int n;
    
    printf("\nEnter the number:");
    scanf("%d",&n);
    printf ("Root of %d is %f", n, SquareRoot(n));
}

  float SquareRoot(float n)
    {
    float x = n;
    float y = 1;
    float e = 0.000001;
    while(x - y > e)
      {
       x = (x + y)/2;
       y = n/x;
      }
    return x;
    }
