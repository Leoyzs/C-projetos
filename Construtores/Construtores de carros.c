#include <stdio.h>


// Definição da struct Carro
typedef struct {
    char marca[50];
    char modelo[50];
    int ano;
} Carro;


// Função para exibir as informações de um carro
void exibirCarro(Carro carro) {
    printf("Marca: %s\n", carro.marca);
    printf("Modelo: %s\n", carro.modelo);
    printf("Ano: %d\n", carro.ano);
}


int main() {
    // Exemplo de uso
    Carro carro1 = {"Toyota", "Corolla", 2020};


    // Exibe as informações do carro
    exibirCarro(carro1);


    return 0;
}



