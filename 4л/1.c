#include <stdio.h>
#include <locale.h> 
int main()
{
	setlocale(LC_ALL, "Russian");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("char = %c\n", c);
	printf("int = %d\n", i);
	printf("float = %f\n", f);
	printf("double = %lf\n", d);
	scanf_s("%c", &c, 1);
	scanf_s("%d", &i);
	scanf_s("%f", &f);
	scanf_s("%lf", &d);
	printf("char=%c\n", c);
	printf("int=%d\n", i);
	printf("float=%f\n", f);
	printf("double=%e\n", d);
	printf("\nЗадача 1a:");
	printf("Целая часть=%d\n", (int)f);
	printf("Дробная часть=%а\n", f - (int)f);
}