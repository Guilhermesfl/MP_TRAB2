/**
	\mainpage
	\author Guilherme da Silva Fontes Lopes
	\date Realease: 23/09/2016
*/

#include "FUNC.h"
#include <stdio.h>

/** \brief Função principal de conversão de algarismos romanos para arábicos.*/
int CONVERTE_ROMANO(const char *num_romano){

	/**
		\details A função converte os algarismos seguindo um padrão que os mesmos apresentam.
		\param num_romano contém os algarismos romanos.
		\param num_arabe contém os algarismos arábicos.
		\return Retorna o número em algarismos romanos convertido para algarismos arábicos.

	*/

	int i=0,num_arabe = 0;
	while(num_romano[i]){
		if(num_romano[i] == 'I'){
			if(num_romano[i+1] != 'I' && (num_romano[i+1])) num_arabe -= 1;
			else num_arabe += 1;	
		}
		else if (num_romano[i] == 'X'){
			if((num_romano[i+1] == 'C') || (num_romano[i+1] == 'L')) num_arabe -= 10;
			else num_arabe += 10;
		}
		else if (num_romano[i] == 'C'){
			if((num_romano[i+1]) == 'M' || (num_romano[i+1] == 'D')) num_arabe -= 100;
			else num_arabe += 100;
		}
		else if (num_romano[i] == 'D') num_arabe += 500;
		else if (num_romano[i] == 'V') num_arabe += 5;
		else if (num_romano[i] == 'L') num_arabe += 50;
		else num_arabe += 1000;
		
		i++;
	}
	return num_arabe;
};

/** \brief Função responsável por verificar a validade dos algarismos inseridos.*/
int	 VERIFICA_ROMANO(const char *num_romano){

	/**
		\details Função utiliza o padrão presente nos números romanos para verificar a validade dos algarismos inseridos
		\param num_romano contém os algarismos romanos.
		\param i Variável que representa a flag de validade.
		\return -1 indica que o a invalidez do número e 0 a validez

	*/

	int i=0;
	while(num_romano[i]){
		if(num_romano[i] != 'I' && num_romano[i] != 'X' && num_romano[i] != 'C'
			&& num_romano[i] != 'L' && num_romano[i] != 'V' && num_romano[i] != 'M'
			&& num_romano[i] != 'I') return -1;
		else if(num_romano[i] == num_romano[i+1] && num_romano[i] == num_romano[i+2] && num_romano[i] == num_romano[i+3]
			&& (num_romano[i+1]) && (num_romano[i+2]) && (num_romano[i+3])) return -1; 
		else if (num_romano[i] == 'D' && num_romano[i+1] == 'M' && (num_romano[i+1])) return -1;
		else if ((num_romano[i] == 'X' && num_romano[i+1] == 'D') || (num_romano[i] == 'X' && num_romano[i+1] == 'M')
				&& (num_romano[i+1])) return -1;
		else if ((num_romano[i] == 'I' && num_romano[i+1] != 'X') && (num_romano[i] == 'I' && num_romano[i+1] != 'V')
		 		&& (num_romano[i] == 'I' && num_romano[i+1] != 'I') && (num_romano[i+1]))  return -1;
		else if ((num_romano[i] == 'L' && num_romano[i+1] == 'D') || (num_romano[i] == 'L' && num_romano[i+1] == 'M')
				||(num_romano[i] == 'L' && num_romano[i+1] == 'L') && (num_romano[i+1])) return -1;
		else if ((num_romano[i] != 'X') && (num_romano[i] != num_romano[i+1]) && (num_romano[i] == num_romano[i+2])
				&& (num_romano[i+1]) && (num_romano[i+2])) return -1;
		i++;
	}
	return 0;
}