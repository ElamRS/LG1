#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int num, chave, dist;
	printf("N�mero: ");
	scanf("%d", &num);
	printf("N�mero Chave: ");
	scanf("%d", &chave);
	if ((num >= 0) && (num <= 100)){
		if (chave >= num) {
			dist = chave - num;
		} else {
			dist = num - chave;
		}
		printf("Dist�ncia do n�mero chave: %d", dist);
	} else {
		printf("N�mero fora do intervalo!");
	}
	getch();
	return 0;
}
