#include <stdio.h>
#include <stdlib.h>

typedef struct ponto{
	
	float x;
	float y;
	struct ponto *prox;
	
}Ponto;

Ponto *listaPontos;//aponta p 1°elemento da ista

int lenght = 0; //tamanho da lista

void addIndex(float x, float y, int index){
	
	Ponto *p =(Ponto*)malloc(sizeof(Ponto));
	p->x=x;
	p->y=y;
	
	if (index > lenght){
		printf("POSICAO INVALIDA");
	}else{
		if(index == 0){
			p->prox = listaPontos;
			listaPontos = p;
		}else{
			Ponto *listaAux = listaPontos;
			int i =0;
			while(i != 0){
				listaAux = listaAux->prox;
				i++;
			}
			p->prox = listaAux->prox;
			listaAux->prox = p;
		}
		lenght++;
	}
	
}

void imprime(Ponto *p){

	if (p!=NULL){
		printf("\nPonto(%.1f, %.1f)", p->x, p->y);
		imprime(p-> prox);
	}
}

int main(){
	
	addIndex(1,1,0);
	addIndex(2,4,1);
	addIndex(2,5,1);
		
	Ponto *auxLista = listaPontos;
	imprime(auxLista);
	
	return 0;
}
