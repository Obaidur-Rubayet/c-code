#include <stdio.h>

int main()
{

  int hight=8,weidth=5,mid;
  for (int i = 1; i <= weidth; i++)
  {
    printf("*");
  }
  printf("\n");
  mid=(weidth/2)+1;
  for (int j = 1; j <= hight; j++)
  {
    for (int k = 1; k <= weidth; k++)
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