/*
	9)- Dado um vetor de 50 números reais em ordem crescente, informe quantos desses 
	números DIFERENTES também aparecem na diagonal principal de uma matriz 60x60.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	float aux, vetor[50], matriz[60][60];
	int i, j, qtd_aparece=0;
	
	// Escrever valores aleatórios entre 0 e 100 na diagonal (e somente na diagonal) da matriz[60][60]
	for (int i=0; i<60; i++) {
		matriz[i][i] = rand() % 100;
	}
	
	// Ler Valores do Vetor
	for (i=0; i<50; i++) {
		printf("Digite o valor: ");
		fflush(stdin); scanf("%d", &vetor[i]);
		// vetor[i] = rand() % 100; // caso queira testar o programa rapidamente
	}
	// Colocar em Ordem Crescente
	for (i=0; i<=48; i++) {
		for (j=i+1; j<=49; j++) {
			if (vetor[i] > vetor[j]) {
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = vetor[i];
			}
		}
	}
	// Comparar valores do vetor com a diagonal principal
	for (i=0; i<50; i++) {
		for (j=0; j<60; j++) {
			if (vetor[i] == matriz[j][j]) {
				qtd_aparece++;;
			}
		}
	}
	
	printf("A qtd de vezes que valores do vetor aparecem na diagonal principal e: %d", qtd_aparece);
	
	return 0;
}


