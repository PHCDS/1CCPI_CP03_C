#include <stdio.h>
#include <stdlib.h>


void exibirMenu() {
    printf("\n========================\n");
    printf(" CAIXA ELETRONICO \n");
    printf("========================\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Deposito\n");
    printf("0 - Sair\n");
    printf("========================\n");
    printf("Escolha uma opcao: ");
}

void consultarSaldo(float saldo) {
    printf("\n--- SALDO ATUAL ---\n");
    printf("R$ %.2f\n", saldo);
    printf("-------------------\n");
    system("pause"); // Aguarda o usuario
}

float realizarDeposito(float saldo) {
    float valor;
    printf("Digite o valor do deposito: ");
    scanf("%f", &valor);
    if (valor > 0) {
    saldo += valor;
    printf("Deposito realizado!\n");
    } else {
    printf("Valor invalido!\n");
    }
    return saldo;
}

float realizarSaque(float saldo) {
    float valor;
    printf("Valor do saque: ");
    scanf("%f", &valor);
    if (valor <= saldo && valor > 0) {
    saldo -= valor;
    printf("Saque realizado!\n");
    } else {
    printf("Saldo insuficiente ou valor invalido!\n");
    }
    return saldo;
}

int main (){

    float saldo = 500.0;
    int op;
    do {
    exibirMenu();
    scanf("%d", &op);
    switch(op) {
    case 1:
        consultarSaldo(saldo);
        break;
    case 2:
        saldo = realizarSaque(saldo);
        break;
    case 3:
        saldo = realizarDeposito(saldo);
        break;
    case 0:
        printf("Saindo...");
        break;
    default:
        printf("Invalido!");
    }
    } while(op != 0);
    return 0;
    }