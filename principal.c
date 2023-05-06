#include <stdio.h>
#include "vetor.h"

// Projeto está no github
// https://github.com/joaovjohn/Vetor2D
int main() {
    v2d n1, n2, soma, diminuicao;
    int mod;
    printf("Digite um valor para o vetor 1: ");
    scanf("%d", &n1.p1);
    printf("Digite outro valor para o vetor 1: ");
    scanf("%d", &n1.p2);
    printf("Digite um valor para o vetor 2: ");
    scanf("%d", &n2.p1);
    printf("Digite outro valor para o vetor 2: ");
    scanf("%d", &n2.p2);
    soma = somaVetor(n1,n2);
    diminuicao = subtracao(n1,n2);
    mod = modulo(n1);
    printf("Vetor 1: ");
    mostrar(n1);
    printf("Vetor 2: ");
    mostrar(n2);
    printf("Vetor 1 + Vetor 2 = ");
    mostrar(soma);
    printf("Vetor 1 - Vetor 2 = ");
    mostrar(diminuicao);
    printf("Módulo: %d\n", mod);
    return 0;
}

