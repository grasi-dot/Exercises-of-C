#include <stdio.h>
#include <stdlib.h> //padrao que ha o malloc

struct ponto{
	
	float x;
	float y;
};

typedef struct ponto Ponto;

int main(){
	//malloc aloca dinamicamente um espaço em memoria
	//sizeof é o tamanho
	//depois o tipo de dado que queremos alocar
	
	Ponto *p = (Ponto*)malloc(sizeof(Ponto));//alocada na memoria hip
	p->x = 1;
	p->y = 5;
	printf("Ponto = (%f,%f)",p->x,p->y );
	
	
	return 0;
}
