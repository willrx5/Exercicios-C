#include<stdio.h>
#include<stdlib.h>
// DECLARAÇAÕ DE VARIÁVEIS

int vetor[10] = {3, 5, 4, 2, 1, 6, 8, 7, 11, 9 };
int A, B, AUX; // SERÃO USADAS COMO CONTADORES; e VARIAVEL AUXILIAR,
int main(){

      for ( A =0; A <10; A ++)                    // LOOP PARA PERCORRER TODOS OS ELEMENTOS DO VETOR
        {
          for ( B= A +1;B<10;B++)                 // LOOP PARA PERCORRER TODOS OS ELEMENTOS DO VETOR
              {
                if ( vetor[A] < vetor[B])         // VERIFICAÇÃO DE QUAL VALOR EH MENOR
                    {
                      AUX = vetor[A];             // PERMUTAM OS VELORES DAS VERIÁVEIS
                      vetor[A] = vetor[B];        //
                      vetor[B] = AUX;

                    };
              };
        };
   for ( int cont = 0; cont<10; cont++)           // IMPRIME OS VALORES NA TELA;
        printf(" %d ",vetor[cont]);
  return 0;
}
