#include <stdio.h>


// Definição da struct Filme
typedef struct {
    char titulo[100];
    char diretor[100];
    int duracao; // Duração em minutos
}Filme;


// Função para exibir as informações de um filme
void exibirFilme(Filme filme) {
    printf("Título: %s\n", filme.titulo);
    printf("Diretor: %s\n", filme.diretor);
    printf("Duração: %d minutos\n", filme.duracao);
}


int main() {
    // Exemplo de uso
    Filme filme1 = {"Inception", "Christopher Nolan", 148};


    // Exibe as informações do filme
    exibirFilme(filme1);


    return 0;
}
