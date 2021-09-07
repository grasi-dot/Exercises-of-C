#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
	
	float x;
	float y;
	struct ponto *prox;
	
}Ponto;

Ponto *listaPontos;

void add(float x, float y){
	
	Ponto *p = (Ponto*)malloc(sizeof(Ponto));
	p->x=x;
	p->y=y;
	p->prox= listaPontos;
	listaPontos = p;
	
}

int main(){
	
	add(1,4);
	add(2,7);
	add(8,9);
	
	printf("%.0f", listaPontos->prox ->x);
	printf("\n%.0f", listaPontos ->x);
	
	return 0;
}
