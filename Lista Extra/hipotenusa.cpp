#include <iostream>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	unsigned int lados[3], mai=0, aux;
	bool retangulo;
	// Digitar Lados
	for (int i=0; i<3; ++i) {
		printf("%do. Lado do Tri�ngulo: ", i+1); scanf("%d", &lados[i]);
		if (lados[i] > mai) {mai = lados[i];} // Achar Hipotenusa
	}
	// Organizar lados | 0) Hipotenusa --> 1) Lado A --> 2) Lado B
	for (int i=0; i<3; ++i) {
		if (lados[i]==mai) {
			aux = lados[0];
			lados[0] = lados[i];
			lados[i] = aux;
		}
	}
	retangulo = ((lados[0]*lados[0]) == (lados[1]*lados[1]) + (lados[2]*lados[2]));   
	if (retangulo) {
		printf("� Triangulo Ret�ngulo!");
	} else {
		printf("N�o � Tri�ngulo Ret�ngulo");
	}
	getch();
	return 0;
}
