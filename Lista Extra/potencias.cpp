#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
	int i, valor[3];
	for (i=0; i<3; ++i) {printf("%do. Valor: ", i+1); scanf("%d", &valor[i]); valor[i]=pow(valor[i], 2);}
	if (valor[2] >= 1000) {return 0;}
	for (i=0; i<3; ++i) {printf("%d\n", valor[i]);}
	getch();
	return 0;
}
