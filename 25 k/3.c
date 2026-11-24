#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Russian");
	int K = 10;
	int N = 100; 
	int R = 30;
	srand(time(NULL)); 
	int counter[10] = { 0, 0 };
	int array[100];
	for (int i = 0; i < N; i++) {
		array[i] = 1 + rand() % K;
	}
	for (int i = 0; i < N; i++) {
		counter[array[i] - 1]++;
	}
	int nmax = 0;
	for (int i = 1; i < K; i++) {
		if (counter[i] > counter[nmax]) {
			nmax = i;
		}
	}
	for (int i = 0; i < K; i++) {
		int x = counter[i] * R / counter[nmax];
		printf("%2d: ", i + 1); 
		for (int j = 0; j < x; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}