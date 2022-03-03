#include <stdio.h>

int main() 
{
  int mark1,mark2;
  float ave;

  printf("Insert mark 1:");
  scanf("%d",&mark1);
 
  printf("Insert mark 2:");
  scanf("%d",&mark2);

  ave=(mark1+mark2)/2.0;

  printf("Average = %.2f",ave);
  

  return 0;
}

