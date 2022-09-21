#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

void lermatrizA(int *matriz, int i), lermatrizB(int *matriz, int i), juntar(), exibir();

int matrizA[30], matrizB[30], matrizC[60];

int main(void) {
	system("color 0F");
	// Ler matriz A com passagem de valor por referência
	for (int i=0; i<30; ++i) {
		lermatrizA(&matrizA[i], i);
		printf("%d", matrizA[i]);
	} getch(); system("cls");
	// Ler matriz B com passagem de valor por referência
	for (int i=0; i<30; ++i) {
		lermatrizB(&matrizB[i], i);
		printf("%d", matrizB[i]);
	} getch(); system("cls");
	
	juntar();
	exibir();
	getch();
	return (0);
}

void lermatrizA(int *matriz, int i) {
	printf("Matriz A[%d]: ", i+1);
	scanf("%d", &*matriz);
}

void lermatrizB(int *matriz, int i) {
	printf("Matriz B[%d]: ", i+1);
	scanf("%d", &*matriz);
}

void juntar(void) {
	for (int i=0; i<60; ++i) {
		if (i<30) {
			matrizC[i] = matrizA[i];
		} else {
			matrizC[i] = matrizB[i-30];
		}
	}
}

void exibir(void) {
	for (int i=0; i<60; ++i) {
		printf("Matriz C[i]: ", i+1);
		printf("%d\n", matrizC[i]);
	}
	getch(); system("cls");
}
