#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "portuguese");
    float A, B, C, delta, x1, x2;
    printf("A: ");
    scanf("%f", &A);
    printf("B: ");
    scanf("%f", &B);
    printf("C: ");
    scanf("%f", &C);
    delta = pow(B, 2) - (4 * A * C);
    if (delta >= 0) {
        x1 = ((-B) + sqrt(delta)) / (2 * A);
        x2 = ((-B) - sqrt(delta)) / (2 * A);
        printf("Delta: %.2f \n", delta);
        printf("1° Raiz: %.2f\n", x1);
        printf("2° Raiz: %.2f\n", x2);
    } else {
        printf("Não Existem Raízes");
    }
    getch();
    return 0;
}
