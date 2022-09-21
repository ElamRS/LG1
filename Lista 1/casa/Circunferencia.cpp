#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float raio, A, C;
	float pi = 3.14159;
    printf("Raio: ");
    scanf("%f", &raio);
    C = (2 * pi) * raio;
    A = pi * pow(raio, 2);
    printf("Comprimento: %.3f\n", C);
    printf("Area: %.3f", A);
    getch();
    return 0;
}
