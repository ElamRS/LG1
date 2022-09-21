/*
	Fazer um algoritmo que: 
	a) leia um conjunto de valores inteiros correspondente a 80 notas dos 
	alunos de uma turma (as notas variam de 0 a 10).
	 
	b) calcule a freqüência absoluta e a freqüência relativa de cada nota.
	 
	c) imprima uma tabela contendo os valores das notas (de 0 a 10) e suas 
	respectivas freqüências, absoluta e relativa. 
	
	Obs.: 1 - Freqüência absoluta de uma nota é o número de vezes em que 
	ela aparece no conjunto de dados. 
	
	2 - Freqüência relativa é a freqüência absoluta dividida pelo número total de dados.
 

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int notas[80], freq_abso[10];
float freq_rela[10];

int main(void) {
	// Ler as Notas
	for (int i=0; i<80; i++) {
		printf("%do. Nota: \n", i+1); 
		fflush(stdin); scanf("%d", &notas[i]);
	}
	
	// Identificar a frequencia absoluta
	
		// a frequencia absoluta vai ser armazenada nessa matriz, e tipo, o freq_abso[0] vai 
		// armazenar a qtd de vezes que o 1 apareceu nas notas e assim por diante
			
	for (int i=0; i<80; i++) {
		switch (notas[i]) {
			case 1: freq_abso[0]++; break;
			case 2: freq_abso[1]++; break;
			case 3: freq_abso[2]++; break;
			case 4: freq_abso[3]++; break;
			case 5: freq_abso[4]++; break;
			case 6: freq_abso[5]++; break;
			case 7: freq_abso[6]++; break;
			case 8: freq_abso[7]++; break;
			case 9: freq_abso[8]++; break;
			case 10: freq_abso[9]++; break;
			default: break;
		}
	}
	
	// Identificar a frequencia relativa
	for (int i=0; i<10; i++) {
		freq_rela[i] = ((float) freq_abso[i] / 80)*100;
	}
	printf("\n");
	// Exibir a tabela
	for (int i=0; i<10; i++) {
		printf("%d: frequencia absoluta = %d; frequencia relativa = %.2f %\n", i+1, freq_abso[i], freq_rela[i]);
	}
	
	return 0;
}
