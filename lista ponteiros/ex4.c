#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main (void){
 int vet[SIZE], i;
 int *Endvet;
 Endvet = vet;

 printf("\tDigite %d elementos:\n",SIZE);

 for(i = 0; i < SIZE; i++){
  printf("%d: ",i+1);
    scanf("%d", &vet[i]);
 }

 printf("\n\telementos:\n\n");
    for(i = 0; i < SIZE; i++){
        printf("%d  ",vet[i]);
 }
 printf("\n\nenderecos do array:\n");

 for(i = 0; i < SIZE; i++){
     printf("%i : %i : %i\n",i+1, vet[i], Endvet++);
 }

 printf("\nendereco do array que sao pares:\n");

 Endvet = vet;

 for(i = 0; i < SIZE; i++){

  if(vet[i] %2 == 0){
   printf("\n O numero %d e par e esta na posicao: = %d",vet[i], Endvet);
  }
  Endvet++;
 }
}
