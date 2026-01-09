#include <stdio.h>

int main() {
    char s[100];
    int u = 0, d = 0, sp = 0;

    printf("Enter a string: ");

    gets(s);

    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            u++;
        else if (s[i] >= '0' && s[i] <= '9')
            d++;
        else if (s[i] == ' ')
            sp++;
    }

    printf("Uppercase: %d\nDigits: %d\nSpaces: %d", u, d, sp);

    return 0;
}
