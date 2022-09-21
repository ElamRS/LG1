#include <stdio.h>
#include <locale.h>

// prestacao = valor + (valor * (taxa/100) * tempo)

float prestacao_calc(float valor, float taxa, int tempo);

int main(void) {
	setlocale(LC_ALL, "portuguese");
	float prestacao, valor, taxa;
	int tempo;
	
	printf("Valor Inicial: R$"); fflush(stdin); scanf("%f", &valor);
	printf("Taxa [%]: "); fflush(stdin); scanf("%f", &taxa);
	printf("Tempo [mês]: "); fflush(stdin); scanf("%d", &tempo);
	
	prestacao = prestacao_calc(valor, taxa, tempo);
	printf("Prestação: R$%.2f", prestacao);
	return 0;
}

float prestacao_calc(float valor, float taxa, int tempo) {
	int prest = valor + (valor * (taxa/100) * tempo);
	return prest;
}
