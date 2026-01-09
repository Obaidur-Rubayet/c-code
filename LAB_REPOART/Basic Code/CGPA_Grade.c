#include <stdio.h>

int main() {
    float c1,c2,c3,avg;
    printf("Enter 3 CGPAs: ");
    scanf("%f%f%f",&c1,&c2,&c3);

    avg = (c1+c2+c3)/3;

    printf("Average CGPA: %.2f\n", avg);

    if (avg == 4.00)
        printf("Grade: A+");
    else if (avg >= 3.75)
        printf("Grade: A");
    else if (avg >= 3.25)
        printf("Grade: B");
    else if (avg >= 3.00)
        printf("Grade: C");
    else
        printf("Grade: F");

    return 0;
}
