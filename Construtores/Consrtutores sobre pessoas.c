#include <stdio.h>
#include <string.h>


// Definição da struct Pessoa
typedef struct {
    char nome[100];
    int idade;
    float altura;
} Pessoa;


// Função para encontrar a pessoa mais alta em um array de pessoas
Pessoa pessoaMaisAlta(Pessoa pessoas[], int tamanho) {
    Pessoa maisAlta = pessoas[0];


    for (int i = 1; i < tamanho; i++) {
        if (pessoas[i].altura > maisAlta.altura) {
            maisAlta = pessoas[i];
        }
    }


    return maisAlta;
}


int main() {
    // Exemplo de uso
    Pessoa pessoas[] = {
        {"Maria", 30, 1.75},
        {"João", 25, 1.80},
        {"Ana", 28, 1.70}
    };
    int tamanho = sizeof(pessoas) / sizeof(pessoas[0]);


    // Encontra a pessoa mais alta
    Pessoa maisAlta = pessoaMaisAlta(pessoas, tamanho);


    // Exibe as informações da pessoa mais alta
    printf("Pessoa mais alta:\n");
    printf("Nome: %s\n", maisAlta.nome);
    printf("Idade: %d\n", maisAlta.idade);
    printf("Altura: %.2f\n", maisAlta.altura);


    return 0;
}
