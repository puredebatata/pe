#define ERRO_PILHA_CHEIA -1
#define ERRO_PILHA_VAZIA -2

typedef struct{
 
    void **dados; //teremos um vetor de "apontadores"
    int topo, capacidade;
    int tamInfo; //precisa disso porque é genérico   
    
} Pilha;

void inicializa_pilha(Pilha *p, int qtd, int tamanhoInfo);
int empilha(Pilha *p, void *info);
int desempilha(Pilha *p);
void mostra_pilha(Pilha p, void (*mostra)(void*));
int pilha_cheia(Pilha p);
int pilha_vazia(Pilha p);
