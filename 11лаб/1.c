#include <stdio.h>
#include <locale.h>
#define N 10
int main() {
    setlocale(LC_ALL, "Russian");
    float A[N];
    float temp;
    int i;
    printf("Введите %d вещественных чисел:\n", N);
    for (i = 0; i < N; i++) {
        printf("a[%d] = ", i + 1);
        scanf_s("%f", &temp);
        A[i] = temp;
    }
    float original_A[N];
    for (i = 0; i < N; i++) {
        original_A[i] = A[i];
    }
    float last_element = A[N - 1];
    for (i = 0; i < N; i++) {
        A[i] = A[i] + last_element;
    }
    printf("\n-------------------------------------------\n");
    printf("| индекс | исходное значение | новое значение |\n");
    printf("-------------------------------------------\n");
    for (i = 0; i < N; i++) {
        printf("| %6d | %17.2f | %14.2f |\n", i + 1, original_A[i], A[i]);
    }
    printf("-------------------------------------------\n");
    float sum = 0;
    for (i = 0; i < N; i++) {
        sum += A[i];
    }
    printf("\nСреднее арифметическое элементов: %.2f\n", sum / N);
    return 0;
}