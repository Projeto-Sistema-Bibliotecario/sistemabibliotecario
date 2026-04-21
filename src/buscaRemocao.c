#include <string.h>
#include <stdio.h>
#include "livro.h"

    char busca[50];
    char remocao[50];
    
void buscarLivros() {   
    printf("Digite o nome do livro para busca: ");
    scanf(" %[^\n]", busca);
    
    for (int i = 0; i < totalLivros; i++){
     if (strcmp(busca, biblioteca[i].titulo) == 0) {
        printf("%s está disponível\n", busca);
    } 
     else {printf("%s não está disponível\n", busca);
    }
    }
    }

void removerLivros() {   
    printf("Digite o nome do livro a ser removido: ");
    scanf(" %[^\n]", remocao);
    
    for (int i = 0; i < totalLivros; i++){
     if (strcmp(remocao, biblioteca[i].titulo) == 0) {
         for (int j = i; j < totalLivros - 1; j++) {
             biblioteca[j] = biblioteca [j + 1];
         }
        totalLivros--;
        printf("%s removido com sucesso\n", remocao);
        break;
    } 

     else {printf("%s já foi removido ou nunca adicionado\n", remocao);
    }
    }
    }

int main(){  
    buscarLivros(); //Busca
    removerLivros(); //Remoção
    
      return 0;
      


}
