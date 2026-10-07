#include <stdio.h>
#include <math.h>
#include <locale.h>
#define P 2.6         

int main()
{
    setlocale(LC_ALL, "Russian");   

    double x, y;         
    double a, b;       
    printf("Введите значение x: ");
    scanf_s("%lf", &x);
    a = P * P * P + x * x * x;
    b = exp(sqrt(P + x));
    y = (b * b * b) / (a * a);
    printf("\nРезультат вычислений:\n");
    printf("Значение x = %.5lf\n", x);
    printf("Значение y = %.2lf\n", y);
    system("pause");
    return 0;
}