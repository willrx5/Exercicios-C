#include<stdio.h>
#include<stdlib.h>
            // DECLARAÇÃO DE VARIAVEIS E VETOR
int vI[10],uniao[20],D[10];         // DECLARAÇÃO DE VETORES
int x,y,aux, cont_i;                                     // DECLARAÇÃO DE VARIAVEIS QUE SERÃO UTILIZADAS PARA CONTADORES
int vetorA[10] =   { 3, 8, 4, 2, 1, 6, 8, 7, 11, 9};        // ATRIBUIÇÃO VETOR a
int vetorB[10] =   { 2, 1, 5, 12, 3, 0, 1, 4, 5, 6};         // ATRIBUIÇÃO VETOR B
int main()
{
  cont_i = 0;                                  // CONTADOR UTILIZADO PARA ATRIBUIÇÃO NO VETOR I[] = INTERSECÇÃO;
  // BLOCO DE VERIFICAÇÃO DO VETOR I = INTERSECÇÃO ;
    for ( x = 0; x <10; x++)
    {
          for ( y = 0; y<10; y++)
          {
          //  printf("TESTANDO : %d - %d \n",vetorA[x],vetorB[y]);
              if ( vetorA[x] == vetorB[y])                                    // TESTA SE O VALORES DO vetorA SAO IGUAIS AOS VALORES DO vetorB,  IF
              {
                  vI[cont_i] = vetorA[x];                                      // ADICIONA OS VALORES IGUAIS no VETOR I[cont]
                //  printf("IGUAL %d - %d \n",vetorA[x],vetorB[y]);
                  cont_i++;                                                    // INCREMENTE +1 NA VARIAVEL cont_i
                  break;                                                        // QUANDO ENCONTRA VARIAVEIS IGUAIS SAI DO IF ;
              };

          };

    };
  // BLOCO INTERSECÇÃO CONCLUIDO

  // BLOCO DE DIREFENÇA
  int cont_d = 0;
    for ( x=0;x<10;x++)
      {
          for ( y=0;y<10;y++)
          {
            printf("TESTANDO %d - %d \n",vetorB[y],vetorA[x]);
              if ( vetorA[x] != vetorB[y]  ){
                  //  printf("- AQUI -\n");


            };
            };
          };

      printf("CONTADDOR D - %d",cont_d);




  return 0;
}
