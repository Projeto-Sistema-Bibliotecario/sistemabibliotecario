#include <stdio.h>

struct Livro {
    int id;
    char titulo[100];
    char autor[100];
    int disponivel;
};

struct Livro biblioteca[100];
int totalLivros = 0;

void cadastrarLivro() {
    if (totalLivros >= 100) {
        printf("Limite atingido\n");
        return;
    }
 
    printf("Digite o id: ");
    scanf("%d", &biblioteca[totalLivros].id);

    printf("Digite o titulo: ");
    scanf(" %[^\n]", biblioteca[totalLivros].titulo);

    printf("Digite o autor: ");
    scanf(" %[^\n]", biblioteca[totalLivros].autor);

    biblioteca[totalLivros].disponivel = 1;
    totalLivros++;

    printf("Livro cadastrado!\n");
}

void listarLivros() {
    if (totalLivros == 0) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }

    for (int i = 0; i < totalLivros; i++) {
        printf("\nLivro %d\n", i + 1);
        printf("ID: %d\n", biblioteca[i].id);
        printf("Titulo: %s\n", biblioteca[i].titulo);
        printf("Autor: %s\n", biblioteca[i].autor);

        if (biblioteca[i].disponivel == 1) {
            printf("Status: Disponivel\n");
        } else {
            printf("Status: Emprestado\n");
        }
    }
}

int main() {
    cadastrarLivro();
    listarLivros();
    
    return 0;
}
// essa parte é so a de cadastro e listagem dos livros

