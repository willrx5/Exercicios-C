#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#define PROD 5 // CONSTANTE QUANTIDADES DE PRODUTOS = TAMANHO DO VETOR ;
		
		// DECLARAÇÃO DE VARIÁVEIS 
int vendedor, t_prod, q_prod[PROD],cont  ; // vendedor, t_prod= TIPO DO PRODUTO, q_prod = QUANTIDADE DO PRODUTO, cont = CONTADOR PARA OS LOOPS; 
float salario, com, p_prod[PROD]  ; // salario; com = COMISSÃO 5% DAS VENDAS, p_prod = PREÇO DO PRODUTO;
int q_vendida; // QUANTIDADE DE PRODUTOS VENDIDOS
float v_total;
int p_mais;// v_total = VALOR TOTAL DAS VENDAS, p_mais = PRODUTO MAIS VENDIDO 
int main()
{  // FUNÇÃO PRINCIPAL
	
	for ( cont = 0; cont <=PROD ; cont++) 	// FOR LEITURA PREÇOS DOS PRODUTOS; 
	{
		printf("Digite o Preço do Produto: ");
		scanf("%f",&p_prod[cont]);
	};					// FIM LEITUR PREÇOS DOS PRODUTOS;
    
	for ( cont = 0; cont <=PROD ; cont++)	// FOR LEITURA DA QUANTIDADE DOS PRODUTOS; 
	{	
		printf("Digite a Quantidade do Produto: ");
		scanf("%d",&q_prod[cont]);
	}; 					// FIM LEITURA DA QUANTIDADE DOS PRODUTOS;
	
	//****************************** OK ********************************************************************* 
					// VERIFICAÇÃO DOS DADOS DIGITADOS 
	for ( cont = 0; cont < PROD; cont++)  
	{
//		printf(" O valor : %2.2f -  I %d : Quantidade :%d - I %d \n",p_prod[cont],cont,q_prod[cont],cont);
//		printf("\n A quant : %d       Indice %d :",q_prod[cont],cont);
//		printf(" Valor : %2.2f - Quantidade : %d \n", p_prod[cont],q_prod[cont]);
	};
//      ********************************** OK *********************************************************************
	system("clear");		
						//  VALOR UNITARIO DE CADA PRODUTO
	p_mais = q_prod[0];
	printf("*** PRECO  POR  PRODUTO ***\n\n");  
	for ( cont = 0 ; cont < PROD; cont++)
	{	
		 
		 q_vendida += q_prod[cont]; 					// QUANTIDADE TOTAL DE PRODUTOS VENDIDOS =  SOMA DOS VALORES DO VETOR q_prod[PROD];
		 v_total +=  q_prod[cont] * p_prod[cont]; 			// VALOR TOTAL DE VENDAS, = PRODUTO x VALOR 
		 printf( "%2.2f      - Produto %d\n",p_prod[cont],cont+1);      // VALOR DE CADA PRODUTO; 
	};

	printf("*** VENDAS  POR  PRODUTO ***\n\n"); 

	for ( cont = 0; cont < PROD; cont++ )
       	{
             printf("Valor %2.2f  X  Quantidade : %d = %2.2f\n",p_prod[cont],q_prod[cont],p_prod[cont]*q_prod[cont]);
     										// VALOR DE VENDAS POR PRODUTO;	     
	};

	// PRODUTO MAIS VENDIDO
	
	for ( cont = 1 ; cont < PROD ; cont++ )
	{
		if (p_mais <  q_prod[cont]) 
			p_mais=q_prod[cont];
};


	
	com = 0.05 * v_total;
	printf("\n\nQuantidade Total de Produtos Vendidos: %d\n",q_vendida);
	printf("O valor da Comissão: %2.2f\n", com);
	printf("O valor total de Vendas: %2.2f\n",v_total); 
	printf("O Produto mais vendido %d \n\n",p_mais);
	
return 0;
}
