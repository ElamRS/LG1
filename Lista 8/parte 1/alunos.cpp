#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#define num 2

struct alunos {
	char nome[40];
	float nota;
};
struct alunos aluno[num];

void controle(), cadastro(), classificar_alfa(), corrigir(), pesquisa_nome(), listar_aprov(), listar_reprov();

int main() {
	controle();
	return 0;
}

void controle() {
	setlocale(LC_ALL, "portuguese");
	system("color 0F");
	int escolha;
	while (1) {
		printf("Registro de Alunos\n\n");
		printf("\t1. Cadastrar os alunos e notas.\n"
			   "\t2. Classificar os alunos por ordem alfabética.\n"
			   "\t3. Corrigir alunos e/ou notas que tenham sido cadastradas com erros.\n"
			   "\t4. Pesquisar alunos por nome.\n"
			   "\t5. Listar alunos aprovados.\n"
			   "\t6. Listar alunos reprovados.\n"
			   "\t7. Sair.\n\n");
		printf("Escolha: "); fflush(stdin); scanf("%d", &escolha);
		// Switch
		switch (escolha) {
			case 1: cadastro(); break;
			case 2: classificar_alfa(); break;
			case 3: corrigir(); break;
			case 4: pesquisa_nome(); break;
			case 5: listar_aprov(); break;
			case 6: listar_reprov(); break;
			case 7: exit(0); break;
			default: break;
		}
	}
}

void cadastro() {
	for (int i=0; i<num; ++i) {
		printf("\n---------------\n");
		printf("Nome: "); fflush(stdin); fgets(aluno[i].nome, 40, stdin);
		printf("Nota: "); scanf("%f", &aluno[i].nota);
	}
	getch(); system("cls");
}

void classificar_alfa() {
	setlocale(LC_ALL, "portuguese");
	char aux_nome[40];
	float aux_nota;
	for (int i=0; i<=num-2; ++i) {
		for (int j=i+1; j<=num-1; ++j) {
			if (strcmp(aluno[i].nome, aluno[j].nome)>0) {
				// Nome
				strcpy(aux_nome, aluno[i].nome);
				strcpy(aluno[i].nome, aluno[j].nome);
				strcpy(aluno[j].nome, aux_nome);
				// Nota
				aux_nota = aluno[i].nota;
				aluno[i].nota = aluno[j].nota;
				aluno[j].nota = aux_nota;
			}
		}
	}
	printf("\nStruct organizado em ordem alfabética.\n");
	getch(); system("cls");
}

void pesquisa_nome() {
	char p_nome[40]; int c=0;
	printf("Nome a pesquisar: "); fflush(stdin); fgets(p_nome, 40, stdin);
	for (int i=0; i<num; ++i) {
		if (strcmp(p_nome, aluno[i].nome)==0) {
			c=1;
			printf("\nNome: %s", aluno[i].nome);
			printf("Nota: %.2f\n", aluno[i].nota);
		}
	}
	if (c==0) {printf("\nNome pesquisado não encontrado.");}
	getch(); system("cls");
}

void corrigir() {
	setlocale(LC_ALL, "portuguese");
	char p_nome[40], n_nome[40]; int pesq, c=0; float n_nota;
	printf("Atualizar informações de qual aluno? [nome]: "); fflush(stdin); fgets(p_nome, 40, stdin);
	for (int i=0; i<num; ++i) {
		if (strcmp(p_nome, aluno[i].nome)==0) {
			c=1;
			printf("\nNome: %s", aluno[i].nome);
			printf("Nota: %.2f\n", aluno[i].nota);
			// Campo
			printf("\n\t1. Nome.\n"
				   "\t2. Nota [.2].\n"
				   "\t3. Sair.\n");
			printf("Alterar campo: "); scanf("%d", &pesq);
			switch (pesq) {
				case 1:
					printf("Novo nome: "); fflush(stdin); fgets(n_nome, 40, stdin);
					strcpy(aluno[i].nome, n_nome);
					break;
				case 2:
					printf("Nova nota: "); scanf("%f", &n_nota);
					aluno[i].nota = n_nota;
					break;
				case 3:
					exit(0);
					break;
				default:
					break;
			}
		}
	}
	if (c==0) {printf("\nNome pesquisado não encontrado.");}
	getch(); system("cls");
}

void listar_aprov() {
	printf("Alunos Aprovados: \n");
	for (int i=0; i<num; ++i) {
		if (aluno[i].nota>=7.00) {
			printf("\nNome: %s", aluno[i].nome);
			printf("Idade: %.2f\n", aluno[i].nota);
		}
	}
	getch(); system("cls");
}

void listar_reprov() {
	printf("Alunos Reprovados: \n");
	for (int i=0; i<num; ++i) {
		if (aluno[i].nota<7.00) {
			printf("\nNome: %s", aluno[i].nome);
			printf("Idade: %.2f\n", aluno[i].nota);
		}
	}
	getch(); system("cls");
}
