/*Elabore um algoritmo que utilize um array (matriz 1D) para ler 10 elementos em
uma matriz A tipo vetor. 
Criar uma matriz B de mesma dimensão, sendo que cada
elemento da matriz B seja o dobro do elemento correspondente da matriz A. 
Exibir os elementos da matriz B ordenados de forma crescente e efetuar a rotina de pesquisa.
*/

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<locale.h>

int main(){
	
 setlocale(LC_ALL,"Portuguese");
int A[10], B[10], POSI,j,x;
int acha,pesq;
char resp;
do {
printf("Digite na posição %d : ", POSI+1);
scanf("%d", &A[POSI]);
printf ("\n");
POSI++;
} while (POSI<=9);

for (POSI=0; POSI<10; POSI++){
	B[POSI]= A[POSI]*2;
printf("\nNa posição B%d o valor de %d será de %d\n",POSI+1, A[POSI],B[POSI]);
}
printf("\n");
for (POSI=0;POSI<=10;POSI++){
    for (j=POSI+1; j<=9; j++)
    {
        if (B[POSI] >B[j])
        {
                      x=B[POSI];
                      B[POSI]=B[j];
                      B[j]=x;    
                      }
    }
    }
    for (POSI=0; POSI<=9; POSI++){
    printf ("O %do. valor de B e : %3d\n", POSI+1, B[POSI]);
    getch();
   }
    resp='s';
    while(resp == 's' || resp == 'S')
    {
               printf("\n Entre com o número a ser pesquisado:");
               fflush(stdin); scanf("%d", &pesq);
               POSI=0;
               acha=0;
               while( POSI <= 9 && acha == 0)
               
                      if (pesq == B[POSI])
                      acha=1;
                      else
                      POSI += 1;
                      if (acha == 1)
                               printf ("%d foi localizado na posição %d", pesq, POSI+1);
                      else 
                      printf ("%d nao foi localizado!", pesq);
                      printf ("\n\nDeseja continuar a pesquisa? [S]IM / [N]AO + <enter>");
                      fflush(stdin); resp=getchar();
                      }
                      getch();
                      return 0;
                      }
