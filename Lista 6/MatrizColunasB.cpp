#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>

int main() {
	int i, j, x, fat, A[10], B[10][3];
	// Ler Matriz A
	printf("Matriz A: \n");
	for (i=0; i<10; ++i) {
		printf(" Matriz A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	system("cls");
	// Criar Matriz B
	for (i=0; i<10; ++i) {
		for (j=0; j<3; ++j) {
			switch (j) {
				case 0:
					B[i][j] = A[i] + 5;
					break;
				case 1:
					fat = 1;
					for (x=1; x<=A[i]; ++x) {
						fat = fat * x;
					}
					B[i][j] = fat;
					break;
				case 2:
					B[i][j] = pow(A[i], 2);
					break;
				default:
					break;	
			}
		}
	}
	// Exibir Matriz B
	printf("Matriz B: ");
	for (i=0; i<10; ++i) {
		printf("\n	");
		for (j=0; j<3; ++j) {
			printf("%d | ", B[i][j]);
		}
	}
	getch();
}
