#include <stdio.h>

int minimum(int x, int y)
{
  if(x<y)
  {
    return x;
  }
  else 
    return y;
  
}
int maximum(int a, int b)
{ 
  if(a>b)
  {
    return a;
  }
  else 
   return b;
}
int multiply(int m, int n)
{
  return m*n;
  
}

int main() 
{
   int no1, no2;
   

   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);

   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));

   return 0;
}
