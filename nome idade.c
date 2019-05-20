// -*- coding: utf-8 -*-
#include <stdio.h>
#include <string.h>

int main(){
    
    int n;
    
    scanf("%d%*c", &n);
    
    char nomes[n][100];
    int idades[n];
    
    int novo = 999;
    int inovo = 0;
    
    for(int i = 0;i < n; i++){
        //gets(nomes[i]);
        scanf("%[^\n]s", &nomes[i]);
        //printf("n %s\n", nomes[i]);
        scanf("%d%*c", &idades[i]);
        //printf("i %d\n", idades[i]);
        if(idades[i] < novo){
            novo = idades[i];
            inovo = i;
        }
    }
    
    printf("%s\n", nomes[inovo]);
    
    return 0;
}
