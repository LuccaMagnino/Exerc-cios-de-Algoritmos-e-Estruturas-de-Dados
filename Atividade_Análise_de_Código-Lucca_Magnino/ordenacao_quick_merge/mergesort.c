#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
O programa utiliza o metodo de ordenacao Merge Sort,
consistindo em dividir o vetor e, apos essa operacao,
realizar a ordenacao, ou seja, "dividir para conquistar"
*/

//Funcao printfVet
void printfVet(int *V  , int N){ //Entrada: vetor e tamanho do vetor
    int i;
    for(i = 0; i < N; i++)
        printf("%2d ",V[i]); //imprime os elementos do vetor
    printf("\n"); //separa a impressao
}

//Funcao merge
void merge(int *V, int inicio, int meio, int fim){ //Entrada: vetor, comeco, meio e fim do vetor
    int *temp, p1, p2, tamanho, i, j, k; 
    int fim1 = 0, fim2 = 0;
    tamanho = fim-inicio+1;
    p1 = inicio;
    p2 = meio+1;
    temp = (int *) malloc(tamanho*sizeof(int)); //Aloca um vetor temporario
    if(temp != NULL){
        for(i=0; i<tamanho; i++){
            if(!fim1 && !fim2){
                if(V[p1] < V[p2])
                    temp[i]=V[p1++];
                else
                    temp[i]=V[p2++];

                if(p1>meio) fim1=1;
                if(p2>fim) fim2=1;
            }else{
                if(!fim1)
                    temp[i]=V[p1++];
                else
                    temp[i]=V[p2++];
            }
        }
        for(j=0, k=inicio; j<tamanho; j++, k++)
            V[k]=temp[j]; //Combina dois vetores (duas metades) ordenadas
    }
    free(temp);
}


//Funcao mergeSort
void mergeSort(int *V, int inicio, int fim){ //Entrada: vetor, inicio e fim
    int meio;
    if(inicio < fim){//Divide o vetor em dois ate ter o tamanho 1
        meio = floor((inicio+fim)/2); //Encontra o valor que delimita o meio do vetor
        mergeSort(V,inicio,meio);
        mergeSort(V,meio+1,fim); 
        merge(V,inicio,meio,fim);//Recursividade 
    }
}

//Funcao main
int main(){

    int vet[8] = {0,23,4,67,-8,90,54,21}; //inicializa um vetor de tamanho 8
    int N = 8;

    printf("Sem ordenar:\n"); //Impressao antes da ordenacao
    printfVet(vet,N);

    mergeSort(vet,0,N-1);//OK

    printf("Ordenado:\n"); //Impressao apos a ordenacao
    printfVet(vet,N);

    return 0;
}
