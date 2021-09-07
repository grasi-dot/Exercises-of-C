//estructs sao as estruturas por meio das quais poderemos 
//afrupam determinados tipos de dados detro de uma unica estrurura
//possuem atrubutos q são as variaveis dentro dela

#include <stdio.h>
struct pessoa {
	//aggrupa varias informacoes de uma entidade
	int idade;
	float altura;
};

typedef struct pessoa Pessoa;//define ou redefine tipos de dados

int main(){
	
	Pessoa p;
	p.idade = 5;
	p.altura = 1.65;
	
	printf("A altura da pessoa e: %.2f", p.altura);
	printf("\nA idade da pessoa e: %.d", p.idade);
	return 0;
	
}
