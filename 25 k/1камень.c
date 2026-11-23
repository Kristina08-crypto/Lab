#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int m = 1 + rand() % 3;  
    int k;
    printf("Камень-ножницы-бумага!\n");
    printf("Введите: 1 - камень, 2 - ножницы, 3 - бумага: ");
    scanf_s("%d", &k);
    if (k == m) {
        printf("Ничья! Оба выбрали одно и то же\n");
    }
    else if ((k == 1 && m == 2) || (k == 2 && m == 3) || (k == 3 && m == 1)) {
        printf("Вы победили! Компьютер выбрал: %d\n", m);
    }
    else {
        printf("Вы проиграли. Компьютер выбрал: %d\n", m);
    }
    return 0;
}