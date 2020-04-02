#include<stdio.h>
#include<stdlib.h>
#define MAXIMO 9 // CONSTANTE PARA O VETOR 

int main(){
	 					// DECLARAÇÃO DE VARIAVEIS, i = contador para percorrer todo o vetor, j = contador de teste para o numero primo  
	int i,cont,j; 				// DECLARAÇÃO DO VETOR 
	int num[MAXIMO]; 			// cont = USADA PARA CALCULAR QUANTOS NUMEROS TEM NO VETOR, resto = USADA PARA SOMAR QUANTAS VEZES O RESTO É 0.		
	int resto=0 ;	
	for ( i = 0 ; i < MAXIMO; i++)		// FUNÇÃO PARA FAZER A LEITURA DO VETOR 
	{
		printf("Digite Um Dado Para o Vietor: ");
		scanf("%d",&num[i]);
	} ;	// FIM LEITURA VETOR
       system("clear");	
	cont =0;
	for ( i = 0; i < MAXIMO ; i++)       	// FUNÇÃO PARA PERCORRER TODOS OS INDICES DO VETOR PARA VERIFICAÇÃO SE É PRIMO OU NÃO 
	{
		resto = 0;			// USADA PARA CONTAR QUANTAS VEZES O RESTO DA DIVISÃO vetor[i]%i FOR ZERO 
		for ( j=1;j<=num[i];j++)	// LOOP PARA VERIFICAÇÃO DE OS DADOS NO VETOR SÃO PRIMOS 
		{
		if (num[i]%j == 0) 		// IF O RESTO DE vetor[i]%j, 
			resto++;		// ACRESCENTA 1  NA VARIAVEL resto
		
		};		// END DO IF
		
		if ( resto==2) 			// IF resto == 2, SIGNIFICA QUE O NUMERO É PRIMO, DIVISIVEIS POR 1 E ELE MESMO.
		{
			printf("\nO numero eh primo : %d, Indice: %d ",num[i],i); 	// IMPRIME O NUMERO PRIMO E SEU INDICE. 
			
			cont++;								// ACRESCENTA 1 VA VARIAVEL cont= QUANTIDADE DE NUMEROS PRIMOS.	
		};// END IF 
		
	}; // END FOR 	
		printf("\nQuantidade de Numeros Primos : %d\n\n",cont); 

	return 0;
} // END MAIN 
