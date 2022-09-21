#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int num, chave, dist;
	printf("Número: ");
	scanf("%d", &num);
	printf("Número Chave: ");
	scanf("%d", &chave);
	if ((num >= 0) && (num <= 100)){
		if (chave >= num) {
			dist = chave - num;
		} else {
			dist = num - chave;
		}
		printf("Distância do número chave: %d", dist);
	} else {
		printf("Número fora do intervalo!");
	}
	getch();
	return 0;
}
