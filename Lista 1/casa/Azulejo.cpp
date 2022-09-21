#include <stdio.h>
#include <conio.h>

int main()
{
	float ap, lp, aa, la;
    float azulejoalt, azulejolat, total;
    printf("Altura da Parede (m): ");
    scanf("%f", &ap);
    printf("Largura da Parede (m): ");
    scanf("%f", &lp);
    printf("Altura do Azulejo (cm): ");
    scanf("%f", &aa);
    printf("Largura do Azulejo (cm): ");
    scanf("%f", &la);
    azulejoalt = ap / (aa / 100);
    azulejolat = lp / (la / 100);
    total = azulejoalt * azulejolat;
    printf("Quantidade de Azulejos: %.2f", total);
	getch();
	return 0;
}
   
