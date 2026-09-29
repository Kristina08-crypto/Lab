#include <stdio.h>
#include <locale.h> 
int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	scanf_s("%d", &N);
	int a = N / 100;
	int b = (N % 100) / 10;
	int c = N % 10;
	printf("Последняя цифра числа: %d\n", c);
	printf("Первая цифра числа: %d\n", a);
	printf("Сумма цифр числа: %d\n", a + b + c);
	printf("Число наоборот: %d%d%d", c, b, a);
}
	

