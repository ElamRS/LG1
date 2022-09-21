#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float A, B, C;
    printf("Lado A: ");
    scanf("%f", &A);
    printf("Lado B: ");
    scanf("%f", &B);
    printf("Lado C: ");
    scanf("%f", &C);
    if ((A < B + C) && (B < A + C) && (C < A + B)) {
        if ((A == B) && (B == C)) {
            printf("Triângulo Equilátero!\n");
    	} else {
    		if ((A == B) || (A == C) || (B == C)) {
                printf("Triângulo Isósceles!\n");
            } else {
            	printf("Triângulo Escaleno!\n");
			}      
		}
    } else {
    	printf("Não é um Triângulo!\n");
	}
	getch();
	return 0;
}

