#include <stdio.h>

int main()
{
    int hora_i, minuto_i, hora_f, minuto_f, duracao_h, duracao_m;
    
    scanf("%d %d %d %d", &hora_i, &minuto_i, &hora_f, &minuto_f);
    
    duracao_m = minuto_f - minuto_i;
    
    if(duracao_m < 0){
        duracao_m = 60 + (minuto_f - minuto_i);
        duracao_h = duracao_h - 1;
    }
    
     duracao_h = hora_f - hora_i;
    
    if(duracao_h < 0){
        duracao_h = 24 + (hora_f - hora_i);
    }
    
    if(duracao_m == 0 && duracao_h == 0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_h, duracao_m);
    }
    return 0;
}
