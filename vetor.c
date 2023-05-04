#include <stdio.h>
#include "vetor.h"

v2d recebePos(int p1, int p2) {
    v2d p;
    p.p1 = p1;
    p.p2 = p2;
    return p;
}

v2d somaVetor(v2d v1, v2d v2) {
    v2d r;    
    r.p1 = v1.p1 + v2.p1;
    r.p2 = v1.p2 + v2.p2;
    return r;
}

void mostrar(v2d n) {
    printf("<%d, %d>\n", n.p1, n.p2);
}

int main() {
    v2d n1, n2, soma;
    printf("Digite um valor para o vetor 1: ");
    scanf("%d", &n1.p1);
    printf("Digite outro valor para o vetor 1: ");
    scanf("%d", &n1.p2);
    printf("Digite um valor para o vetor 2: ");
    scanf("%d", &n2.p1);
    printf("Digite outro valor para o vetor 2: ");
    scanf("%d", &n2.p2);
    soma = somaVetor(n1,n2);
    printf("Vetor 1: ");
    mostrar(n1);
    printf("Vetor 2: ");
    mostrar(n2);
    printf("Vetor 1 + Vetor 2 = ");
    mostrar(soma);
    return 0;
}
