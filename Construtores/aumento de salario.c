#include <stdio.h>

// Definição da struct Funcionario
typedef struct {
    char nome[100];
    int id;
    float salario;
} Funcionario;

// Função para aumentar o salário de um funcionário em uma determinada porcentagem
void aumentarSalario(Funcionario *func, float porcentagem) {
    func->salario += func->salario * (porcentagem / 100);
}

int main() {
    // Exemplo de uso
    Funcionario func = {"João Silva", 12345, 3000.00};

    printf("Salário antes do aumento: %.2f\n", func.salario);

    // Aumenta o salário em 10%
    aumentarSalario(&func, 10);

    printf("Salário após o aumento: %.2f\n", func.salario);

    return 0;
}
