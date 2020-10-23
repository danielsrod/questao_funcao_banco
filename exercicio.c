#include <stdio.h>

float verSaldo(float saldo) {
    return printf("Seu saldo eh: R$ %.2f", saldo);
}

float fazerDeposito(float saldo, float dep) {
    printf("Quanto voce quer depositar?");
    printf("\nR$ ");
    scanf("%f", &dep);
    printf("Saldo de R$%.2f depositado com sucesso.", dep);

    return saldo + dep;
}

float fazerSaque(float saldo, float saque) {
    printf("Quando voce quer sacar?");
    printf("\nR$ ");
    scanf("%f", &saque);
    printf("Valor de R$ %.2f sacado com sucesso.", saque);

    return saldo - saque; 
}


int main () {
    float saldo = 1000, dep = 0, saque = 0;
    int opc = 0, cont = 1;


    do {

    printf("\n[1] - VER SALDO\n[2] - FAZER DEPOSITO\n[3] - FAZER SAQUE\n\n");
    printf("Escolha: ");
    scanf("%d", &opc);

    if (opc == 1) {
        // VER SALDO
        verSaldo(saldo);
    } else if (opc == 2) {
        saldo = fazerDeposito(saldo, dep);
        // FAZER DEPOSITO
    } else if (opc == 3) {
        // FAZER SAQUE
        saldo = fazerSaque(saldo, saque);
    } else {
        printf("Comando invalido.");
    }

    printf("\n\nDeseja fazer mais alguma operacao?");
    printf("\n[1] - SIM\n[2] - NAO");
    printf("\nEscolha: ");
    scanf("%d", &cont);

    } while (cont == 1);

    
    

    return 0;
    //printf("\nSALVE MUNDO!\n\n");
}