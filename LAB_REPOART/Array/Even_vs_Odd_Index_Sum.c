#include <stdio.h>

int main() {
    int a[10], even = 0, odd = 0;

    printf("Enter 10 integers: ");

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
            even += a[i];
        else
            odd += a[i];
    }

    if (even > odd)
        printf("Even wins");
    else
        printf("Odd wins");

    return 0;
}

