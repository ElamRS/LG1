#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
	setlocale(LC_ALL, "portuguese");
    const char *mes[] = {"Janeiro", "Fevereiro", "Mar�o", "Abril", "Maio", "Junho", "Julho",
	              "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	int num;
    printf("N�mero do M�s: ");
    scanf("%d", &num);
    switch (num) {
        case 1:
            printf("M�s: %s", mes[num-1]); break;
        case 2:
            printf("M�s: %s", mes[num-1]); break;
        case 3:
            printf("M�s: %s", mes[num-1]); break;
        case 4:
            printf("M�s: %s", mes[num-1]); break;
        case 5:
            printf("M�s: %s", mes[num-1]); break;
        case 6:
            printf("M�s: %s", mes[num-1]); break;
        case 7:
            printf("M�s: %s", mes[num-1]); break;
        case 8:
            printf("M�s: %s", mes[num-1]); break;
        case 9:
            printf("M�s: %s", mes[num-1]); break;
        case 10:
            printf("M�s: %s", mes[num-1]); break;
        case 11:
            printf("M�s: %s", mes[num-1]); break;
        case 12:
            printf("M�s: %s", mes[num-1]); break;
        default:
            printf("Digite um n�mero entre 1 e 12!"); break;
    }
    getch();
    return 0;
}
