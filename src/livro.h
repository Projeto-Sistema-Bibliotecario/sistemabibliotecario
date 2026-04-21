#ifndef LIVRO_H
#define LIVRO_H

struct Livro {
    int id;
    char titulo[100];
    char autor[100];
    int disponivel;
};

extern struct Livro biblioteca[100];
extern int totalLivros;

#endif
