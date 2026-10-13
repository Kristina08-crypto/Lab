#include <stdio.h>
#include <locale.h> 
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m, i, s = 0, k = 0;

	printf("Введите значение:\n");
	scanf_s("%d %d", &n, &m);
	for (i = m; i >= n; i--)
	{
		s += i;
		k++;
		printf("\nВыполнено %d раз", k);
	}
	printf("\nРезультат %d\n", s);
	return 0;
}

