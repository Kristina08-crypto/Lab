#include <stdio.h>
#include <math.h>
#include <locale.h>
double sin_n(double x, int N) {
    double sum = 0.0;
    double slag = x; 
    for (int k = 1; k <= N; k++) {
        sum += slag; 
        slag = slag * (-x * x) / ((2 * k) * (2 * k + 1));
    }
    return sum;
}
double sin_eps(double x, double eps) {
    double sum = 0.0;
    double slag = x; 
    int k = 1;
    while (fabs(slag) > eps) {
        sum += slag; 
        slag = slag * (-x * x) / ((2 * k) * (2 * k + 1));
        k++;
    }
    return sum;
}
int main() {
    setlocale(LC_ALL, "Russian");
    double x;
    int N;
    double eps;
    printf("Введите значение x (в радианах): ");
    scanf_s("%lf", &x);
    printf("Введите количество членов ряда N: ");
    scanf_s("%d", &N);
    printf("Введите точность вычислений eps (например, 0.0001): ");
    scanf_s("%lf", &eps);
    double res_standart = sin(x);
    double res_n = sin_n(x, N);
    double res_eps = sin_eps(x, eps);
    printf("\n=== Результаты вычислений ===\n");
    printf("1) Стандартная функция sin(x):  %.10f\n", res_standart);
    printf("2) Через заданное число N:       %.10f (Разница: %.10f)\n", res_n, fabs(res_standart - res_n));
    printf("3) Через заданную точность eps:  %.10f (Разница: %.10f)\n", res_eps, fabs(res_standart - res_eps));
    return 0;
}