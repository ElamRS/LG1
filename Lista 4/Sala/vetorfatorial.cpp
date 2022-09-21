#include <stdio.h>
#include <iostream>
#include <conio.h>
#define size 6

int main() {
	int i, j, A[size], B[size];
	int soma = 1;
	// Ler matriz A
	for (i = 0; i < size; ++i) {
		printf("A[%d]: ", i+1);
		scanf("%d", &A[i]);
	}
	system("cls");
	// Preencher matriz B
	for (i = 0; i < size; ++i) {
		for (j = 1; j <= A[i]; ++j) {
			soma = soma * j;
		}
		B[i] = soma;
		soma = 1;
	}
	// Exibir B
	printf("Vetor B: ");
	for (i = 0; i < size; ++i) {
		printf("%d ", B[i]);
	}
	getch();
}
