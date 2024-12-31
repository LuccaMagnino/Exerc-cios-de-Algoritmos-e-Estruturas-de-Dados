#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ListaSequencial.h"
#include "ListaSequencial.c"

int main() {
clock_t inicio, fim;
unsigned long int tempo;
inicio = clock();

/* coloque seu código aqui */

Lista * listaSeq = cria_lista();
struct aluno al = {1, "Aluno", 1, 2, 3};
int N = 500000;
    for(int i = 0; i < N; i++){
        insere_lista_inicio(listaSeq, al);
    }

fim = clock();
tempo = (fim - inicio) * 1000 / CLOCKS_PER_SEC;
printf("tempo: %.3lu milissegundo\n", tempo);

libera_lista(listaSeq);
return 0;
}