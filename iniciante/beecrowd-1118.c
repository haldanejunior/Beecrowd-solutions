#include <stdio.h>

int main()
{
    int select;

    select = 1;
    while(select == 1){
    float n1, n2, soma, media;
    int select;

    scanf("%f", &n1);

    while(n1 < 0 || n1 >10){
        printf("nota invaldia\n");
        scanf("%f", &n1);
    }
    scanf("%f", &n2);

    while(n2 < 0 || n2 >10){
        printf("nota invaldia\n");
        scanf("%f", &n2);
    }

    soma = n1 + n2;
    media = soma/2;
    printf("media = %.2f\n", media);
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &select);

    while (select != 1 && select != 2) {
    	printf("novo calculo (1-sim 2-nao)");
	scanf("%d", &select);
    }
    }
    return 0;
}
