#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    float a, b;

    puts("¬ведите число a:");
    scanf_s("%f", &a);

    puts("¬ведите число b:");
    scanf_s("%f", &b);
    printf("_________________________________________________\n");
    printf("|     a * b     |     a + b     |     a - b     |\n");
    printf("|  %4.2f * %-4.2f  |  %4.2f + %-4.2f  |  %4.2f - %-4.2f  |\n", a, b, a, b, a, b);
    printf("|    %7.2f    |    %7.2f    |    %7.2f    |\n", a * b, a + b, a - b);
    printf("_________________________________________________\n");
    return 0;
}
