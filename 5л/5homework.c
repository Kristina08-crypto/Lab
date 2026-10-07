#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

#define PI 3.1416

int main()
{
    setlocale(LC_ALL, "Russian");

    double x = 6.251;
    double y = 0.827;
    double z = 25.001;
    double b;
    double z_rad = z * PI / 180.0;
    double step1 = pow(y, cbrt(fabs(x)));
    double step2 = pow(cos(y), 3);
    double bracket = 1 + pow(sin(z_rad), 2) / sqrt(x + y);
    double modul = fabs(x - y);
    double znamenatel = exp(fabs(x - y)) + x / 2.0;

    b = step1 + step2 * modul * bracket / znamenatel;

    printf("Значение b = %.4lf\n", b);

    system("pause");
    return 0;
}