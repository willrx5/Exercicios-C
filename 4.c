#include<stdio.h>
#include<stdlib.h>
#define TOTAL 8 // TOTAL DO VETOR
// DECLARAÇÃO DE VARIÁRIAVEIS
  int v[8]; // = { 4, 5, -5, -8, 15, 100, 16, 7};       // VETOR DE ENTRADA
  int vp[8] = { 0 };                                // VETOR RESULTANTE POSITIVO vp[]
  int vn[8], cont ;                                       // VETOR RESULTANTE NEGATIVO vn[]
  int cont_neg = 0;                                 // CONTADOR PARA NUMEROS NEGATIVOS
  int cont_pos = 0;                                 // CONTADOR PARA NUMEROS POSITIVOS
int main()                                          // INICIO DA FUNÇÃO MAIN
{
                                                    // FOR DE LEITURA DO VETOR DE ENTRADA
for (cont = 0; cont <8; cont++){
    printf("Digite Valores Inteiros Vetor de Entrada: ");
    scanf("%d",&v[cont]);
}


  for ( int cont = 0; cont < TOTAL ; cont++)        // FOR DE TODOS O INDICES DO VETOR DE ENTRADA
  {
      if ( v[cont] < 0 )                            // VERIFICAÇÃO SE O NÚMERO EH NEGATIVO
      {
          vn[cont_neg] = v[cont];                  // SE FOR NEGATIVO ADICIONA ELE NO vn[cont_neg] A PARTIR DO VETOR DE ENTRADA
          cont_neg++;                              // INCREMENTA +1 NO cont_neg PARA QUE NÃO SOBREESCREVA
      }                                             // NA PRÓXIMA VERIFICAÇÃO
      else                                          // SÓ ENTRARÁ NESSE BLOCO NÚMEROS POSITIVOS;
      {
        vp[cont_pos] = v[cont];                     // ADICIONA NUMEROS POSITIVOS NO VETOR vp[] A PARTIR...
        cont_pos++;                                 // .. DO VETOR DE ENTRADA |
                                                    // INCREMETA +1 O CONTADOR DE POS PARA NAO SOBREESCREVER
  };
};

    printf("Valores Negativos\n");      // MOSTRA OS VALORES DO VETOR DE NUMEROS NEGATIVOS
    for ( int cont = 0; cont < cont_neg ; cont++)
    {
    printf(" %d  ",vn[cont]);
    };
                                        // MOSTRA OS VALORES DO VETOR DE NUMEROS POSITIVOS
    printf("\nValores Positivos\n");
    for ( int cont = 0; cont < cont_pos ; cont++)
    {
      printf(" %d ",vp[cont]);

    };
    printf("\n\n");

  return 0;
}
