#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
void inputMatrica(int** a, int n) {
	int i, j;
	printf("Введите элементы матрицы:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("Элемент a[%d][%d] =", i + 1, j + 1);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void randomMatrica(int** a, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			a[i][j] = rand() % 19 - 9;
		}
	}
}
void printMatrica(int** a, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("8d", a[i][j]);
		}
		printf("\n");
	}
}
void printPreobrazMatrica(double** a, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("8.2f", a[i][j]);
		}
		printf("\n");
	}
}
int main() {
	setlocale(LC_ALL, "Russion");
	int n;
	int i, j;
	int choice;
	int repeat = 1;
	while (repeat = 1) {
		system("cls");
		printf("\n====Главное меню====\n");
		printf("1. Начать работу\n");
		printf("0. Выход\n");
		printf("Ваш выбор:");
		scanf_s("%d", &choice);
		if (choice == 0) {
			printf("Программа завершена.\n");
			break;
		}
		if (choice != 1) {
			printf("Неверный выбор, попробуйте снова.\n");
			system("pause");
			continue;
		}
		printf("\nВведите размер квадратной матрицы:");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf("Ошибка!");
			system("pause");
			continue;
		}
		int** a = (int**)malloc(n * sizeof(int*));
		double** b = (double**)malloc(n * sizeof(double*));
		int* diag = (int*)malloc(n * sizeof(int));
		if (a == NULL || b == NULL || diag == NULL) {
			printf("Ошибка выделения памяти!");
			free(a);
			free(b);
			free(diag);
			system("pause");
			return 1;
		}
		for (i = 0; i < n; i++) {
			a[i] = (int*)malloc(n * sizeof(int));
			b[i] = (double*)malloc(n * sizeof(double));
			if (a[i] == NULL || b[i] == NULL) {
				printf("Ошибка выделения памяти!\n");
				for (j = 0; j < i; j++) {
					free(a[j]);
					free(b[j]);
				}
				free(a);
				free(b);
				free(diag);
				system("pause");
				return 1;
			}
		}
		printf("\nВыберите способ заполнения:\n");
		printf("1. Вручную\n");
		printf("2. Случайными числами\n");
		printf("Ваш выбор:");
		scanf_s("%d", &choice);
		if (choice == 1) {
			inputMatrica(a, n);
		}
		else if (choice == 2) {
			randomMatrica(a, n);
			printf("\nМатрица заполнена случайными числами\n");
		}
		else {
			printf("Неверный выбор способа заполнения!\n");
			for (i = 0; i < n; i++) {
				free(a[i]);
				free(b[i]);
			}
			free(a);
			free(b);
			free(diag);
			system("pause");
			continue;
		}
		printf("\nИсходная матрица:\n");
		printMatrica(a, n);
		int sum = 0;
		for (i = 0; i < n; i++) {
			diag[i] = a[i][i];
			sum += diag[i];
		}
		printf("\nЭлементы главной диагонали:\n");
		for (i = 0; i < n; i++) {
			printf("%d", diag[i]);
		}
		printf("\nСлед матрицы(сумма диагонали):%d\n", sum);
		if (sum == 0) {
			printf("\nДеление невозможно!\n");
		}
		else {
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					if ((i + 1) % 2 == 0) {
						b[i][j] = (double)a[i][j] / sum;
					}
					else {
						b[i][j] = (double)a[i][j];
					}
				}
			}
			printf("\nПреобразованная матрица(четные строки разделены на след):\n");
			printPreobrazMatrica(b, n);
		}
		for (i = 0; i < n; i++) {
			free(a[i]);
			free(b[i]);
		}
		free(a);
		free(b);
		free(diag);
		printf("\n\n");
	}
	return 0;
}