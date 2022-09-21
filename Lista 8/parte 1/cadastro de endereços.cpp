#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <ctype.h>

#define num 2
#define tudo 5

struct pe {
	char nome[40];
	char endereco[40];
	char email[30];
	char telefone[30];
};
struct pe pessoa[num];

void menu(), cadastro(), pesquisa(), classificar(), corrigir(), remover(), mostrar(int id);

int main() {
	system("color 0F");
	menu();
	getch();
	return 0;
}

void menu() {
	setlocale(LC_ALL, "portuguese");
	int resp;
	while (1) {
		printf("Registro de Pessoas\n\n"
		"\t1. Cadastrar Indivíduos pela Primeira Vez\n"
		"\t2. Pesquisa por Nome\n"
		"\t3. Classificar por Ordem Alfabética\n"
		"\t4. Alteração de Registro Incorreto\n"
		"\t5. Remover Registro\n"
		"\t6. Sair\n");
		printf("\nEscolha: "); scanf("%d", &resp);
		
		switch (resp) {
			case 1: cadastro(); break;
			case 2: pesquisa(); break;
			case 3: classificar(); break;
			case 4: corrigir(); break;
			case 5: remover(); break;
			case 6: exit(0); break; 
			default: break;
		}
	}
}

void cadastro() {
	setlocale(LC_ALL, "portuguese");
	int i, k;
	printf("----------------------------\n"
		   "Cadastrar Pessoas no Sistema\n"
		   "----------------------------\n");
	for (i=0, k=i+1; i<num; ++i, ++k) {
		printf("\n%da Pessoa\n----------\n", k);
		printf("Nome: "); fflush(stdin); fgets(pessoa[i].nome, 40, stdin);
		printf("Endereço: "); fflush(stdin); fgets(pessoa[i].endereco, 40, stdin);
		printf("E-mail: "); fflush(stdin); fgets(pessoa[i].email, 30, stdin);
		printf("Telefone: "); fflush(stdin); fgets(pessoa[i].telefone, 30, stdin);
	}
	system("cls");
}

void pesquisa() {
	int i, k, c=0;
	char nome[40];
	printf("Nome a pesquisar: "); fflush(stdin); fgets(nome, 40, stdin);
	for (int i=0; i<num; ++i) {
		if (strcmp(nome, pessoa[i].nome)==0) {
			mostrar(i); c=1;
		}
	}
	if (c==0) {printf("Pessoa chamada %s não encontrada.", nome);}
	getch();
	system("cls");
}

void classificar() {
	char temp[40];
	for (int i=0; i<=num-2; ++i) {
		for (int k=i+1; i<=num-1; ++i) {
			if(strcmp(pessoa[i].nome, pessoa[k].nome) > 0) {
				// Nome
				strcpy(temp, pessoa[i].nome);
				strcpy(pessoa[i].nome, pessoa[k].nome);
				strcpy(pessoa[k].nome, temp);
				// Endereço
				strcpy(temp, pessoa[i].endereco);
				strcpy(pessoa[i].endereco, pessoa[k].endereco);
				strcpy(pessoa[k].endereco, temp);
				// E-mail
				strcpy(temp, pessoa[i].email);
				strcpy(pessoa[i].email, pessoa[k].email);
				strcpy(pessoa[k].email, temp);
				// Telefone
				strcpy(temp, pessoa[i].telefone);
				strcpy(pessoa[i].telefone, pessoa[k].telefone);
				strcpy(pessoa[k].telefone, temp);
			}
		}
	}
	printf("\nRegistro organizado por ordem alfabética.\n");
	getch(); system("cls");
}

void corrigir() {
	setlocale(LC_ALL, "portuguese");
	char n_nome[40], n_endereco[40], n_email[30], n_telefone[30];
	int campo, j=0;
	mostrar(tudo);
	printf("\nCorrigir qual dos registros acima? [nome]: ");
	fflush(stdin); fgets(n_nome, 40, stdin); system("cls");
	for (int i=0; i<num; ++i) {
		if (strcmp(pessoa[i].nome, n_nome)==0) {
			j=1;
			mostrar(i);
			printf("\t1. Nome \t2. Endereço\n"
				   "\t3. E-mail \t4. Telefone"
				   "\t5. Sair"
				   
				   "\n\nEscolha: "); scanf("%d", &campo);
			switch (campo) {
				case 1:
					printf("\nNovo nome: "); fflush(stdin); fgets(n_nome, 40, stdin);
					strcpy(pessoa[i].nome, n_nome);
					break;
				case 2:
					printf("\nNovo Endereço: "); fflush(stdin); fgets(n_endereco, 40, stdin);
					strcpy(pessoa[i].endereco, n_endereco);
					break;
				case 3:
					printf("\nNovo E-mail: "); fflush(stdin); fgets(n_email, 30, stdin);
					strcpy(pessoa[i].email, n_email);
					break;
				case 4:
					printf("\nNovo Telefone: "); fflush(stdin); fgets(n_telefone, 30, stdin);
					strcpy(pessoa[i].telefone, n_telefone);
					break;
				case 5:
					break;
				default:
					break;
			}
		}
		if (j==1) {system("cls"); break;}
	}
}

void remover() {
	char nome[40], limpo[] = {""};
	mostrar(tudo);
	getch();
	printf("Qual Registro deseja Apagar? [nome]: ");
	fflush(stdin); fgets(nome, 40, stdin);
	for (int i=0; i<num; ++i) {
		if (strcmp(pessoa[i].nome, nome)==0) {
			strcpy(pessoa[i].nome, limpo);
			strcpy(pessoa[i].endereco, limpo);
			strcpy(pessoa[i].email, limpo);
			strcpy(pessoa[i].telefone, limpo);
		}
	}
}

void mostrar(int i) {
	setlocale(LC_ALL, "portuguese");
	// tudo (tudo=5) representa mostrar todos os registros, pois o struct pessoa vai de 0 até 4
	if (i==tudo) {
		for (int k=0; k<num; ++k) {
			printf("\n\nNome: %s", pessoa[k].nome);
			printf("Endereço: %s", pessoa[k].endereco);
			printf("E-mail: %s", pessoa[k].email);
			printf("Telefone: %s", pessoa[k].telefone);
			printf("\n");	
		}
	} else {
		printf("\n\nNome: %s", pessoa[i].nome);
		printf("Endereço: %s", pessoa[i].endereco);
		printf("E-mail: %s", pessoa[i].email);
		printf("Telefone: %s", pessoa[i].telefone);
		getch();
		printf("\n");
	}
}
