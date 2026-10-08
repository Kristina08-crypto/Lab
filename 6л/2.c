#include <stdio.h>
#include <locale.h> 
int main()
{
	setlocale(LC_ALL, "Russian");
	float x;
	printf("Введите значение x:");
	scanf_s("%f", &x);
	printf("Значение функции F(x)=%f\n", (x >= -3.5) ? (4 * x * x + 2 * x - 19) : (2 * x / (-4 * x + 1)));
	return 0;
}
