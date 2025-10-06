#include<stdio.h>
int main()
{
  int a;
  printf("enter your number:");
  scanf("%d",&a);
  
  if (a>100||a<0)
  {
    printf("INVALID");
  }  
  else if (a>=80)
  {
    printf("A+");
  }
  else if (a>=70)
  {
    printf("A");
  }
  else if (a>=65)
  {
    printf("A-");
  }
  else if (a>=60)
  {
    printf("B");
  }
  else if (a>=50)
  {
    printf("C");
  }  
  else if (a>=40)
  {
    printf("D");
  }
  else
    printf("FAIL");

 return 0; 
}