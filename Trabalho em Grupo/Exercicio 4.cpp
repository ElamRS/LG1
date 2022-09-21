#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

#define max 100

// Variáveis Globais
int total, partida, tot_partida, k = 0, partidas[max];

int grid[4][3];
int alfa[] = {0, 0, 2, 0, 0, 0, 0, 0, 2, 2, 2, 3};
// alfa[x] = 0 --> controle virado para a Esquerda
// alfa[x] = 1 --> controle virado para a Direita
// alfa[x] = 2 --> sem controle
// alfa[x] = 3 --> espaço vazio

void caminho(char direction, int i, int j), ponto_partida();

int main() {
	setlocale(LC_ALL, "portuguese");
	system("color 0F");
	int c, x;
	char resp='s';
	
	// adicionar valores de alfa[x] na matriz grid[i][j] em ordem correta 
	for (int i=0; i<4; ++i) {
		for (int j=0; j<3; ++j) {
			grid[i][j] = alfa[c];
			c++;
		}
	}
	
	while (resp=='s') {
		for (int i=0; i<5; ++i) {
			while (1) {
				printf("Em qual entrada depositar? [0 - 1 - 2]: ");
				scanf("%d", &x);
				if (x >= 0 && x <=2) {break;} else {printf("\tEntrada Inválida. Tente Novamente!\n");}
			}	
			switch (x) {
				// Entrada 0
				case 0:
					caminho('O', 2, 0);
					break;
				// Entrada 1
				case 1:
					caminho('O', 1, 0);
					break;
				// Entrada 2
				case 2:
					caminho('O', 0, 0);
					break;
				default:
					break;
			}
		}
		++k;
		++partida;
		printf("\nDeseja jogar mais uma Rodada? [s]: "); scanf(" %c", &resp);
		system("cls");
	}
	
	printf("\nTotal de Pontos: %d", total);
	printf("\nTotal de Partidas: %d", partida);
	printf("\nPontos por Partida: ");
	for (int i=0; i<partida; ++i) {
		printf("\n\t%da. Partida: %d pontos", i+1, partidas[i]);
	}
	getch();

	return 0;
}


void caminho(char direction, int i, int j) {
	// Posição (0, 0)
	if (i==0 && j==0) {
			if (direction=='O') {
				if (grid[i][j]==0) {
					caminho('O', 0, 1);
					grid[i][j] = 1;
				} else if (grid[i][j]==1) {
					caminho('N', 1, 0);
					grid[i][j] = 0;
			} else if (direction=='L') {
				if (grid[i][j]==0) {
					caminho('N', 1, 0);
					grid[i][j] = 1;
				} else if (grid[i][j]==1) {
					caminho('N', 1, 0);
					grid[i][j] = 0;
				}
			} else if (direction=='S') {
				if (grid[i][j]==0) {
					caminho('O', 0, 1);
					grid[i][j] = 1;	
				} else if (grid[i][j]==1) {
					caminho('O', 0, 1);
					grid[i][j] = 0;
				}
			}
		}
	}
	// Posição (0, 1)
	if (i==0 && j==1) {
		if (direction=='O') {
			if (grid[i][j]==0) {
				caminho('O', 0, 2);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('N', 1, 1);
				grid[i][j] = 0;	
			}
		} else if (direction=='L') {
			if (grid[i][j]==0) {
				caminho('N', 1, 1);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('L', 0, 0);
				grid[i][j] = 0;	
			}
		} else if (direction=='S') {
			if (grid[i][j]==0) {
				caminho('L', 0, 0);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('O', 0, 2);
				grid[i][j] = 0;
			}
		}
	}
	// Posição (0, 2)
	if (i==0 && j==2) {
		if (direction=='O') {
			caminho('N', 1, 2);
		}  else if (direction=='S') {
			caminho('L', 0, 1);
		}
	}
	
	// Posição (1, 0)
	if (i==1 && j==0) {
		if (direction=='O') {
			if (grid[i][j]==0) {
				caminho('S', 0, 0);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('N', 2, 0);
				grid[i][j] = 0;
			}
		} else if (direction=='L') {
			if (grid[i][j]==0) {
				caminho('N', 2, 0);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('S', 0, 0);
				grid[i][j] = 0;
			}
		} else if (direction=='N') {
			if (grid[i][j]==0) {
				caminho('O', 1, 1);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('N', 2, 0);
				grid[i][j] = 0;
			}
		} else if (direction=='S') {
			if (grid[i][j]==0) {
				caminho('S', 0, 0);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('O', 1, 1);
				grid[i][j] = 0;
			}
		}
	}
	// Posição (1, 1)
	if (i==1 && j==1) {
		if (direction=='O') {
			if (grid[i][j]==0) {
				caminho('S', 0, 1);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('N', 2, 1);
				grid[i][j] = 0;
			}
		} else if (direction=='L') {
			if (grid[i][j]==0) {
				caminho('N', 2, 1);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('S', 0, 1);
				grid[i][j] = 0;
			}
		} else if (direction=='N') {
			if (grid[i][j]==0) {
				caminho('O', 1, 2);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('L', 1, 0);
				grid[i][j] = 0;
			}
		} else if (direction=='S') {
			if (grid[i][j]==0) {
				caminho('L', 1, 0);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('O', 1, 2);
				grid[i][j] = 0;
			}
		}
	}
	// Posição (1, 2)
	if (i==1 && j==2) {
		if (direction=='O') {
			if (grid[i][j]==0) {
				caminho('S', 0, 2);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('N', 2, 2);
				grid[i][j] = 0;
			}
		} else if (direction=='N') {
			if (grid[i][j]==0) {
				total+=30;
				tot_partida+=30;
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('L', 1, 1);
				grid[i][j] = 0;
			}
		} else if (direction=='S') {
			if (grid[i][j]==0) {
				caminho('L', 1, 1);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				total+=30;
				tot_partida+=30;
				grid[i][j] = 0;
			}
		}
	}
	
	
	// Posição (2, 0)
	if (i==2 && j==0) {
		if (direction=='O') {
			if (grid[i][j]==0) {
				caminho('S', 1, 0);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('N', 3, 0);
				grid[i][j] = 0;
			}
		} else if (direction=='L') {
			if (grid[i][j]==0) {
				caminho('N', 3, 0);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('S', 1, 0);
				grid[i][j] = 0;
			}
		} else if (direction=='N') {
			if (grid[i][j]==0) {
				caminho('O', 2, 1);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('N', 3, 0);
				grid[i][j] = 0;
			}
		} else if (direction=='S') {
			if (grid[i][j]==0) {
				caminho('S', 1, 0);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('O', 2, 1);
				grid[i][j] = 0;
			}
		}
	}
	// Posição (2, 1)
	if (i==2 && j==1) {
		if (direction=='O') {
			if (grid[i][j]==0) {
				caminho('S', 1, 1);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('N', 3, 1);
				grid[i][j] = 0;
			}
		} else if (direction=='L') {
			if (grid[i][j]==0) {
				caminho('N', 3, 1);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('S', 1, 1);
				grid[i][j] = 0;
			}
		} else if (direction=='N') {
			if (grid[i][j]==0) {
				caminho('O', 2, 2);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('L', 2, 0);
				grid[i][j] = 0;
			}
		} else if (direction=='S') {
			if (grid[i][j]==0) {
				caminho('L', 2, 0);
				grid[i][j] = 1;
			} else if (grid[i][j]==1) {
				caminho('O', 2, 2);
				grid[i][j] = 0;
			}
		}
	}
	// Posição (2, 2)
	if (i==2 && j==2) {
		total+=20;
		tot_partida+=20;
	}
	
	// Posição (3, 0)
	if (i==3 && j==0) {
		if (direction=='L') {
			caminho('S', 2, 0);
		} else if (direction=='N') {
			caminho('O', 3, 1);
		}
	}
	// Posição (3, 1)
	if (i==3 && j==1) {
		total+=10;
		tot_partida+=10;
	}
	// Posição (3, 2)
	if (i==3 && j==2) {
		// Inexistente
	}
	
	partidas[k] += tot_partida;
	tot_partida = 0;
}
