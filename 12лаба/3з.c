#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int x = 5, * pa = &x, * start_int = pa;
    printf("До ++:    %p, *pa = %d\n", (void*)pa, *pa);
    pa++;
    printf("После ++: %p (сдвиг: +%ld байт)\n", (void*)pa, (char*)pa - (char*)start_int);
    pa--;
    printf("После --: %p, *pa = %d\n\n", (void*)pa, *pa);

    double d = 5.0, * pd = &d, * start_d = pd;
    printf("До ++:    %p, *pd = %g\n", (void*)pd, *pd);
    pd++;
    printf("После ++: %p (сдвиг: +%ld байт)\n", (void*)pd, (char*)pd - (char*)start_d);
    pd--;
    printf("После --: %p, *pd = %g\n\n", (void*)pd, *pd);

    char c = 'A', * pc = &c, * start_c = pc;
    printf("До ++:    %p, *pc = %c\n", (void*)pc, *pc);
    pc++;
    printf("После ++: %p (сдвиг: +%ld байт)\n", (void*)pc, (char*)pc - (char*)start_c);
    pc--;
    printf("После --: %p, *pc = %c\n\n", (void*)pc, *pc);

    long double ld = 5.0L, * pld = &ld, * start_ld = pld;
    printf("До ++:    %p, *pld = %Lg\n", (void*)pld, *pld);
    pld++;
    printf("После ++: %p (сдвиг: +%ld байт)\n", (void*)pld, (char*)pld - (char*)start_ld);
    pld--;
    printf("После --: %p, *pld = %Lg\n\n", (void*)pld, *pld);

    short unsigned int su = 5, * psu = &su, * start_su = psu;
    printf("До ++:    %p, *psu = %hu\n", (void*)psu, *psu);
    psu++;
    printf("После ++: %p (сдвиг: +%ld байт)\n", (void*)psu, (char*)psu - (char*)start_su);
    psu--;
    printf("После --: %p, *psu = %hu\n\n", (void*)psu, *psu);

    _Bool b = 1, * pb = &b, * start_b = pb;
    printf("До ++:    %p, *pb = %d\n", (void*)pb, *pb);
    pb++;
    printf("После ++: %p (сдвиг: +%ld байт)\n", (void*)pb, (char*)pb - (char*)start_b);
    pb--;
    printf("После --: %p, *pb = %d\n", (void*)pb, *pb);
    return 0;
}
