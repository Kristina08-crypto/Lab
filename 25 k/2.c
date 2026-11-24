#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define MMAX 25
#define DM 10.0
int rand10(int mmax) {
    return 1 + rand() % (mmax - 1);
}
double rand_double(double dmin, double dmax) {
    return dmin + 1.f * (dmax - dmin) * rand() / RAND_MAX;
}
int* rand10_2(int* arr, int n, int mmax) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand10(mmax);
    }
    return arr;
}
double* rand_double_2(double* arr, int n, double dm) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand_double(-dm, dm);
    }
    return arr;
}
int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    int a[N];
    double b[N];

    printf("Целое: %d\n", rand10(MMAX));
    printf("Вещественное: %.2f\n", rand_double(-DM, DM));

    rand10_2(a, N, MMAX);
    printf("Массив целых: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    rand_double_2(b, N, DM);
    printf("Массив вещественных: ");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", b[i]);
    }
    printf("\n");
    return 0;
}
