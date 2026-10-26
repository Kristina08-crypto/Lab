#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int n, a, sum1, sum2, count, i;
    char c;

    do
    {
        printf("Введите четное количество цифр в числе: ");
        scanf_s("%d", &n);
        sum1 = 0;
        sum2 = 0;
        count = 0;
        a = n;
        while (a > 0)
        {
            count++;
            a = a / 10;
        }
        a = n;
        for (i = 0; i < count / 2; i++)
        {
            sum2 += a % 10;
            a = a / 10;
        }
        while (a > 0)
        {
            sum1 += a % 10;
            a = a / 10;
        }
        if (sum1 == sum2)
            printf("Суммы равны\n");
        else
            printf("Суммы не равны\n");

        printf("Продолжить? (y - да, n - нет): ");
        scanf_s(" %c", &c, 1);
    } while (c != 'n');
    return 0;
}