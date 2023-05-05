#include <stdio.h>

struct tv2d {
    int p1;
    int p2;
}; 
typedef struct tv2d v2d;

v2d recebePos(int p1, int p2);

v2d somaVetor(v2d v1, v2d v2);

v2d subtracao(v2d v1, v2d v2);

double modulo (v2d v);

void mostrar(v2d n);
