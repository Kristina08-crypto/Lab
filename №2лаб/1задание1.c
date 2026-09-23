#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("%d\n", 1);
    printf("\t%d\n", 2);
    printf("\t\t%d\n", 3);
    printf("\t\t\t%d\n", 4);
    printf("%10.5f\n ", 12.234657);
    printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
    printf("Результат деления 7 на 5 равен %f\n", 7. / 5);
    printf("Результат умножения 2000 на 4 равен %d\n", 2000 * 4);
    printf("%d разделить %d равно %d\n", 5., 2000000., 5. / 2000000);
    printf("%f разделить %f равно %f\n", 5., 2000000., 5. / 2000000);
    printf("%g разделить %g равно %g\n", 5., 2000000., 5. / 2000000);
    printf("%e разделить %e равно %e\n", 5., 2000000., 5. / 2000000);


}