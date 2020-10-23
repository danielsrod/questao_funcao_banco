#include <stdio.h>

void verSaldo(float saldo) {
    return printf("Seu saldo é: R$ %.2f", saldo);
}

void fazerDeposito(float saldo, float dep) {
    printf("Quanto você quer depositar?");
    printf("\nR$ ");
    scanf("%f", &dep);
    saldo = saldo + dep;

    return printf("Saldo de R$%.2f depositado com sucesso.", dep);   
}

void fazerSaque(float saldo, float saque) {
    printf("Quando você quer sacar?");
    printf("\nR$ ");
    scanf("%f", &saque);
    saldo = saldo - saque;

    return printf("Valor de R$ %.2f sacado com sucesso.", saque);
}


int main () {
    float saldo = 1000, dep = 0, saque = 0;
    int opc = 0;

    printf("\n[1] - VER SALDO\n[2] - FAZER DEPOSITO\n[3] - FAZER SAQUE\n\n");
    printf("Escolha: ");
    scanf("%d", &opc);

    if (opc == 1) {
        // VER SALDO
        verSaldo(saldo);
    } else if (opc == 2) {
        fazerDeposito(saldo, dep);
        // FAZER DEPOSITO
    } else if (opc == 3) {
        // FAZER SAQUE
        fazerSaque(saldo, saque);
    } else {
        printf("Comando inválido.");
    }
    

    return 0;
    //printf("\nSALVE MUNDO!\n\n");
}