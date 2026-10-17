#include <stdio.h>
#include <locale.h> 
int main()
{
    setlocale(LC_ALL, "Russian");
    printf("Табулирование функции: y = 5*x^3 + 2*x^2 - 15*x - 6\n");
    printf("Интервал: [1.3; 3.4]\n\n");
    float shag;
    float y;
    printf("Введите шаг табуляции: ");
    scanf_s("%f", &shag);
    printf("-------------------------\n");
    printf("|    x    |    f(x)     |\n");
    printf("-------------------------\n");
    for (float x = 1.3; x <= 3.4; x += shag) {
        y = 5 * (x * x * x) + 2 * (x * x) - 15 * x - 6;
        printf("|  %.2f   |   %.2f    |\n", x, y);
    }
    printf("-------------------------\n");
    return 0;
}
