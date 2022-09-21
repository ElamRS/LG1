#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{	
    float peso, altura, IMC;
    printf("Peso (kg): ");
    scanf("%f", &peso);
    printf("Altura (m): ");
    scanf("%f", &altura);
    IMC = peso / pow(altura, 2);
    printf("IMC: %.2f", IMC);
	getch();
	return 0;
}
