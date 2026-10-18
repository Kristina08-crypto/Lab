#include <stdio.h>
#include <locale.h> 
int main() 
{
    setlocale(LC_ALL, "Russian");
    int n;
    int i;
    float proiz = 1.0f;
    printf("Введите n: ");
    scanf_s("%d", &n);
    for (i = 2; i <= n; i++) {
         proiz = proiz * (1.0f - 1.0f / (i * i));
    }
    printf("Результат: %f\n", proiz);
    return 0;
    }
