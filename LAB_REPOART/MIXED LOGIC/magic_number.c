#include <stdio.h>

int main() {
    int n, temp, sum = 0, rev = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    temp = sum;

    while (temp != 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    if (n == sum * rev)
        printf("Magic Number\n");
    else
        printf("Not a Magic Number\n");

    return 0;
}
