#include <stdio.h>
#include <conio.h>

int main()
{
	float altura, largura, perimetro, area;
    printf("Altura do Retangulo (cm): ");
    scanf("%f", &altura);
    printf("Largura do Retangulo (cm): ");
    scanf("%f", &largura);
    perimetro = (altura + largura) * 2;
    area = altura * largura;
    printf("\n");
    printf("Perimetro: %.2f m\n", perimetro);
    printf("Area: %.2f m2\n", area);
	getch();
	return 0;
}
