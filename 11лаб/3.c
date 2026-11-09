#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    printf("Введите количество элементов массива (n): ");
    if (scanf_s("%d", &n) != 1 || n <= 0) {
        printf("Некорректный ввод.\n");
        return 1;
    }
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }
    printf("Введите %d целых чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    int min_val = arr[0];
    int max_val = arr[0];
    int min_index = 0;
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_index = i;
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_index = i;
        }
    }
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (i != min_index && i != max_index) {
            sum += arr[i];
        }
    }
    printf("Сумма элементов (кроме минимального и максимального): %lld\n", sum);
    free(arr); 
    return 0;
}