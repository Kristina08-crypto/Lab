#include <stdio.h>
#include <locale.h> 
int main()
{
	setlocale(LC_ALL, "Russian");
	int yeas;
	printf("Введите год:\n");
	scanf_s("%d", &yeas);
	if ((yeas % 4 == 0 && yeas % 100 != 0) || (yeas % 400 == 0)) {
		printf("год %d високосный\n", yeas);
	}
	else {
		printf("год %d не високосный\n", yeas);
	}
	return 0;
}