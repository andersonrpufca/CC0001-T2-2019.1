// -*- coding: utf-8 -*-
#include <stdio.h>


int main(){
    int n;
    printf("entre 3 e 29:");
    scanf("%d", &n);
    
    int matriz[3][4];
    
    for(int i = 0; i < 3; i++){
        matriz[i][0] = n * (i+1);
    }
    
    for(int j = 0; j < 4; j++){
        matriz[0][j] = n * (j+1);
    }
    
    for(int i = 1; i < 3; i++){
        for(int j = 1; j < 4; j++){
            matriz[i][j] = matriz[0][j] * matriz[i][0];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
