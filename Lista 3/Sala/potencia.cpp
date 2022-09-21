#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	float b, p;
	printf("Base: ");
	scanf("%f", &b);
	printf("Potência: ");
	scanf("%f", &p);
	printf("%.2f", pow(b, p));
	getch();
	return 0;
}
