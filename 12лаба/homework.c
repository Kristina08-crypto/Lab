#include <stdio.h>
#include <locale.h>
#include <stddef.h> 
int main() {
    setlocale(LC_ALL, "Russian");

    char v1, * p1 = &v1;
    p1++;
    printf("1): %d байт\n", (int)((char*)p1 - (char*)&v1));

    short int v2, * p2 = &v2;
    p2++;
    printf("2): %d байт\n", (int)((char*)p2 - (char*)&v2));

    unsigned short int v3, * p3 = &v3;
    p3++;
    printf("3): %d байт\n", (int)((char*)p3 - (char*)&v3));

    int v4, * p4 = &v4;
    p4++;
    printf("4): %d байт\n", (int)((char*)p4 - (char*)&v4));

    unsigned char v5, * p5 = &v5;
    p5++;
    printf("5): %d байт\n", (int)((char*)p5 - (char*)&v5));
   
    wchar_t v6, * p6 = &v6;
    p6++;
    printf("6): %d байт\n", (int)((char*)p6 - (char*)&v6));

    long long int v7, * p7 = &v7;
    p7++;
    printf("7): %d байт\n", (int)((char*)p7 - (char*)&v7));

    size_t v8, * p8 = &v8;
    p8++;
    printf("8): %d байт\n", (int)((char*)p8 - (char*)&v8));

    float v9, * p9 = &v9;
    p9++;
    printf("9): %d байт\n", (int)((char*)p9 - (char*)&v9));

    double v10, * p10 = &v10;
    p10++;
    printf("10): %d байт\n", (int)((char*)p10 - (char*)&v10));

    signed int v11, * p11 = &v11;
    p11++;
    printf("11): %d байт\n", (int)((char*)p11 - (char*)&v11));
    return 0;
}
