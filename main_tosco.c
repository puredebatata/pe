#include <stdlib.h>
#include <stdio.h>
#include "Pilha.h"

void mostra_float(void *x);

void mostra_float(void *x){
    
    float *p = x;
    printf("%.2f\n", *p);   
    
}

int main(){
    
    int i, remove;
    float aux;
    Pilha filha;
    
    inicializa_pilha(&filha, 5, sizeof(float));
    
    for(i=0;i<5;i++){
        scanf("%f", &aux);
        empilha(&filha, &aux);
    }
    mostra_pilha(filha, mostra_float);
    
    printf("\nRemover quantos elementos? (0 ate 5): ");
    scanf("%d", &remove);
    
    for(i=0;i<remove;i++)
        desempilha(&filha);
        
    mostra_pilha(filha, mostra_float);
    
    system("PAUSE");
    
}

