#include <stdio.h>
#include <locale.h>
int main()
{
    int N = 16, K = 15;
    setlocale(LC_ALL, "Russian");
    printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
    printf("Идёт %d минута суток\n", N * 60 + K + 1);
    printf("До полуночи осталось %d часов и %d минут \n", 23 - N, 60 - K);
    printf("С 8.00 прошло %d секунд\n", ((N - 8) * 3600) + (K * 60));
    printf("Текущий час= %.2f суток и текущая минута = %.2f часа\n", N / 24., K / 60.);
}