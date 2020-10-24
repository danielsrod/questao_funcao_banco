#include <stdio.h>

// FUNÇÃO DE VER SALDO
float verSaldo(float saldo) {
    return printf("\nSeu saldo eh: R$ %.2f", saldo);
}

// FUNÇÃO DE FAZER DEPOSITO
float fazerDeposito(float saldo, float dep) {
    printf("Quanto voce quer depositar?");
    printf("\nR$ ");
    scanf("%f", &dep);
    printf("\nSaldo de R$%.2f depositado com sucesso.", dep);
    return saldo + dep;
}

// FUNÇÃO DE FAZER SAQUE
float fazerSaque(float saldo, float saque) {
        printf("Quando voce quer sacar?");
        printf("\nR$ ");
        scanf("%f", &saque);

        if (saldo < saque) {
            printf("Saldo insuficiente");
            return saldo;
        } else {
            printf("Saque de R$ %f realizado com sucesso.", saque);
            return saldo - saque; 
        }
}

int main () {
    float saldo = 1000, dep = 0, saque = 0;
    int opc = 0, cont = 1;

    do {

    printf("\n[1] - VER SALDO\n[2] - FAZER DEPOSITO\n[3] - FAZER SAQUE\n[4] - FINALIZAR\n\n");
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
    } else if (opc == 4) {
        printf("Volte sempre. :)");
        return 0;
    } else {
        printf("Comando invalido.");
        main ();
        return 0;
    }

    printf("\n\nDeseja fazer mais alguma operacao?");
    printf("\n[1] - SIM\n[2] - NAO\n");
    printf("\nEscolha: ");
    scanf("%d", &cont);

    } while (cont == 1);

    printf("\nVolte sempre. :)\n");
    return 0;
    //printf("\nSALVE MUNDO!\n\n");
}