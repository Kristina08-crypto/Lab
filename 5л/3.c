#include <stdio.h>
#include <locale.h>
#include <stdlib.h>  
int main() {
    setlocale(LC_ALL, "Russian");
    double a = 4.35;
    double b = 7.82;
    double y = 9.11;
    int A = (int)a; 
    int B = (int)b; 
    int C = (int)y;
    int a1 = (A % 2 == 0) != (B % 2 == 0);
    int b1 = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    printf("Выделенные целые числа: A = %d, B = %d, C = %d\n\n", A, B, C);
    printf("а) только одно из чисел А и В четное:\n");
    printf("условие выполнено (1 - да, 0 - нет): %d\n\n", a1);
    printf("б) каждое из чисел А, В, С кратно трем:\n");
    printf("условие выполнено (1 - да, 0 - нет): %d\n", b1);
    system("pause");
    return 0;
}
