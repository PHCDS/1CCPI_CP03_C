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

int main (){

    float saldo = 500.0;
    int op;
    do {
    exibirMenu();
    scanf("%d", &op);
    switch(op) {
    case 1: consultar(saldo); break;
    case 2: saldo = realizarSaque(saldo); break;
    case 3: saldo = realizarDeposio(saldo); break;
    case 0: printf("Saindo..."); break;
    default: printf("Invalido!");
    }
    } while(op != 0);
    return 0;
    }
    float realizarSaque(float s) {
    float v; scanf("%f", &v);
    if(v <= s) { s -= v; printf("Sucesso!"); }
    else printf("Sem saldo!");
    return s;


return 0;
}