#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int N, result;
	printf("Digite um número menor ou igual a 50: ");
	scanf("%d", &N);
	if (N > 50) {
		printf("número maior que 50.");
		return 0;
	}
	while (N < 250) {
		result = N;
		N *= 3;
	}
	printf("Resultado: %d", result);
	getch();
	return 0;
}
