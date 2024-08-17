#include<stdio.h>
    int main() {

    float receita, despesa;

    float saldo;

    printf("Digite o valor da receita: ");
    scanf("%f", &receita);

    printf("Digite o valor da despesa: ");
    scanf("%f", &despesa);

    
    saldo = (receita - despesa);

    printf("O saldo atualizado é: %.2f\n", saldo);

    return 0;
}