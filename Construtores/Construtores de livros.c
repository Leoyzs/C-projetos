#include <stdio.h>


// Definição da struct Livro
typedef struct {
    char titulo[100];
    char autor[100];
    int numPaginas;
} Livro;


// Função para exibir as informações de um livro
void exibirLivro(Livro livro) {
    printf("Título: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Número de páginas: %d\n", livro.numPaginas);
}


int main() {
    // Exemplo de uso
    Livro livro1 = {"O Senhor dos Anéis", "J.R.R. Tolkien", 1178};


    // Exibe as informações do livro
    exibirLivro(livro1);


    return 0;
}
