#include <stdio.h>

int main()
{ 

  int hight,width;
  printf("ENTER THE HIGHT:");
  scanf("%d",&hight);
  printf("ENTER THE WIDTH:");
  scanf("%d",&width);
  for (int i = 1; i <= hight; i++)
  {
    for (int j = 1; j <= width; j++)
    {
        if (i==1||i==hight||j==1||j==width)
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