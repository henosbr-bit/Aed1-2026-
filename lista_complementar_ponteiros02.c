#include <stdio.h>
#include <stdlib.h>

/*  Implemente uma função Produto *criar_estoque(int n) que aloque dinamicamente um 
vetor de n Produto e, percorrendo-o por meio de um ponteiro, leia os dados de cada 
produto. A função deve retornar o endereço do vetor alocado. */

typedef struct { 
char nome[50]; 
float preco; 
int quantidade; 
} Produto; 

Produto *criar_estoque(int n){
    Produto *estoque= (Produto *) malloc(sizeof(Produto));
    
    Produto *p = estoque;
    for (int i =0; i <n; i++, p++){
        printf("Produto %d:\n", i +1);
        printf("Nome: ");
        scanf("%s", p->nome);
        printf("preco: ");
        scanf("%f", &p->preco);
        printf("Quantidade: ");
        scanf("%d", &p->quantidade);
        
    }
    return estoque;
}

int main (){
    
    int n;
    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &n);

    Produto *estoque = criar_estoque(n);

    if (estoque != NULL) {
        printf("\nEstoque cadastrado:\n");
        for (int i = 0; i < n; i++) {
            printf("%s - R$%.2f - %d unidades\n",
                   estoque[i].nome, estoque[i].preco, estoque[i].quantidade);
        }
        free(estoque); 
    }
    
    return 0;
}
