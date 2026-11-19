#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int m = 1 + rand() % 10;
    int k;
    printf("Угадай число от 1 до 10\n");
    printf("Введите число 1 до 10:");
    scanf_s("%d", &k);
    if (k == m) {
        printf("Вы угадали число!%d\n",m);
    }
    else {
        printf("К сожалению, вы не угадали число", m);
    }
    return 0;
}