#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Russian");
    char* pc;
    int* pi;
    double* pd;
    printf("char*: %zu\n", sizeof(pc));
    printf("int*: %zu\n", sizeof(pi));
    printf("double*: %zu\n", sizeof(pd));
    return 0;
}
