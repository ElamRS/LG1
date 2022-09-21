#include <stdio.h>
#include <conio.h>
#include <iostream>

int pesquisa(int aluno); // Protótipo
// Variáveis
float Notas[40];
int aluno, i, j, aux;
char decis;

int main() {
	system("color 0A");
	// Ler Notas
	printf("Notas: \n");
	for (i=0; i<40; ++i) {
		printf("  Nota do %do Aluno: ", i+1);
		scanf("%f", &Notas[i]);
	}
	system("cls");
	// Ordenar Notas
	for (i=0; i<=38; ++i) {
		for (j=i+1; j<=39; ++j) {
			if (Notas[i] > Notas[j]) {
				aux = Notas[j];
				Notas[j] = Notas[i];
				Notas[i] = aux;
			}
		}
	}
	// Menu de Pesquisa
	while(1) {
		printf("Pesquisar nota de um aluno? [s]: ");
		scanf("%s", &decis);
		if (decis != 's') {
			break;
		}
		printf("Qual aluno pesquisar a nota [1 a 40]? ");
		scanf("%d", &aluno);
		pesquisa(aluno-1);
		getch();
		system("cls");
	}
	getch();
}

// Pesquisa de Notas de Aluno
int pesquisa(int aluno) {
	if ((aluno < 0) || (aluno > 39)) {
		printf("Aluno nao Encontrado. Tente Novamente!");
	} else {
		printf("Nota do %do Aluno: %.2f", aluno, Notas[aluno+1]);
	}
}
