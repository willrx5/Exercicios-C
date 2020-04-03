#include<stdio.h>
#include<stdlib.h>
#define TOTAL 10
#define DOBRO 20
  int vetorA[TOTAL];// = { 2, 4,6,8,10,12,14,16,18,20};
  int vetorB[TOTAL];// = { 3, 5, 8, 9, 11, 13, 15, 17, 19, 21};
  int vetorV[DOBRO] = {0};

int main(){
      // LEITURA DO 1 VETOR
    for ( int cont = 0; cont < TOTAL; cont ++)
    {
      printf("Digite Valores para o 1 Vetor: ");
      scanf("%d",&vetorA[cont]);

    }; // END FOR LEITURA DO 1 VETOR
    // LEITURA DO 2 VETOR
    for ( int cont = 0; cont < TOTAL; cont++)
    {
      printf("Digite Valores para o 2 Vetor: ");
      scanf("%d",&vetorB[cont]);

    }; // END FOR LEITURA DO 2 VETOR

    int j = 0;  // VARIAVEL PARA AUXILIAR NO PREENCHIMENTO DO 3º VETOR
    for ( int cont = 0; cont <  10 ; cont ++){
      vetorV[j] = vetorA[cont]; // PREENCHIMENTO COM O PRIMEIRO VETOR
      j+=2;                     // INCREMENTO NA VARIAVEL j DE 2 EM 2
      vetorV[j-1] = vetorB[cont];// PREENCHIMENTO COM O 2º VETOR, E DECREMENTO DE -1 DE j
    };
    // RESULTADO DO 3º VETOR
    for (int cont = 0; cont < 20; cont++){
      printf("Digite o Valor %d\n",vetorV[cont]);
    };

      return 0;
}
