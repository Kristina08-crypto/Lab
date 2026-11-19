#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    setlocale(LC_ALL, "Rus");
    int N;
    int i, j;
    int choice;
    printf("Введите размер квадратной матрицы (от 1 до 50): ");
    scanf_s("%d", &N);
    if (N <= 0 || N > 50) {
        printf("Ошибка: размер должен быть от 1 до 50!\n");
        return 1;
    }
    int matrix[50][50];
    int diag[50];
    int sum = 0;
    printf("\nВыберите способ заполнения матрицы %dx%d:\n", N, N);
    printf("1 - Ввести вручную с консоли\n");
    printf("2 - Заполнить случайными числами\n");
    printf("Ваш выбор: ");
    scanf_s("%d", &choice);
    if (choice == 1) {
        printf("\nВведите %d строк по %d чисел:\n", N, N);
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf("Элемент [%d][%d]: ", i, j);
                scanf_s("%d", &matrix[i][j]);
            }
        }
    }
    else if (choice == 2) {
        srand(time(NULL));
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                matrix[i][j] = rand() % 20 + 1;
            }
        }
        printf("\nМатрица заполнена случайными числами.\n");
    }
    else {
        printf("Неверный выбор. Завершение программы.\n");
        return 1;
    }
    printf("\nИсходная матрица %dx%d:\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nДиагональные элементы:\n");
    for (i = 0; i < N; i++) {
        diag[i] = matrix[i][i];
        printf("%d ", diag[i]);
    }
    printf("\n");
    for (i = 0; i < N; i++) {
        sum += diag[i];
    }
    printf("След матрицы = %d\n\n", sum);
    printf("Преобразованная матрица:\n");
    if (sum == 0) {
        printf("Ошибка: След равен 0, деление невозможно!\n");
    }
    else {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                if (i % 2 == 0) {
                    printf("%8.2f ", (float)matrix[i][j] / sum);
                }
                else {
                    printf("%8d ", matrix[i][j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
