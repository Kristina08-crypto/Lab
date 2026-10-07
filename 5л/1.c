#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>   
#include <locale.h> 

int main() {
    setlocale(LC_ALL, "Russian");

    double gr; 

    printf("Введите угол в градусах: ");
    scanf_s("%lf", &gr); 

    printf("Синус угла равен: %f\n", sin(gr * M_PI / 180.0));
    system("pause");
    return 0;
}
