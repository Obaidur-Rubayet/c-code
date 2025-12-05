#include <stdio.h>

int main()
{

  int hight=6,weidth=5;
  for (int i = 1; i <= hight; i++)
  {
    for (int j = 1; j <= weidth; j++)
    {
      if (i==hight||i==1||j==weidth||j==1)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  

  return 0;
}