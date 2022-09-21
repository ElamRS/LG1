#include <stdio.h>
#include <locale.h>

void somatermos(int n);

int main(void) {
	setlocale(LC_ALL, "portuguese");
	int n;
	printf("\t| Soma dos N primeiros n�meros de uma Sequ�ncia N�merica | \n\n");
	printf("Valor de N: "); scanf("%d", &n);
	somatermos(n);
	return 0;
}

void somatermos(int n) {
	int i=1, s = 0;
	while (i<=n) {
		s += i;
		++i;
	}
	printf("Soma dos termos: %d", s);
}
