#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
	int faixa1=0,faixa2=0,faixa3=0,faixa4=0,faixa5=0,
	    numero,contabili=0,somatotal=0,maior=0,
	    menor,par,impar,
	    bpar=0,bimpar=0;
	    do //repetir para adicionar outros numeros
	    {
	    	 printf("Digite um numero: ");
	    	 scanf("%d", &numero);
	    	 if(contabili == 0)menor = numero;
	    	 if( menor > numero )menor = numero;  // saber o menor número digitado
             if( maior < numero )maior = numero;  // saber o maior número digitado
             somatotal +=numero;
               if(numero < 0)faixa1++; // se o numero for menor que 0 ele vai pra faixa 1
                 else
                   if( numero >= 0 && numero < 15 )faixa2++; //se o numero for menor igual a 0 ou menor que quinze ele vai pra faixa 2
                    else
                      if( numero >=15 && numero < 100 )faixa3++; //se o numero for maior igual a 15 ou menor que 100 ele vai pra faixa 3
                        else
                         if( numero >= 1000 )faixa4++; //se o numero for maior igual a 1000 ele vai pra faixa 4
                           else
                              if ( numero >= 101 && numero < 1000 )faixa5++; // se o numero for maior igual a 101 ou menor que 1000 ele vai pra faixa 5
                                 if( numero % 2 == 0 )par++;// saber se o número é par ou impar
                                    else  impar++;
                                    contabili++;    //ampliar o contador que vai contabilizar os numeros
                                    printf("Deseja Continuar  S/N\n"); //opcao do usuario
		}
while( toupper((char)getch() ) != 'N');
    printf("O Maior Numero Foi ----------------: %d  \n",maior);
    printf("O Menor Numero Foi ----------------: %d  \n",menor);
    printf("O Total do Numero Par Foi ---------: %d  \n",par);
    printf("O Total do Numero Impar Foi -------: %d  \n",impar);
    printf("A media aritmetica entre eles Foi -: %.2f\n",(float)somatotal / contabili);
    getch();
    return 0;
}
