#include "mat.h"


float dist(float p1, float p2){
    return sqt(p1 - p2);
}

int somaVet(int *vet, int tam){
    int soma = 0;
    for (int i = 0; i < tam; i++)
        soma += vet[i];
    return  soma;
}
