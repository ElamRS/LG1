#include<conio.h>
#include<stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	int ap1, ap2, j=0;
	char nap[60], r = 's';
	
	
	while (r=='s'|| r=='S') {
		j++; // cada resposta sim fará com que j aumente em 1 o valor
		printf("Quantos pontos o time 1 vai fazer: ");
		scanf("%d", &ap1);
		printf("Quantos pontos o time 2 vai fazer: ");
		scanf("%d", &ap2);
		printf("Digite o seu nome: ");
		fgets(nap, 60, stdin);
		fgets(nap, 60, stdin);
		
		printf("Se mais alguém quiser participar da partida digite 'S' se não 'N' + <ENTER>:");
		scanf("%c", &r);
		
	}
		
		struct apostadores
	{
		int pt1, pt2;
	};
	struct apostadores resp[2];
		
	printf("\n       ÁREA DO ORGANIZADOR      \n");
	printf("\n	 CONTROLE DE APOSTAS 	 \n\n");
	
		printf("\nDigite a quantidade de gols que o time 1 fez: ");
		scanf("%d", &resp[j].pt1);
		
		printf("\nDigite a quantidade de gols que o time 2 fez: ");
		scanf("%d", &resp[j].pt2);
		
		printf("\n\n          PLACAR          \n\n");
		
		printf("%d x", resp[j].pt1);
		printf(" %d", resp[j].pt2);
		
	if(resp[j].pt1>resp[j].pt2&&ap1>resp[j].pt2)
	{
		printf("\nAquele que apostou que o time 1 iria ganhar acaba de receber 10 pontos\n");
	}else
		if(resp[j].pt1<resp[j].pt2&&ap2>resp[j].pt1)
		{
			printf("\nAquele que apostou que o time 2 iria ganhar acaba de receber 10 pontos\n");
		}else
			if(resp[j].pt1==resp[j].pt2&&ap1==resp[j].pt1&&ap2==resp[j].pt2)
			{
				printf("\nAquele que apostou que daria empate ganhou 5 pontos");
			}else
				if(ap1==resp[j].pt1)
				{
					printf("\n Aquele que apostou e acertou o resultado de um dos times acaba de receber 5 pontos");	
				}else
					if(ap2==resp[j].pt2)
					{
						printf("\n Aquele que apostou e acertou o resultado de um dos times acaba de receber 5 pontos");	
					}else
						if(ap1==resp[j].pt1&&ap2==resp[j].pt2)
						{
							printf("\n Aquele que apostou e acertou o resultado de ambos os times acaba de receber 20 pontos ");
						}else
							if(ap1!=pt1&&ap2!=pt2)
							{
								("Aquele que errou o placar ganhou 0 pontos");	
							}
	getch();	 
}
