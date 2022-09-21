#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
	// Variáveis
	int i, j, A[10], B[10];
	// Ler Vetor A
	for (i = 0; i < 10; ++i) {
		printf("A[%d]: ", i+1);
		scanf("%d", &A[i]);
	}
	getch(); // Segurar Tela
	system("cls"); // Limpar Tela
	
	// Criar Vetor B Inverso
	for (j = 9, i = 0; j >= 0; --j, ++i) {
		B[i] = A[j];
	}
	
	// Exibição do Vetor B
	printf("Vetor B: ");
	for (i = 0; i < 10; ++i) {
		printf("%d ", B[i]);
	}
	getch();
}
