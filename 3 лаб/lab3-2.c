#include <stdio.h>
#include <locale.h>

#define D  2.54       
#define D2   2.32166   

int main() {
    setlocale(LC_ALL, "Russian");
    int dym;
    float result;
    puts("Введите количество целых дюймов для расчета:");
    scanf_s("%d", &dym);
    result = D * dym;
    printf("%d англ. дюймов – это %.2f см\n", dym, result);
    result = D2 * dym;
    printf("%d исп. дюймов – это %.2f см\n", dym, result);
    return 0;
}
