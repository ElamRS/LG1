#include <stdio.h>
#include <conio.h>

int main()
{
	float soma, media, n1, n2, n3, n4;
	printf("Nota 1 Bimestre: ");
	scanf("%f", &n1);
	printf("Nota 2 Bimestre: ");
	scanf("%f", &n2);
	printf("Nota 3 Bimestre: ");
	scanf("%f", &n3);
	printf("Nota 4 Bimestre: ");
	scanf("%f", &n4);
	soma = n1 + n2 + n3 + n4;
    media = soma / 4;
    printf("Media Final: %.2f", media);
    getch();
    return 0;
}
