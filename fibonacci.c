#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>



int main(int argc, char **argv[]){
	/*
	 * Criando e inicializando a varialvel do tipo inteira 
	*/
	mpz_t var; 
	mpz_init(var);
	
	mpz_fac_ui(var,100); // Funcao que calcula o fatorial so numero 100

	gmp_printf("Fatorial de 100 e: %Zd \n", var ); // Imprimindo a variavel do tipo mpz_t

	mpz_clear(var); //Limpando a variavel que foi alocada na memoria
}

