//é um recuros  na  linguagem C ao qual conseguimos guardar enderecos seja de uma variavel 
//uma struct ou uma informação que esta armazenada na memoria ram 

#include <stdio.h>
	
	int *p; //ponteiro 
	int val= 5; 

int main(){
	p = &val; //p esta apontando para a varivel val 
	printf ("O valor apontado por 'p' e %d", *p);
	return 0;
}
