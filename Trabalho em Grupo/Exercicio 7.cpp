/*  Desenvolver um algoritmo que controle as idades de 50 administrativos 
	de uma escola e que efetue a exibição dos aposentados e ativos.
    O algoritmo em questão deverá executar as seguintes rotinas:
    
	a-cadastrar os 50 administrativos e suas idades
	b-classificar os administrativos cadastrados
	c-corrigir administrativos e/ou idades que tenham sido cadastrados com erros
	d-pesquisar administrativos por nome e por idade
	e-listar administrativos aposentados (>=60 anos)
	f-listar administrativos ativos. 
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

// struct administrativos
struct administrativo {
	char nome[40];
	int idade;
};
struct administrativo admin[50];

void controle(), cadastrar(), corrigir(), pesquisar(), listar_apo(), listar_ativ();

int main() {
	setlocale(LC_ALL, "portuguese");  
	system("color 0F");  // adicionar cor ao programa
	controle();
	getch();
	return 0;
}

// função para apresentar as opções ao usuário
void controle() {
	char resp;
	while (1) {
		printf("| GERENCIADOR DE ADMINISTRATIVOS |\n\n"
			   "\ta - cadastro de administrativos.\n"
			   "\tb - corrigir nome e/ou idades que tenham sido cadastrados com erro.\n"
			   "\tc - pesquisar administrativos por nome e por idade.\n"
			   "\td - listar administrativos aposentados.\n"
			   "\te - listar administrativos ativos.\n"
			   "\tf - sair\n\n");
		printf("Escolha: ");  scanf("%c", &resp);
		system("cls");
		switch (resp) {
			case 'a': cadastrar();	break;
			case 'b': corrigir();	break;
			case 'c': pesquisar();	break;
			case 'd': listar_apo();	break;
			case 'e': listar_ativ();  break;
			case 'f': printf("Programa encerrado.\n\n"); exit(0); break;
			default: break;
		}
	}
}

void cadastrar() {
	printf("| CADASTRO |\n");
	for (int i=0; i<50; ++i) {
		printf("\n------------------"
			   "\n%do. administrador", i+1);
		printf("\nNome: "); fflush(stdin); fgets(admin[i].nome, 40, stdin);
		printf("Idade: "); scanf("%d", &admin[i].idade); 
	}
	system("cls");
}

void corrigir() {
	int escolha, idade, f=0;  // a variável f indica se o administrativo foi encontrado [0 - não, 1 - sim]
	char nome_p[40], nome_n[40];
	
	printf("Atualizar informações de qual administrativo? [nome]: "); fflush(stdin); fgets(nome_p, 40, stdin);
	for (int i=0; i<50; ++i) {
		if (strcmp(nome_p, admin[i].nome)==0) {
			printf("\nNome: %s", admin[i].nome);
			printf("Idade: %d\n\n", admin[i].idade); f=1;
			
			printf("1. Nome\n"
		   		   "2. Idade\n\n");
			printf("Qual campo corrigir? "); scanf("%d", &escolha);
			switch (escolha) {
				case 1:
					printf("\nNovo nome: "); fflush(stdin); fgets(nome_n, 40, stdin);
					strcpy(admin[i].nome, nome_n);
					break;
				case 2:
					printf("\nNova idade: "); scanf("%d", &idade);
					admin[i].idade = idade;
					break;
			}
		}
	}
	if (f==0) {printf("O nome do servidor não está cadastrado."); exit(0);}
	getch();
	system("cls");
}

void pesquisar() {
	setlocale(LC_ALL, "portuguese");
	int escolha, idade, f=0;
	char nome_p[40];
	printf("| PESQUISA |\n"
		   "\t1. Nome\n"
		   "\t2. Idade\n"
		   "\t3. Desistir\n");
	printf("Opção: "); scanf("%d", &escolha);
	switch (escolha) {
		case 1: 
			printf("\nNome a ser pesquisado: ");
			fflush(stdin); fgets(nome_p, 40, stdin);
			for (int i=0; i<50; ++i) {
				if (strcmp(nome_p, admin[i].nome)==0) {
					printf("\nNome: %s", admin[i].nome);
					printf("Idade: %d\n", admin[i].idade); f=1;
				}
			}
			break;
		case 2:
			printf("\nIdade a ser pesquisada: "); scanf("%d", &idade);
			for (int i=0; i<50; ++i) {
				if (idade==admin[i].idade) {
					printf("\nNome: %s", admin[i].nome);
					printf("Idade: %d\n", admin[i].idade); f=1;
				}
			}
			break;
		case 3:		
			printf("\nSaindo...");
			break;
		default:
			break;
	}
	if (f==0) {printf("Nome / Idade não encontrada."); exit(0);}
	getch();
	system("cls");
}

void listar_apo() {
	printf("Servidores Aposentados: \n\n");
	for (int i=0; i<50; ++i) {
		if (admin[i].idade>=60) {
			printf("\nNome: %s", admin[i].nome);
			printf("Idade: %d\n", admin[i].idade);
		}
	}
	getch();
	system("cls");
}

void listar_ativ() {
	printf("Servidores Ativos: \n\n");
	for (int i=0; i<50; ++i) {
		if (admin[i].idade<60) {
			printf("\nNome: %s", admin[i].nome);
			printf("Idade: %d\n", admin[i].idade);
		}
	}
	getch();
	system("cls");
}
