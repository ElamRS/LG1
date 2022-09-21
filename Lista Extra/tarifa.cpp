#include <stdio.h>
#include <conio.h>
#include <iostream>
	/* 1) entrar com saldo
	
	   2) calcular tarifa com base no saldo
	   
	   3) A tarifa � reduzida em 20% se o cliente possui saldo R$1.000,00; � reduzida 
	      adicionalmente em 30% se possuir saldo R$5.000,00; 
		  ca� em mais 25% se possuir R$3.000,00 
	*/
float tarif(float saldo, float tarifa) {
	if (saldo >= 5000.00) {
		tarifa-=30.00;
		if (tarifa < 0) {tarifa=0.00;}
	} else if (saldo >= 3000.00) {
		tarifa-=25.00;
		if (tarifa < 0) {tarifa=0.00;}
	} else if (saldo >= 1000.00) {
		tarifa-=20.00;
		if (tarifa < 0) {tarifa=0.00;}
	}
	return tarifa;
}

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0A");
	// Vari�veis
	float saldo, tarifa;
	// Menu
	printf("|| REAJUSTE DE TARIFA BANC�RIA ||\n");
	printf("\nEntre com o Saldo Banc�rio: R$ ");  scanf("%f", &saldo);
	printf("Entre com a Tarifa Atual: %%");  scanf("%f", &tarifa);
	
	tarifa = tarif(saldo, tarifa);
	printf("\nNova Tarifa Banc�ria: %%%.2f", tarifa);
	getch();
	return 0;
}
