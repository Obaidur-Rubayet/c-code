#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    printf("\nBefore:\n");
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    strcpy(s1, s2);
    printf("\nAfter strcpy(s1, s2):\n");
    printf("s1 = %s\n", s1);

    strncat(s1, s2, 3);
    printf("\nAfter strncat(s1, s2, 3):\n");
    printf("s1 = %s\n", s1);

    return 0;
}
