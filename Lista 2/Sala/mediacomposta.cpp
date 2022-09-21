#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float n1, n2, n3, media, exame;
	printf("Nota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	printf("Nota 3: ");
	scanf("%f", &n3);
	media = (n1 + n2 + n3) / 3;
	if (media >= 6) {
		printf("O aluno foi aprovado! \n");
		printf("Media: %.2f", media);
	} else {
		printf("Nota abaixo de 6!\n"); 
		printf("Nota do Exame: ");
		scanf("%f", &exame);
		media = (media + exame) / 2;
		if (media >= 5) {
			printf("O aluno foi aprovado!\n");
			printf("Media: %.2f", media);
		} else {
			printf("O aluno foi reprovado!\n");
			printf("Media: %.2f", media);
		}
	}
	getch();
	return 0;
}
