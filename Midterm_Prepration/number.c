#include <stdio.h>

int main() {
    int num, lastTwo, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Extract the last two digits
    lastTwo = num % 100;

    // Sum the last two digits
    sum = (lastTwo / 10) + (lastTwo % 10);

    // Check if the sum is between 10 and 12
    if (sum >= 10 && sum <= 12) {
        printf("Lucky number\n");
    } else {
        printf("Not a lucky number\n");
    }

    return 0;
}
