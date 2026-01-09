#include <stdio.h>

int main() {
    int A[8] = {45, 99, 23, 67, 99, 12, 88, 99};
    int max = A[0];

    for (int i = 1; i < 8; i++)
        if (A[i] > max)
            max = A[i];

    printf("Maximum: %d\nPositions: ", max);
    for (int i = 0; i < 8; i++)
        if (A[i] == max)
            printf("%d ", i);

    return 0;
}
