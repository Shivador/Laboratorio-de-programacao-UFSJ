#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct conta{
    int numeroconta;
    double saldo;
    char nome[100];
}ContaBancaria;

void criarconta(ContaBancaria* c, int numero, char* titular){
    c->saldo = 0;
    c->numeroconta = numero;
    strcpy(c->nome, titular);
}

void depositar(ContaBancaria *c, double valor){
    c->saldo += valor;
}

void sacar(ContaBancaria *c, double valor){
    if(c->saldo >= valor){
        c->saldo -= valor;
    }
}

double consultarSaldo(ContaBancaria *c){
    return c->saldo;
}

void imprimirInfo(ContaBancaria *c){
    printf("Numero: %d\n", c->numeroconta);
    printf("Nome: %s\n", c->nome);
    printf("Saldo: %.2lf\n", c->saldo);
}

#endif