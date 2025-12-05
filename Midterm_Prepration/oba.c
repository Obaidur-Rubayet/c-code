#include <stdio.h>

int main()
{
    int num = 123456, i = 0, x = 0, m;

    while (i < 4)
    {
        m = num % 10;

        int p = 1;
        for (int j = 0; j < i; j++)
            p *= 10;

        x = m * p + x;

        num /= 10;
        i++;
    }

    printf("%d", x);

    return 0;
}
