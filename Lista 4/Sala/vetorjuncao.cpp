#include <stdio.h>
#include <conio.h>
#include <iostream>

int main() {
	int i, A[5], B[5], C[10];
	// Ler vetor A
	for (i = 0; i < 5; ++i) {
		printf("A[%d]: ", i+1);
		scanf("%d", &A[i]);
	}
	printf("\n");
	// Ler vetor B
	for (i = 0; i < 5; ++i) {
		printf("B[%d]: ", i+1);
		scanf("%d", &B[i]);
	}
	getch();
	system("cls");
	// Vetor C
	for (i = 0; i < 10; ++i) {
		if (i < 5) {
			C[i] = A[i];
		} else {
			C[i] = B[i-5];
		}
	}
	// Exibir vetor C
	printf("Vetor C: ");
	for (i = 0; i < 10; ++i) {
		printf("%d; ", C[i]);
	}
	getch();
	return 0;
}
