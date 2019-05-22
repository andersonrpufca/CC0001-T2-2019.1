// -*- coding: utf-8 -*-
#include <stdio.h>

#define INCANDESCENTE 150
#define FLUORESCENTE 90
#define HALOGENA 50
#define LED 16

int main(){
    int y, x;
    
    scanf("%d %d", &y, &x);
    
    int cons[y][x];
    char tipo[y][x];
    
    for(int i  = 0 ; i < y;  i++){
        for( int j  =  0; j < x; j++) {
            scanf("%d", &cons[i][j]);
        }
    }
    
    for(int i  = 0 ; i < y;  i++){
        for( int j  =  0; j < x; j++) {
            scanf("%*c%c", &tipo[i][j]);
        }
    }
    
    
    for(int i  = 0 ; i < y;  i++){
        for( int j  =  0; j < x; j++) {
            switch (tipo[i][j]){
                case 'I':
                    if(cons[i][j] > INCANDESCENTE){
                        printf("X ");
                    }
                    else {
                        printf("O ");
                    }
                    break;
                case 'F':
                    if(cons[i][j] > FLUORESCENTE){
                        printf("X ");
                    }
                    else {
                        printf("O ");
                    }
                    break;
                case 'H':
                    if(cons[i][j] > HALOGENA){
                        printf("X ");
                    }
                    else {
                        printf("O ");
                    }
                    break;
                case 'L':
                    if(cons[i][j] > LED){
                        printf("X ");
                    }
                    else {
                        printf("O ");
                    }
                    break;
                default:
                    break;
            }  // switch
        }
        printf("\n");
    }
    
    return 0;
}
