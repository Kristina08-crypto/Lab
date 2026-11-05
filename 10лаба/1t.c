#include <stdio.h>
#include <math.h>
#include <locale.h>
double fa(double x) {
    double y;
    if (x <= 3) {
        y = x * x - 3 * x + 9;
    }
    else {
        y = 1.0 / (x * x * x + 3);
    }
    return y;
}
double fb(double x) {
    double y;
    y = x * exp(sin(x * x));
    return y;
}
int main() {
    setlocale(LC_ALL, "Russian");
    double x;
    int menu;
    printf("Введите значение x: ");
    scanf_s("%lf", &x);
    printf("\nВыберите действие:\n");
    printf("1 - Расчет значения функции F1(x)\n");
    printf("2 - Расчет значения функции F2(x)\n");
    printf("3 - Расчет произведения, разности квадратов и удвоенной суммы\n");
    printf("Ваш выбор: ");
    scanf_s("%d", &menu);
    printf("\n");
    if (menu == 1) {
        printf("fa(x)=%lf\n", fa(x));
    }
    else if (menu == 2) {
        printf("fb(x)=%lf\n", fb(x));
    }
    else if (menu == 3) {
        printf("fa(x)=%lf, fb(x)=%lf\n", fa(x), fb(x));
        printf("произведение=%lf, разность квадратов=%lf, удвоенная сумма=%lf\n",
            fa(x) * fb(x),
            (fa(x) * fa(x)) - (fb(x) * fb(x)),
            2 * (fa(x) + fb(x)));
    }
    else {
        printf("Неверный пункт меню.\n");
    }
    return 0;
}