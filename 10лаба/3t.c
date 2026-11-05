#include <stdio.h>
#include <locale.h>
void pokazat_opredelenie() {
    printf("Равнобедренная трапеция — это трапеция, у которой боковые стороны равны.\n");
    printf("У неё также равны углы при каждом из оснований.\n");
}
void narisovat_trapetsiyu(int height, int top) {
    int max_prob = height - 1;
    for (int i = 0; i < height; i++) {
        int tekushie_prob = max_prob - i;
        for (int j = 0; j < tekushie_prob; j++) {
            printf(" ");
        }
        int tekushaya_shirina = top + 2 * i;
        for (int j = 0; j < tekushaya_shirina; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    setlocale(LC_ALL, "RU_ru");
    int vibor;
    float a, b, h, S;
    int height, top;
    printf("=== Программа для работы с равнобедренной трапецией ===\n");
    printf("Что хочешь сделать?\n");
    printf("1 — Посчитать площадь трапеции\n");
    printf("2 — Узнать определение фигуры\n");
    printf("3 — Нарисовать трапецию из звёздочек\n");
    printf("Введи номер действия (1, 2 или 3): ");
    if (scanf_s("%d", &vibor) != 1) {
        printf("Ошибка: ты ввёл не число!\n");
        return 1;
    }
    if (vibor == 1) {
        printf("\n--- Расчёт площади ---\n");
        printf("Введи длину верхнего основания (a): ");
        scanf_s("%f", &a);
        printf("Введи длину нижнего основания (b): ");
        scanf_s("%f", &b);
        printf("Введи высоту трапеции (h): ");
        scanf_s("%f", &h);
        S = (a + b) / 2.0f * h;
        printf("Площадь трапеции равна: %.2f\n", S);
    }
    else if (vibor == 2) {
        printf("\n--- Определение ---\n");
        pokazat_opredelenie();
    }
    else if (vibor == 3) {
        printf("\n--- Рисование фигуры ---\n");
        printf("Сколько строк высотой будет трапеция (целое число): ");
        scanf_s("%d", &height);
        printf("Какой ширины сделать верх (звёздочек): ");
        scanf_s("%d", &top);
        narisovat_trapetsiyu(height, top);
        printf("Нижняя ширина получилась автоматически: %d звёздочек\n", top + 2 * (height - 1));
        printf("Готово! Вот твоя трапеция.\n");
    }
    else {
        printf("Ошибка: такого пункта нет. Выбери только 1, 2 или 3.\n");
    }
    return 0;
}
