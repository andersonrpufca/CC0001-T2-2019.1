// -*- coding: utf-8 -*-
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    
    double media = 0;
    
    scanf("%d", &n);
    
    double matriz[n][n];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j ++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        media += matriz[i][i];
    }
    
    media /= n;
    
    printf("%.2lf\n", media);
    
    return 0;
}
