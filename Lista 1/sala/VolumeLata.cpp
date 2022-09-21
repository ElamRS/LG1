#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	float pi, raio, altura, volume;
	pi = 3.14159;
	printf("Raio (cm): ");
    scanf("%f", &raio);
    printf("Altura (cm): ");
    scanf("%f", &altura);
    volume = pi * ((pow(raio, 2)) * altura);
    printf("Volume da Lata (cm3): %.2f", volume);
    getch();
    return 0;
}
