#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int x = 0x12345678;
    int* prt;
    unsigned char* a;
    prt = &x;
    a = (unsigned char*)prt;
    printf("Исходное число x:\n");
    printf("%.2x\n%.2x\n%.2x\n%.2x\n\n", *(a + 3), *(a + 2), *(a + 1), *a);
    int i_num = 12345;
    float f_num = 12345.0;
    double d_num = 12345.0;

    a = (unsigned char*)&i_num;
    printf("int (12345):");
    for (int i = sizeof(i_num) - 1; i >= 0; i--) {
        printf("%.2x ", *(a + i));
    }
    printf("\n");

    a = (unsigned char*)&f_num;
    printf("float (12345.0):");
    for (int i = sizeof(f_num) - 1; i >= 0; i--) {
        printf("%.2x ", *(a + i));
    }
    printf("\n");

    a = (unsigned char*)&d_num;
    printf("double (12345.0):");
    for (int i = sizeof(d_num) - 1; i >= 0; i--) {
        printf("%.2x ", *(a + i));
    }
    printf("\n");
    return 0;
}
