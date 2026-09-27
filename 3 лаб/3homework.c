#include <stdio.h>
#include <math.h>
#include <locale.h> 

int main() {
    setlocale(LC_ALL, "Russian");

    float a;
    float r, R;

    printf("Введите сторону квадрата: ");
    scanf_s("%f", &a);

    r = a / 2;
    R = (a * sqrt(2)) / 2;

    printf("Радиус вписанной окружности: %.2f\n", r);
    printf("Радиус описанной окружности: %.2f\n", R);

    return 0;
}
