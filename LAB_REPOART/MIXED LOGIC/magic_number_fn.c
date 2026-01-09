#include <stdio.h>

int sod(int x) {
    int sod = 0;
    while (x > 0) {
        sod += x % 10;
        x /= 10;
    }
    return sod;
}

int rsod(int sod) {
    int rsod = 0;
    while (sod > 0) {
        rsod = rsod * 10 + (sod % 10);
        sod /= 10;
    }
    return rsod;
}

int psod(int sod, int rsod) {
    int psod;
    psod = sod * rsod;
    return psod;
}

int main() {
    int a, b, c, num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    a = sod(num);
    b = rsod(a);
    c = psod(a, b);

    if (c == num) {
        printf("Magic Number\n");
    } else {
        printf("Not a Magic Number\n");
    }

    return 0;
}