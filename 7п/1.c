#include <stdio.h>
#include <locale.h> 
int main()

{
	setlocale(LC_ALL, "Russian");
	char c;
	printf("Введите символ: ");
	scanf_s("%c", &c);
	switch (c)
	{
		case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
			printf("Это цифра\n");
			break;
		default:
			printf("Это буква\n");
			break;
	}
	return 0;

}