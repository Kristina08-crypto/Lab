#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1 };
    float* ptr_a;
    printf("4.1 Адреса массива:\n");
    printf("array = %p\n", array);
    printf("&array[0] = %p\n", &array[0]);
    printf("&array = %p\n\n", &array);
    printf("4.2 Перемещение по массиву:\n");
    ptr_a = array;
    printf("Начало: ptr_a = %p, *ptr_a = %g\n", ptr_a, *ptr_a);
    ptr_a++;
    printf("ptr_a++: ptr_a = %p, *ptr_a = %g\n", ptr_a, *ptr_a);
    ptr_a = ptr_a + 4;
    printf("ptr_a + 4:ptr_a = %p, *ptr_a = %g\n", ptr_a, *ptr_a);
    ptr_a = ptr_a - 2;
    printf("ptr_a - 2:ptr_a = %p, *ptr_a = %g\n\n", ptr_a, *ptr_a);
    printf("4.3 Прямой проход:\n");
    ptr_a = array;
    while (ptr_a < array + 10) {
        printf("ptr_a = %p, *ptr_a = %g\n", ptr_a, *ptr_a);
        ptr_a += 2;
    }
    printf("\n");    
    printf("4.4 Обратный проход:\n");
    ptr_a = &array[9];
    while (ptr_a >= array) {
        printf("ptr_a = %p, *ptr_a = %g\n", ptr_a, *ptr_a);
        ptr_a--;
    }
    return 0;
}
