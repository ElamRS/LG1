#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
	int i, j, aux, A[20], B[30], C[50];
	// Ler vetor A
	for (i = 0; i < 20; ++i) {
		printf("A[%d]: ", i+1);
		scanf("%d", &A[i]);
	}
	getch();
	system("cls");
	// Ler vetor B
	for (i = 0; i < 30; ++i) {
		printf("B[%d]: ", i+1);
		scanf("%d", &B[i]);
	}
	getch();
	system("cls");
	// Vetor C
	for (i = 0; i < 50; ++i) {
		if (i < 20) {
			C[i] = A[i];
		} else {
			C[i] = B[i-20];
		}
	}
	// Ordenar C
	for (i=0; i<=48; ++i) {
		for (j=i+1; j<=49; ++j) {
			if (C[i] < C[j]) {
				aux = C[j];
				C[j] = C[i];
				C[i] = aux;
			}
		}
	}
	// Exibir vetor C
	printf("Vetor C: ");
	for (i = 0; i < 50; ++i) {
		printf("%d; ", C[i]);
	}
	getch();
	return 0;
}
