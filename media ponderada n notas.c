// -*- coding: utf-8 -*-
#include <stdio.h>
#include <string.h>

int main(){
    int n , alunos;
    
    scanf("%d %d", &n, &alunos);
    
    double notas[alunos][n];
    
    double medias[alunos];
    
    double pesos[n];
    
    for(int i = 0; i < n; i++){
        scanf("%lf", &pesos[i]);
    }
    
    for(int i = 0; i < alunos; i++){
        printf("aluno %d:\n", i+1);
        medias[i] = 0;
        for(int j = 0; j < n; j++){
            printf("nota %d: ", j+1);
            scanf("%lf", &notas[i][j]);
            medias[i] += notas[i][j] * pesos[j];
        }
        printf("media = %.2lf\n", medias[i]);
        if( medias[i] >= 7 ){
            printf("aluno %d aprovado.\n", i+1);
        }
        else if ( medias[i] >= 3 ){
            printf("final.\n");
        }
        else {
            printf("reprovado\n");
        }
    }
    
    
    
    return 0;
}
