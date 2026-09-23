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
    printf("������� �� ������� %d �� %d ����� %d\n ", 5, 2, 5 % 2);
    printf("��������� ������� 7 �� 5 ����� %f\n", 7. / 5);
    printf("��������� ��������� 2000 �� 4 ����� %d\n", 2000 * 4);
    printf("%d ��������� %d ����� %d\n", 5., 2000000., 5. / 2000000);
    printf("%f ��������� %f ����� %f\n", 5., 2000000., 5. / 2000000);
    printf("%g ��������� %g ����� %g\n", 5., 2000000., 5. / 2000000);
    printf("%e ��������� %e ����� %e\n", 5., 2000000., 5. / 2000000);


}