#include <stdio.h>

int main(){

    int i, N;

    N = 100;
    double vet[N];

    for (i = 0; i < N; i++) {
        scanf("%lf", &vet[i]);
        
        if (vet[i] > 10){
            continue;
        }

        printf("A[%d] = %.1lf\n", i, vet[i]);
    
    }
    
    return 0;
}
