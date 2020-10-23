#include <stdio.h>
#include <locale.h>

void verSaldo(float saldo) {
    return printf("Seu saldo é: R$ %.2f", saldo);
}

void fazerDeposito(float saldo, float dep) {
    printf("Quanto você quer depositar?");
    printf("\nR$ ");
    scanf("%f", &dep);
    saldo = saldo + dep;
    printf("Saldo depositado.");   
}

void fazerSaque() {

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
    } else {
        printf("Comando inválido.");
    }
    

    return 0;
    //printf("\nSALVE MUNDO!\n\n");
}