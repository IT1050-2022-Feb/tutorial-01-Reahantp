

#include <stdio.h>

int main() 
{  
  int distanc;
  int price;

   printf("input distance of travel :");
   scanf("%d",&distanc);

   if(distanc-30 <=0)
   {
     price=distanc*50;
   }
   else
   {
     price=30*50+(distanc-30)*40;
   }
  
   printf("amount=%d",price);
   
  return 0;
}
