#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

int soma, matriz[6][6];

int soma_1(), soma_2(), soma_3(), soma_4(), soma_5(), soma_6(), soma_7(), soma_8();

int main(void) {
	setlocale(LC_ALL, "portuguese");
	int opc;
	char resp='s';
	
	// Adicionar valores aleatórios a matriz 6x6
	for (int i=0; i<6; i++) {
		for (int j=0; j<6; ++j) {
			matriz[i][j] = rand() % 10; // valor random de 0 a 10
		}
	}
	
	while (resp=='s') {
		// Exibir ao usuário os valores da matriz 6x6, para fins de comparação com o resultado final
		for (int i=0; i<6; i++) {
			printf("\t\t\t\t");
			for (int j=0; j<6; j++) {
				printf("%d ", matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	
		// Menu de opções de soma
		printf(     "1)  0 # # # # #"      "  2)  # # # # # 0" 	       "    3)   0 # # # # 0" 	"  4)  0 0 0 0 0 0\n"
		      	"    0 0 # # # #" 	   "\t     # # # # 0 0" 	       "\t 0 0 # # 0 0" 		"\t  # 0 0 0 0 0\n"
		      	"    0 0 0 # # #" 	   "\t     # # # 0 0 0" 	       "\t 0 0 0 0 0 0" 		"\t  # # 0 0 0 0\n"
		      	"    0 0 0 0 # #" 	   "\t     # # 0 0 0 0" 	       "\t 0 0 0 0 0 0" 		"\t  # # 0 0 0 0\n"
		      	"    0 0 0 0 0 #" 	   "\t     # 0 0 0 0 0" 	       "\t 0 0 0 0 0 0" 		"\t  # 0 0 0 0 0\n"
		      	"    0 0 0 0 0 0" 	   "\t     0 0 0 0 0 0" 	       "\t 0 0 0 0 0 0" 		"\t  0 0 0 0 0 0\n\n"
				  
				"5)  0 0 0 0 0 0"       "\t 6)  0 # # # # 0"     "    7)   0 # # # # 0"   "   8) 0 0 0 0 0 0\n"
				"    # 0 0 0 0 #"     "\t     0 0 # # 0 0"   "         # 0 # # 0 0"  "      # 0 0 0 0 0\n"
				"    # # 0 0 # #"     "\t     0 0 0 0 0 0"   "         # # 0 0 0 0"  "      # # 0 0 0 0\n"
				"    # # 0 0 # #"     "\t     0 0 0 0 0 0"   "         # # 0 0 0 0"  "      # # 0 0 0 0\n"
				"    # 0 0 0 0 #"     "\t     0 0 # # 0 0"   "         # 0 0 0 0 0"  "      # 0 # # 0 0\n"
				"    0 0 0 0 0 0"     "\t     0 # # # # 0"   "         0 0 0 0 0 0"  "      0 # # # # 0\n\n");
		// ler opção do usuário
		printf("Opção de Soma: "); scanf("%d", &opc);
		// Switch de Controle
		switch (opc) {
			case 1: printf("A soma total da opção 1 é: %d", soma_1()); break;
			case 2: printf("A soma total da opção 2 é: %d", soma_2()); break;
			case 3: printf("A soma total da opção 3 é: %d", soma_3()); break;
			case 4: printf("A soma total da opção 4 é: %d", soma_4()); break;
			case 5: printf("A soma total da opção 5 é: %d", soma_5()); break;
			case 6: printf("A soma total da opção 6 é: %d", soma_6()); break;
			case 7: printf("A soma total da opção 7 é: %d", soma_7()); break;
			case 8: printf("A soma total da opção 8 é: %d", soma_8()); break;
			default:
				printf("Opção Inválida. Tente Novamente.");
				break;
		}
		getch(); // segurar a tela
		soma = 0; // zerar a soma para caso o usuário queira executar novamente
		printf("\nDeseja continuar somando o array? [s]: "); fflush(stdin); scanf("%c", &resp);
		system("cls"); // Limpar a tela para exibir o menu novamente
	}
	getch();
	return (0);
}

int soma_1() {
	for (int i=0; i<=4; i++) {
		for (int j=i+1; j<=5; j++) {
			soma += matriz[i][j];
		}
	}
	return soma;
}

int soma_2() {
	for (int i=0; i<=4; i++) {
		for (int j=0; j<=4-i; j++) {
			soma += matriz[i][j];
		}
	}
	return soma;
}

int soma_3() {
	for (int i=0; i<=1; i++) {
		for (int j=i+1; j<=4-i; j++) {
			soma += matriz[i][j];
		}
	}
	return soma;
}

int soma_4() {
	int k;
	for (int i=1; i<=4; i++) {
		if (i==1 || i==4) {
			k = 0;
		} else {
			k = 1;
		}
		for (int j=0; j<=k; j++) {
			soma += matriz[i][j];
		}
	}
	return soma;
}

int soma_5() {
	// Somar Secção da esquerda
	int k;
	for (int i=1; i<=4; i++) {
		if (i==1 || i==4) {
			k = 0;
		} else {
			k = 1;
		}
		for (int j=0; j<=k; j++) {
			soma += matriz[i][j];
		}
	}
	
	// Somar Secção da direita
	for (int i=1; i<=4; i++) {
	    if (i==1 || i==4) {
	        for (int j=5; j<=5; j++) {
	            soma += matriz[i][j];
	        }
	    } else {
	        for (int j=4; j<=5; j++) {
	            soma += matriz[i][j];
	        }
    	}
	}
	return soma;
}

int soma_6() {
	// Somar parte Norte
	for (int i=0; i<=1; i++) {
		for (int j=i+1; j<=4-i; j++) {
			soma += matriz[i][j];
		}
	}
	
	// Somar parte Sul
	for (int i=4; i<=5; i++) {
		if (i==4) {
			for (int j=2; j<=3; j++) {
				soma += matriz[i][j];
			}	
		} else {
			for (int j=1; j<=4; j++) {
				soma += matriz[i][j];
			}
		}
	}
	return soma;
}

int soma_7() {
	for (int i=0; i<=4; i++) {
		for (int j=0; j<=4-i; j++) {
			if (i!=j) {
				soma += matriz[i][j];
			}
		}
	}
	return soma;
}

int soma_8() {
	for (int i=0; i<=5; i++) {
		for (int j=0; j<=i-1; j++) {
			if (!((i==5 && j==0) || (i==4 && j==1) || (i==3 && j==2))) {
				soma += matriz[i][j];
			}
		}
	}
	return soma;
}

