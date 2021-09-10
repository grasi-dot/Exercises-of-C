//recursão é u recurso usado para q possamos percorrer
//estruturas n lineares
//chamada da funcao dentro dela mesma 
#include <stdio.h>

int potencia(int base, int ep){
	
//	potencia();
	if(ep==1){
		return base;
	}

	return base*potencia(base, ep-1);
	
}



int main(){
	
	int v = potencia(2,4);
	printf ("%d", v);
	
	return 0;
}
