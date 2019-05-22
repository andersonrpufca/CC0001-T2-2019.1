// -*- coding: utf-8 -*-
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int n;
    
    scanf("%d", &n);
    
    double comodos[n][3];
    
    double tinta = 0;
    
    for(int i = 0; i < n; i++ ){
        printf("largura comprimento e altura %d\n", i+1);
        for(int j = 0 ; j < 3; j++){
            scanf("%lf", &comodos[i][j]);
        }
        tinta += 2 * comodos[i][0] * comodos[i][2];
        tinta += 2 * comodos[i][1] * comodos[i][2];
    }
    
    tinta /= 5.0;
    
    int latas = (int) ceil(tinta/25);
    
    printf("%.3lf litros\n%d latas\n", tinta, latas);
    
    return 0;
}
