#include <iostream>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0D");
	int ano;
	printf("Digite o Ano: "); scanf("%d", &ano);
	if (ano%4==0) {
		if (ano%100==0) {
			if (ano%400==0) {
				printf("Ano Bissexto. yippee! :)");
			} else {
				printf("Não é ano Bissexto. :(");
			}
		} else {
			printf("Ano Bissexto. yippee! :)");
		}
	} else {
		printf("Não é ano Bissexto. :(");
	}
	getch();
	return 0;
}
