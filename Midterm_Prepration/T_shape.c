#include <stdio.h>

int main()
{

  int height=5,width=5;
  for (int i = 1; i <= width; i++)
  {
    printf("*");
  }
  printf("\n");
  int mid=(width/2)+1;
  for (int j = 1; j <= height; j++)
  {
    for (int k = 1; k <= width; k++)
    {
        if (k==mid)
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