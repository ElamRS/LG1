#include <iostream>
#include <conio.h>
#define size 2

float n[size], media=0;
unsigned int i, situacao; 

int main() {
	setlocale(LC_ALL, "portuguese");
	for (i=0; i<size; ++i) {
		printf("%do. Nota: ", i+1);
		scanf("%f", &n[i]);
		media+=n[i];
	}
	media/=size;
	if (media >= 7.0) {situacao=0;} else if (media <= 3.0) {situacao=1;} else {situacao=2;}
	switch (situacao) {
		case 0: system("cls"); system("color F1"); printf("Aprovado!"); break;
		case 1: system("cls"); system("color F6"); printf("Recuperação."); break;
		case 2: system("cls"); system("color F4"); printf("Reprovado."); break;
		default: break;
	}
	getch();
	return 0;
}
