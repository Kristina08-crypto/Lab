#include <stdio.h>
#include <math.h>
#include <locale.h> 

float radius_r(float a)
{
	float r;
	r = a / 2;
	return r;
}
float radius_R(float a)
{
	float R;
	R = (a * sqrt(2)) / 2;
	return R;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	float a;
	float r, R;
	printf("Введите сторону квадрата: ");
	scanf_s("%f", &a);

	r = radius_r(a);
	R = radius_R(a);
	printf("Радиус вписанной окружности: %.2f\n", r);
	printf("Радиус описанной окружности: %.2f\n", R);
	system("pause");
}