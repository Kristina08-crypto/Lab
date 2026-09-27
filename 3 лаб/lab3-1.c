#include <stdio.h>
#include <locale.h>

int main()
{
	int num, num2;
	setlocale(LC_ALL, "Russian");
	puts("введите первое число:");
	scanf_s("%d", &num);
	puts("введите второе число:");
	scanf_s("%d", &num2);
	
	printf("выведите сумму %d\n", num + num2);
	printf("выведите разность %d\n", num - num2);
	printf("выведите произведение %d\n", num * num2);
	printf("выведите часное %f\n", num2*1.0/num);
	printf("выведите остаток от деления %d\n", num2%num);
	return 0;
}