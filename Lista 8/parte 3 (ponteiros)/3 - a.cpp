#include <stdio.h>
#include <locale.h>

void somatermos(int n, int *s);

int main(void) {
	setlocale(LC_ALL, "portuguese");
	int n, soma;
	printf("\t| Soma dos N primeiros N.º de uma Sequência Númerica | \n\n");
	printf("Valor de N: "); scanf("%d", &n);
	somatermos(n, &soma);
	printf("Soma dos termos: %d", soma);
	return 0;
}

void somatermos(int n, int *s) {
	int i=1;
	*s = 0;
	while (i<=n) {
		*s += i;
		++i;
	}
}
