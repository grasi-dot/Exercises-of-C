#include <stdio.h>

int main(){
	int a = 0;
	printf("\nwhile\n");
	while(a < 5){
		printf("\nvariavel a e: %d",a);
		a++;
	}
	printf("\n\nfor\n");
	//inicializar, teste, incremento
	for(int i = 0; i < 4; i++){
		printf("\nvariavel i e: %d",i);
	}
}
