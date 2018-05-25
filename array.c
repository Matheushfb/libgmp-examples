#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>


int main(int argc,char **argv[]){
	int len; //variavel que armazenaráo tamanho do array
	printf("entre com o tamanho do array: "); 
	scanf("%d",&len); //inserindo o tamanho do array
	printf("array de %d posicoes\n", len); 


	//criando um array e alocando a memoria de acordo com dimensao desejada recebida na variavel len
	mpz_t *array;
	array = malloc(sizeof(mpz_t)*len);

	//Inicializando todas as posicoes do array
	for(int i=0; i<len ; i++){
		mpz_init(array[i]);
	}
	
	/*
	 * Percorendo e atribuindo o valor de i a cada posicao do array.
	 * Neste trecho, percorro o array pegando a variavel de incremento
	 *  do tipo inteiro e atribuo a posicao do array do tipo mpz_t.
	*/
	for(int i=0; i<len; i++){
		mpz_set_ui(array[i],i); 
	}
	
	
	//printando o array.
	for(int i=0; i<len; i++){
		gmp_printf( "%Zd " ,array[i]);
	}
	printf("\n");
	
	//Liberando a memoria alocada pelo array
	for(int i=0; i<len; i++){
		mpz_clear(array[i]);
	}
}
