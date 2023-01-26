#include <stdio.h>

int main(){

    int i, c, m, n, soma;
    
    scanf("%d %d", &m, &n);
    while (m > 0 && n > 0){
        if(n < m){
            c = m;
            m = n;
            n = c;
        }
        soma = 0;
        for (i = m; i <= n; i++){
            printf("%d ", i);
            //soma = soma + i;
            soma += i;
        }
        printf("Sum=%d", soma);
        printf("\n");
        scanf("%d %d", &m, &n);
    }
    return 0;
}