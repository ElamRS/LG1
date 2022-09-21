// FAÇA UM PROGRAMA QUE LEIA O NOME E SALARIO DOS FUNCIONARIOS
// EM SEGUIDA, FAÇA UM REAJUSTE SALARIAL E POR FIM EXIBA:
// NOME, % DE AUMENTO, SALARIO ATUAL, SALARIO NOVO.


//--------------------------------------------------------//


// TABELA USADA PARA FAZER O REAJUSTE:
// 0,00 até 400,00 = 15%
// 401,00 entre 700,00 = 12%
// 701,00 entre 1000,00 = 10%
// 1001,00 entre 1800,00 = 7%
// 1801,00 entre 2500,00 = 4%
// 2500,00 ACIMA = 0%


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()

{
	// 	DECLARAÇÃO DE VARIÁVEIS //
	
	
setlocale (LC_ALL, "portuguese");
char nome [35];
float salario, ns;
int porcentagem;

	// ENTRADA E LEITURA DOS DADOS DO FUNCIONÁRIO //

	printf ("DIGITE SEU NOME: ");
	fflush (stdin);
	fgets (nome,35,stdin);	
	printf ("\nDIGITE SEU SALÁRIO ATUAL: R$ ");
	scanf ("%f",&salario);
	system ("cls");
	
	//REAJUSTE DOS SALARIOS CONFORME A TABELA //.
	
		if (salario<=400)
		{
			ns = salario*1.15;
			porcentagem = 15;
		}
		
			if (salario>=401.00 && salario<=700.00)
			{
				ns = salario*1.12;
				porcentagem = 12;
			}	
				
				if (salario>=701.00 && salario<=1000.00)
				{
					ns = salario*1.10;
					porcentagem = 10;
				}		
					
					if (salario>=1001.00 && salario<=1800.00)
					{
						ns = salario*1.07;
						porcentagem = 7;
					}	
			
						if (salario>=1801.00 && salario<=2500.00)
						{
							ns = salario*1.04;
							porcentagem = 4;
						}	
						
							if (salario>2500.00)
							{
								ns=salario;
								porcentagem = 0;
							}	
	
	// EXIBIÇÃO DOS DADOS DO FUNCIONARIO //.
		
	printf("\nNOME COMPLETO: %s", nome);
	printf ("PERCENTUAL DO AUMENTO: %i%%\n", porcentagem);
	printf ("SALARIO ATUAL: R$ %.2f\n", salario); 
	printf ("NOVO SALARIO: %.2f\n", ns);

return 0;	
}
