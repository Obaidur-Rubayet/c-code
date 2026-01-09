#include <stdio.h>

int main()
{

   long long int id=2025100000417;
   long long int temp;
   int mod;
   int count=0;
   int rev=0;
   
   temp=id;
   while (id>0)
   {
      mod=id%10;
      if (mod%2!=0)
      {
        count++;
      }
      id=id/10;
            
   }
   int last_5=temp%100000;

   while (last_5>0)
   {
      mod=last_5%10;
      rev=rev*10+mod;
      last_5=last_5/10;
   }
   printf("Number of odd digits: %d\n",count);
   printf("Reversed last 5 digits: %d\n",rev);


  return 0;
}