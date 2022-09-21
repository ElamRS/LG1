#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	float nota;
	printf("Nota do aluno: ");
	scanf("%f", &nota);
	if (fmod(nota, 1) > 0.5) {
		nota = ceil(nota);
	} else {
		nota = floor(nota);
	}
	printf("Nota arredondada: %.2f", nota);
	getch();
	return 0;
}
