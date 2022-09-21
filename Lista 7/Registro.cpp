#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>

#define size 5

struct bd {
	char nome[40];
	char endereco[25];
	int idade;
	char telefone[10];
};
struct bd registro[size];

void registrar(), menu(), mostrar(int campo), menupesquisa(), nomepesquisa(char valor[]),
 	enderecopesquisa(char valor[]), telefonepesquisa(char valor[]), idadepesquisa(int idade), ordemalfa(), alterar();
int opcao, i, j, id, campo;
char resposta;

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0A");
	registrar();
	menu();
	getch();
}

void registrar() {
	setlocale(LC_ALL, "portuguese");
	for (i=0; i<size; ++i) {
		printf("Cadastrar Usu�rios \n\n");
		printf("%do. Usu�rio\n------------\n", i+1);
		printf("Nome: ");
		fflush(stdin); fgets(registro[i].nome, 40, stdin);
		printf("Idade: ");
		scanf("%d", &registro[i].idade);
		printf("Endere�o: ");
		fflush(stdin); fgets(registro[i].endereco, 25, stdin);
		printf("Telefone: ");
		fflush(stdin); fgets(registro[i].telefone, 10, stdin);
		system("cls");
	}
	system("cls");
}

void menu() {
	setlocale(LC_ALL, "portuguese");
	while (1) {
		printf("Programa Agenda\n\n"
		"	1. Cadastro e registros\n"
		"	2. Pesquisa de registro\n"
		"	3. Classifica��o alfab�tica\n"
		"	4. Altera��o de registro\n"
		"	5. Sair\n");
		printf("Op��o a ser Escolhida: "); scanf("%d", &opcao); printf("\n");
		if (opcao == 5) {break;}
		switch (opcao) {
			case 1:
				mostrar(0); system("cls"); break;
			case 2: 
				menupesquisa(); system("cls"); break;
			case 3:
				ordemalfa(); system("cls"); break;
			case 4:
				alterar(); system("cls"); break;
			default:
				break; 
		}
	}
}

void mostrar(int campo) {
	setlocale(LC_ALL, "portuguese");
	if (campo == 0){
		printf("Usu�rios Cadastrados\n\n");
		for (i = 0; i<size; ++i) {
			printf("--------------\n"
				   "%do. Usu�rio\n", i+1);
			printf("\nNome: %s", registro[i].nome);
			printf("Idade: %d", registro[i].idade);
			printf("\nEndere�o: %s", registro[i].endereco);
			printf("Telefone: %s", registro[i].telefone);
			printf("\n");
		}	
	} else {
		printf("--------------\n"
			   "%do. Usu�rio\n", i+1);
		printf("\nNome: %s", registro[campo-1].nome);
		printf("Idade: %d", registro[campo-1].idade);
		printf("\nEndere�o: %s", registro[campo-1].endereco);
		printf("Telefone: %s", registro[campo-1].telefone);
		printf("\n");
	}
	getch();
}

void menupesquisa() {
	setlocale(LC_ALL, "portuguese");
	char resposta = 's', nome[40], endereco[25], telefone[10];
	int idade;
	while (resposta == 's') {
		printf("Pesquisar por qual campo? \n"
			"	1. Nome\n"
			"	2. Idade\n"
			"	3. Endere�o\n"
			"	4. Telefone\n"
			"Campo: ");
		scanf("%d", &campo);
		switch (campo) {
		case 1:
			printf("\nDigite o nome a pesquisar: ");
			fflush(stdin); fgets(nome, 40, stdin);
			nomepesquisa(nome);
			break;
		case 2:
			printf("\nDigite a idade a pesquisar: ");
			scanf("%d", &idade);
			idadepesquisa(idade);
			break;
		case 3:
			printf("\nDigite o endere�o a pesquisar: ");
			fflush(stdin); fgets(endereco, 25, stdin);
			enderecopesquisa(endereco);
			break;
		case 4:
			printf("\nDigite o telefone a pesquisar: ");
			fflush(stdin); fgets(telefone, 10, stdin);
			telefonepesquisa(telefone);
			break;
		default:
			printf("Desculpe. Houve um erro de digita��o."
					"Por Favor, escolha uma das op��es apresentadas.");
			break;
		}
		printf("Deseja Continuar [s]? ");
		scanf("%c", &resposta);
		getch();
		system("cls");
	}
}

void nomepesquisa(char valor[]) {
	int c = 0;
	for (i=0; i<size; ++i) {
		if (strcmp(valor, registro[i].nome) == 0) {
			printf("Nome %s foi encontrado no %do. usu�rio.\n", valor, i+1); c = 1;
			mostrar(i+1);
		}
	}
	if (c == 0) {
		printf("%s n�o encontrado no registro.\n", valor);
	}
	getch();
}

void idadepesquisa(int idade) {
	int c = 0;
	for (i=0; i<size; ++i) {
		if (idade == registro[i].idade) {
			printf("Idade %d encontrada no %do. usu�rio.\n", idade, i+1); c = 1;
			mostrar(i+1);
		}
	}
	if (c == 0) {
		printf("Idade %d n�o encontrada no registro.\n", idade);
	}
	getch();
}

void enderecopesquisa(char valor[]) {
	int c = 0;
	for (i=0; i<size; ++i) {
		if (strcmp(valor, registro[i].endereco) == 0) {
			printf("Endere�o %s foi encontrado no %do. usu�rio.\n", valor, i+1); c = 1;
			mostrar(i+1);
		} 
	}
	if (c == 0) {
		printf("Endere�o %s n�o encontrado no registro.\n", valor);
	}
	getch();
}

void telefonepesquisa(char valor[]) {
	int c = 0;
	for (i=0; i<size; ++i) {
		if (strcmp(valor, registro[i].telefone) == 0) {
			printf("Telefone %s foi encontrado no %do. usu�rio.\n", valor, i+1); c = 1;
			mostrar(i+1);
		}
	}
	if (c == 0) {
		printf("Telefone %s n�o encontrado no registro.\n", valor);
	}
	getch();
}

void ordemalfa() {
	setlocale(LC_ALL, "portuguese");
	char nome[40], endereco[25], telefone[10];
	int idade;
	// Ordem Alfab�tica
	for (i=0; i<=size-2; ++i) {
		for (j=i+1; j<=size-1; ++j) {
			if (strcmp(registro[i].nome, registro[j].nome) > 0) {
				// Nome
				strcpy(nome, registro[i].nome);
				strcpy(registro[i].nome, registro[j].nome);
				strcpy(registro[j].nome, nome);
				// Idade
				idade = registro[i].idade;
				registro[i].idade = registro[j].idade;
				registro[j].idade = idade;
				// Endere�o
				strcpy(endereco, registro[i].endereco);
				strcpy(registro[i].endereco, registro[j].endereco);
				strcpy(registro[j].endereco, endereco);
				// Telefone
				strcpy(telefone, registro[i].telefone);
				strcpy(registro[i].telefone, registro[j].telefone);
				strcpy(registro[j].telefone, telefone);
			}
		}
	}
	mostrar(0);
}

void alterar() {
	setlocale(LC_ALL, "portuguese");
	char resposta='s', nome[40], endereco[25], telefone[10];
	int idade;
	mostrar(0);
	// Selecionar Usu�rio
	while (1) {
		printf("\nQual usu�rio deseja alterar? [id]: ");
		scanf("%d", &id);
		if (id >= 1 && id <= 5) {
			break;
		} else {
			printf("Usu�rio Inexistente."
				   "Total de Usu�rios: %d", sizeof(registro));
			getch();
			system("cls");
		}
	}
	// Alterar Campo
	while (resposta == 's') {
		printf("\nEm qual campo de registro? \n"
			   "  1. Nome\n"
			   "  2. idade\n"
			   "  3. endere�o\n"
			   "  4. telefone\n\n");
		printf("Registro: ");
		scanf("%d", &campo);
		switch (campo) {
			case 1:
				printf("Novo nome: ");
				fflush(stdin); fgets(nome, 40, stdin);
				strcpy(registro[id-1].nome, nome);
				break;
			case 2:
				printf("Nova idade: ");
				scanf("%d", &idade);
				registro[id-1].idade = idade;
				break;
			case 3:
				printf("Novo endere�o: ");
				fflush(stdin); fgets(endereco, 25, stdin);
				strcpy(registro[id-1].endereco, endereco);
				break;
			case 4:
				printf("Novo telefone: ");
				fflush(stdin); fgets(telefone, 10, stdin);
				strcpy(registro[id-1].telefone, telefone);
				break;
			default:
				printf("Desculpe. Houve um erro de digita��o."
					   "Por Favor, escolha uma das op��es apresentadas.");
				break;
		}
		printf("Deseja Continuar [s]? ");
		scanf("%c", &resposta);
		getch();
		system("cls");
	}
}
