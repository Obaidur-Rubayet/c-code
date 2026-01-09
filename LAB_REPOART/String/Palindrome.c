#include <stdio.h>
#include <string.h>

int main() {
    char s[50];

    printf("Enter a string: ");

    gets(s);

    int l = strlen(s), flag = 1;

    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
