#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    int i, j;
    int choice;
    int repeat = 1;
    srand(time(NULL));
    while (repeat == 1) {
        system("cls");
        printf("\nВведите размер квадратной матрицы: ");
        scanf_s("%d", &n);
        if (n <= 0) {
            printf("Ошибка!");
            system("pause");
            continue;
        }
        int** a = (int**)malloc(n * sizeof(int*));
        double** b = (double**)malloc(n * sizeof(double*));
        int* diag = (int*)malloc(n * sizeof(int));
        if (a == NULL || b == NULL || diag == NULL) {
            printf("Ошибка выделения памяти!");
            free(a);
            free(b);
            free(diag);
            system("pause");
            return 1;
        }
        for (i = 0; i < n; i++) {
            a[i] = (int*)malloc(n * sizeof(int));
            b[i] = (double*)malloc(n * sizeof(double));
            if (a[i] == NULL || b[i] == NULL) {
                printf("Ошибка выделения памяти!\n");
                for (j = 0; j < i; j++) {
                    free(a[j]);
                    free(b[j]);
                }
                free(a);
                free(b);
                free(diag);
                system("pause");
                return 1;
            }
        }
        printf("\nВыберите способ заполнения:\n");
        printf("1. Вручную\n");
        printf("2. Случайными числами\n");
        printf("Ваш выбор: ");
        scanf_s("%d", &choice);
        if (choice == 1) {
            printf("Введите элементы матрицы:\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    printf("Элемент a[%d][%d] = ", i + 1, j + 1);
                    scanf_s("%d", &a[i][j]);
                }
            }
        }
        else if (choice == 2) {
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    a[i][j] = rand() % 19 - 9;
                }
            }
            printf("\nМатрица заполнена случайными числами\n");
        }
        else {
            printf("Неверный выбор способа заполнения!\n");
            for (i = 0; i < n; i++) {
                free(a[i]);
                free(b[i]);
            }
            free(a);
            free(b);
            free(diag);
            system("pause");
            continue;
        }
        printf("\nИсходная матрица:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%8d", a[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < n; i++) {
            diag[i] = a[i][i];
        }
        int sum = 0;
        for (i = 0; i < n; i++) {
            sum += a[i][i];
        }
        printf("\nЭлементы главной диагонали:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", diag[i]);
        }
        printf("\nСлед матрицы (сумма диагонали): %d\n", sum);
        if (sum == 0) {
            printf("\nДеление невозможно!\n");
        }
        else {
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    if ((i + 1) % 2 == 0) {
                        b[i][j] = (double)a[i][j] / sum;
                    }
                    else {
                        b[i][j] = (double)a[i][j];
                    }
                }
            }
            printf("\nПреобразованная матрица (четные строки разделены на след):\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    printf("%8.2f", b[i][j]);
                }
                printf("\n");
            }
        }
        for (i = 0; i < n; i++) {
            free(a[i]);
            free(b[i]);
        }
        free(a);
        free(b);
        free(diag);
        printf("\nХотите попробовать ещё раз? (1 - да, 0 - нет): ");
        scanf_s("%d", &repeat);
    }
    printf("\nПрограмма завершена.\n");
    return 0;
}