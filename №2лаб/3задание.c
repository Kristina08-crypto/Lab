#include <stdio.h>
#include <locale.h>
main()
{
	int n = 3, m = 1333;
	setlocale(LC_ALL, "RUS");
	printf("Дано: \n%8d \n%8d \n\n   --------\nОтвет: \n%+010.5f", n, m, n * 1. / 1333);
}