#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pilha.h"

int pilha_cheia(Pilha p){
    
    if (p.topo == p.capacidade)
        return 1;
    else
        return 0;    
}

int pilha_vazia(Pilha p){
 
    if (p.topo == -1)
        return 1;
    else
        return 0;       
}

void inicializa_pilha(Pilha *p, int qtd, int tamanhoInfo){ //tamanhoInfo é um sizeof(tipo_dados)
       
    p->dados = malloc(sizeof(void*)*qtd);
    p->capacidade = qtd;
    p->topo = -1;
    p->tamInfo = tamanhoInfo;    
}

int empilha(Pilha *p, void *info){
 
    if(pilha_cheia(*p)){
        
        return ERRO_PILHA_CHEIA;    
    }
    else{
        
        p->topo++;
        p->dados[p->topo] = malloc(p->tamInfo);
        memcpy(p->dados[p->topo], info, p->tamInfo);
        return 1;    
    }     
}

int desempilha(Pilha *p){
    
    if(pilha_vazia(*p)){
     
        printf("\nA pilha esta vazia, seu cuzao!\n");
        return ERRO_PILHA_VAZIA;        
    }
    else{
     
        free(p->dados[p->topo]);
        p->topo--;
        return 1;        
    }
}

void mostra_pilha(Pilha p, void (*mostra)(void*)){
    
    int i;
    
    if(pilha_vazia(p)){
        
        printf("\nA pilha esta vazia, seu cuzao!\n");
        return;
    }
    else{
     
        printf("\nTopo da pilha\n");
        for(i=p.topo;i>=0;i--){
            mostra(p.dados[i]);   
        }
        printf("Inicio da pilha\n");
    }
    
}
