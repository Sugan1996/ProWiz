#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main()
{
  char a[]="Happy Pongal";
for(int i=0;a[i]!='\0';i++)
  {
    printf("%c",a[i]);
    delay(100);
  }
}
