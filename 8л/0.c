#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h> 
#include <stdlib.h>  
int main()
{
	setlocale(LC_ALL, "Russian");
	int count;
	char symbol;
	printf("Сколько символов печатать?");
	scanf("%d", &count);

	printf("Какой символ использовать?");
	scanf(" %с", &symbol);
	printf("\nРезультат работы программы:\n");
	for (int start = 1; start <= count; start++) {
			putchar(symbol);
		}
	printf("\n\n");
	system("pause");
	return 0;
}




