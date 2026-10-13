#include <stdio.h>
#include <locale.h> 
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, s = 1;

	printf("Введите в степень n:");
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		printf("%d=%d\n",i,s);
		s = s * 2;
	}
	printf("Результат %1fk\n", (double)s/1024);
	return 0;
}
