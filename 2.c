#include <stdio.h>
#include <locale.h> 
int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 11, b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("int = %d\n", x);
	printf("float = %f\n", y);
	printf("double = %lf\n", z);
	printf("%f\n", (float)a / b);
	printf("%lf\n", (double)a / b);
	return 0;
}
