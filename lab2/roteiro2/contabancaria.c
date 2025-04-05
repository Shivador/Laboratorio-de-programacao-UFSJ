#include <stdio.h>
#include "contabancaria.h"

int main(){
    ContaBancaria x;
    criarconta(&x, 2024, "rafael");
    depositar(&x, 500);
    sacar(&x, 50);
    consultarSaldo(&x);
    imprimirInfo(&x);

    return 0;
}