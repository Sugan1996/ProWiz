#include<stdio.h>
void main()
{
      int a[10][10],n,i,j,t;
      printf("\nEnter the no of rows and columns of the matrix:");
      scanf("%d",&n);
      printf("\nEnter the elements:\n");
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
      }
      clrscr();
      printf("Matrix\n");
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
          printf("%d\t",a[i][j]);
      }
      printf("\n");
      }
      for(i=0;i<n;i++)
      {
        for(j=0;j<i;j++)
      {
        t=a[i][j];[j]=a[j][i];
         a[j][i]=t;
      }
      }
      printf("\nTransposed matrix\n");
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
       {
        printf("%d\t",a[i][j]);
        }
      printf("\n");
      }
}
