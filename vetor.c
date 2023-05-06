#include <stdio.h>
#include <math.h>
#include "vetor.h"
// Comando para compilar com o math.h incluso
// gcc -Wall principal.c vetor.c -lm -o vetor
//./vetor

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

v2d subtracao(v2d v1, v2d v2) {
    v2d r;
    r.p1 = v1.p1 - v2.p1;
    r.p2 = v1.p2 - v2.p2;
    return r;
}

int modulo(v2d v) {
    int r;
    r = sqrt(v.p1*v.p1+v.p2 * v.p2);
    return r;
}

void mostrar(v2d n) {
    printf("<%d, %d>\n", n.p1, n.p2);
}
