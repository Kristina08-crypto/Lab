#include <stdio.h>
#include <locale.h> 
double vychislit_y(double x) {
    return 5 * x * x * x + 2 * x * x - 15 * x - 6;
}
int main() {
    setlocale(LC_ALL, "Russian");
    double start = 1.3;
    double end = 3.4;
    int kolichestvo = 100;
    double massiv[100];
    double shag = (end - start) / (kolichestvo - 1);
    double x = start;
    for (int i = 0; i < kolichestvo; i++) {
        massiv[i] = vychislit_y(x);
        x = x + shag;
    }
    double summa_polozh = 0;
    double summa_otric = 0;
    int kol_polozh = 0;
    int kol_otric = 0;
    for (int i = 0; i < kolichestvo; i++) {
        if (massiv[i] > 0) {
            summa_polozh = summa_polozh + massiv[i];
            kol_polozh = kol_polozh + 1;
        }
        else if (massiv[i] < 0) {
            summa_otric = summa_otric + massiv[i];
            kol_otric = kol_otric + 1;
        }
    }
    double srednee = 0;
    if (kol_polozh > 0) {
        srednee = summa_polozh / kol_polozh;
    }
    printf("Имя массива: massiv\n");
    printf("Накопленное значение положительных: %.4f\n", summa_polozh);
    printf("Накопленное значение отрицательных: %.4f\n", summa_otric);
    printf("Число положительных: %d\n", kol_polozh);
    printf("Число отрицательных: %d\n", kol_otric);
    printf("Вычисленное среднее: %.4f\n", srednee);
    return 0;
}