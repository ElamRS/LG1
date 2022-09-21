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
		printf("Cadastrar Usuários \n\n");
		printf("%do. Usuário\n------------\n", i+1);
		printf("Nome: ");
		fflush(stdin); fgets(registro[i].nome, 40, stdin);
		printf("Idade: ");
		scanf("%d", &registro[i].idade);
		printf("Endereço: ");
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
		"	3. Classificação alfabética\n"
		"	4. Alteração de registro\n"
		"	5. Sair\n");
		printf("Opção a ser Escolhida: "); scanf("%d", &opcao); printf("\n");
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
		printf("Usuários Cadastrados\n\n");
		for (i = 0; i<size; ++i) {
			printf("--------------\n"
				   "%do. Usuário\n", i+1);
			printf("\nNome: %s", registro[i].nome);
			printf("Idade: %d", registro[i].idade);
			printf("\nEndereço: %s", registro[i].endereco);
			printf("Telefone: %s", registro[i].telefone);
			printf("\n");
		}	
	} else {
		printf("--------------\n"
			   "%do. Usuário\n", i+1);
		printf("\nNome: %s", registro[campo-1].nome);
		printf("Idade: %d", registro[campo-1].idade);
		printf("\nEndereço: %s", registro[campo-1].endereco);
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
			"	3. Endereço\n"
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
			printf("\nDigite o endereço a pesquisar: ");
			fflush(stdin); fgets(endereco, 25, stdin);
			enderecopesquisa(endereco);
			break;
		case 4:
			printf("\nDigite o telefone a pesquisar: ");
			fflush(stdin); fgets(telefone, 10, stdin);
			telefonepesquisa(telefone);
			break;
		default:
			printf("Desculpe. Houve um erro de digitação."
					"Por Favor, escolha uma das opções apresentadas.");
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
			printf("Nome %s foi encontrado no %do. usuário.\n", valor, i+1); c = 1;
			mostrar(i+1);
		}
	}
	if (c == 0) {
		printf("%s não encontrado no registro.\n", valor);
	}
	getch();
}

void idadepesquisa(int idade) {
	int c = 0;
	for (i=0; i<size; ++i) {
		if (idade == registro[i].idade) {
			printf("Idade %d encontrada no %do. usuário.\n", idade, i+1); c = 1;
			mostrar(i+1);
		}
	}
	if (c == 0) {
		printf("Idade %d não encontrada no registro.\n", idade);
	}
	getch();
}

void enderecopesquisa(char valor[]) {
	int c = 0;
	for (i=0; i<size; ++i) {
		if (strcmp(valor, registro[i].endereco) == 0) {
			printf("Endereço %s foi encontrado no %do. usuário.\n", valor, i+1); c = 1;
			mostrar(i+1);
		} 
	}
	if (c == 0) {
		printf("Endereço %s não encontrado no registro.\n", valor);
	}
	getch();
}

void telefonepesquisa(char valor[]) {
	int c = 0;
	for (i=0; i<size; ++i) {
		if (strcmp(valor, registro[i].telefone) == 0) {
			printf("Telefone %s foi encontrado no %do. usuário.\n", valor, i+1); c = 1;
			mostrar(i+1);
		}
	}
	if (c == 0) {
		printf("Telefone %s não encontrado no registro.\n", valor);
	}
	getch();
}

void ordemalfa() {
	setlocale(LC_ALL, "portuguese");
	char nome[40], endereco[25], telefone[10];
	int idade;
	// Ordem Alfabética
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
				// Endereço
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
	// Selecionar Usuário
	while (1) {
		printf("\nQual usuário deseja alterar? [id]: ");
		scanf("%d", &id);
		if (id >= 1 && id <= 5) {
			break;
		} else {
			printf("Usuário Inexistente."
				   "Total de Usuários: %d", sizeof(registro));
			getch();
			system("cls");
		}
	}
	// Alterar Campo
	while (resposta == 's') {
		printf("\nEm qual campo de registro? \n"
			   "  1. Nome\n"
			   "  2. idade\n"
			   "  3. endereço\n"
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
				printf("Novo endereço: ");
				fflush(stdin); fgets(endereco, 25, stdin);
				strcpy(registro[id-1].endereco, endereco);
				break;
			case 4:
				printf("Novo telefone: ");
				fflush(stdin); fgets(telefone, 10, stdin);
				strcpy(registro[id-1].telefone, telefone);
				break;
			default:
				printf("Desculpe. Houve um erro de digitação."
					   "Por Favor, escolha uma das opções apresentadas.");
				break;
		}
		printf("Deseja Continuar [s]? ");
		scanf("%c", &resposta);
		getch();
		system("cls");
	}
}
