#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
	
	float x;
	float y;
	struct ponto *prox;
	
}Ponto;

Ponto *listaPontos;//aponta p 1°elemento da ista

void addFirst(float x, float y){
	
	Ponto *p = (Ponto*)malloc(sizeof(Ponto));
	p->x=x;
	p->y=y;
	p->prox= listaPontos;
	listaPontos = p;
	
}

void addLast(float x, float y){
	
	Ponto *p = (Ponto*)malloc(sizeof(Ponto));
	p->x=x;
	p->y=y;
	p->prox =NULL;
	if (listaPontos == NULL){
		listaPontos = p;
	}else{
		Ponto *listaAux = listaPontos;
		while(listaAux->prox!=NULL){
			listaAux = listaAux -> prox;
		}
		listaAux->prox = p;
	}
	
}

void imprime(Ponto *p){

	if (p!=NULL){
		printf("\nPonto(%.1f, %.1f)", p->x, p->y);
		imprime(p-> prox);
	}
}

int main(){
	
	addFirst(1,4);
	addFirst(2,7);
	addFirst(8,9);
	addLast(1,1);
	
	Ponto *auxLista = listaPontos;
	imprime(auxLista);
	
	return 0;
}
