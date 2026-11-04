#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    char s;
    int h, b; 
    int i, j;
    int p;
    do {
        printf("Введите символ: ");
        scanf_s(" %c", &s);
        printf("Введите высоту: ");
        scanf_s("%d", &h);
        printf("Введите основание: ");
        scanf_s("%d", &b);
        printf("\nРезультат:\n");
        for (j = 0; j < h - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < b; j++) {
            printf("%c", s);
        }
        printf("\n");
        for (i = 1; i < h - 1; i++) {
            for (j = 0; j < h - 1 - i; j++) {
                printf(" ");
            }
            printf("%c", s);
            for (j = 0; j < b - 2 + 2 * i; j++) {
                printf(" ");
            }
            printf("%c", s);
            printf("\n");
        }
        if (h > 1) {
            for (j = 0; j < b + 2 * (h - 1); j++) {
                printf("%c", s);
            }
            printf("\n");
        }
        printf("\nЕще раз? (1 - Да, 0 - Нет): ");
        scanf_s("%d", &p);
    } while (p != 0);
    return 0;
}