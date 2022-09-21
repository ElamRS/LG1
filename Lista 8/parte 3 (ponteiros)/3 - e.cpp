#include <stdio.h>
#include <conio.h>
#define size 12
int matriz_A[size], matriz_B[size], matriz_C[size], aux;
void lermatrizA(int *matriz, int i), lermatrizB(int *matriz, int i), lermatrizC(int *matrizC, int *matrizA, int *matrizB), ordenar(char m), exibir(void);

int main(void) {
	// Ler matriz A por passagem por referência
	for (int i=0; i<size; ++i) {
		lermatrizA(&matriz_A[i], i);
	}
	printf("\n");
	// Ler matriz B por passagem por referência
	for (int i=0; i<size; ++i) {
		lermatrizB(&matriz_B[i], i);
	}
	
	ordenar('a');
	ordenar('b');
	
	
	for (int i=0; i<size; ++i) {
		lermatrizC(&matriz_C[i], &matriz_A[i], &matriz_B[i]);
	}
	
	ordenar('c');
	exibir();
	return 0;
}

void exibir(void) {
	// Exibir C
	printf("\nValores da Matriz C: \n");
	for (int i=0; i<size; ++i) {printf("Matriz C[%d]: %d\n", i, matriz_C[i]);}
}

void lermatrizA(int *matriz, int i) {
	printf("Matriz A[%d]: ", i); 
	fflush(stdin); scanf("%d", &*matriz);
}

void lermatrizB(int *matriz, int i) {
	printf("Matriz B[%d]: ", i); 
	fflush(stdin); scanf("%d", &*matriz);
}

void lermatrizC(int *matrizC, int *matrizA, int *matrizB) {
	*matrizC = *matrizA + *matrizB;
}

void ordenar(char m) {
	if (m=='a') {
		// Ordenar A
		for (int i=0; i<=size-2; ++i) {
			for (int j=i+1; j<=size-1; ++j) {
				if (matriz_A[i] > matriz_A[j]) {
					aux = matriz_A[i];
					matriz_A[i] = matriz_A[j];
					matriz_A[j] = aux;
				}
			}
		}
	} else if (m=='b') {
		// Ordenar B
		for (int i=0; i<=size-2; ++i) {
			for (int j=i+1; j<=size-1; ++j) {
				if (matriz_B[i] > matriz_B[j]) {
					aux = matriz_A[i];
					matriz_B[i] = matriz_B[j];
					matriz_B[j] = aux;
				}
			}
		}
	} else if (m=='c') {
		// Ordenar C
		for (int i=0; i<=size-2; ++i) {
			for (int j=i+1; j<=size-1; ++j) {
				if (matriz_C[i] > matriz_C[j]) {
					aux = matriz_C[i];
					matriz_C[i] = matriz_C[j];
					matriz_C[j] = aux;
				}
			}
		}
	}
}
