#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	puts("Нажмите Enter для продолжения");
	getchar();
	puts("Продолжение программы");
	return 0;
}