#include <stdio.h>

int main() {
    int a[10], s1 = 0, s2 = 0;

    printf("Enter 10 integers: ");

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 5; i++)
        s1 += a[i];
    for (int i = 5; i < 10; i++)
        s2 += a[i];

    if (s1 > s2)
        printf("First half greater");
    else if (s2 > s1)
        printf("Second half greater");
    else
        printf("Both halves are equal");

    return 0;
}
