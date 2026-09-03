#include <stdio.h>
#include <stdlib.h>

typedef struct { 
int x; 
int y; 
} Ponto; 

 Ponto *criar_ponto(int x, int y) {
     Ponto *p= (Ponto *) malloc(sizeof(Ponto));
     if (p == NULL){
         
         return NULL;
     }
     p ->x=x;
     p ->y=y;
     return p;
     free(p);
     
 }

int main (){
    
   Ponto *p1 = criar_ponto(10,20);
   
   if (p1 != NULL){
       printf("Ponto criado: (%d,%d)", p1 ->x, p1 ->y);
   }
    
    return 0;
}
