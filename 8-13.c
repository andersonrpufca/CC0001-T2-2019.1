// -*- coding: utf-8 -*-
#include <stdio.h>
//8-13

int main(){
    int n, m;
    
    scanf("%d %d", &n, &m);
    
    int matrix[n][m];
    
    int tr = m, tl = 0, br = n, bl = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 1){
                if(j < tr){
                    tr = j;
                }
                if(j > tl){
                    tl = j;
                }
                if(i < br){
                    br = i;
                }
                if(i > bl){
                    bl = i;
                }
                
            }
        }
    }
    /*
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    */
    //printf("%d %d %d %d\n", tr, tl, br, bl);
    
    for(int i = br; i <= bl; i++){
        for(int j = tr; j <= tl; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
