#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c",&ch);

    switch (ch) {
        case 'a':
        case 'A':
            printf("APPLE");
            break;

        case 'b':
        case 'B':
            printf("BALL");
            break;

        case 'c':
        case 'C':
            printf("CAT");
            break;

        case 'd':
        case 'D':
            printf("DOG");
            break;

        default:
            printf("Invalid Input");
    }

    return 0;
}
