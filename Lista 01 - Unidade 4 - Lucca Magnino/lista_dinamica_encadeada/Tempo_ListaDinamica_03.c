#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ListaDinEncad.h"
#include "ListaDinEncad.c"

int main() {
clock_t inicio, fim;
unsigned long int tempo;
inicio = clock();

/* coloque seu código aqui */

Lista * listaDin = cria_lista();
struct aluno * al = {1, "Aluno", 1, 2, 3};
int N = 500000;
    for(int i = 0; i < N; i++){
        consulta_lista_pos(listaDin, i, al);
    }

fim = clock();
tempo = (fim - inicio) * 1000 / CLOCKS_PER_SEC;
printf("tempo: %.3lu milissegundo\n", tempo);

libera_lista(listaDin);
return 0;
}