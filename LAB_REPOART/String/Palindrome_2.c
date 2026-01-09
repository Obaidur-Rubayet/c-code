#include <stdio.h>
#include <string.h>

int main()
{

   char str[100],rstr[100];
   int c;
    printf("Enter a string: ");
    gets(str);
    strcpy(rstr, str);
    strrev(rstr);
    c = strcmp(str, rstr);
    if (c == 0)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

  return 0;
}