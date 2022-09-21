#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float R, V, A;
	float pi = 3.14159;
    printf("Raio: ");
    scanf("%f", &R);
    V = ((4 * pi) * pow(R, 3)) / 3;
    A = 4 * pi * pow(R, 2);
    printf("Volume: %.2f\n", V);
    printf("Area: %.2f", A);
    getch();
    return 0;
}

