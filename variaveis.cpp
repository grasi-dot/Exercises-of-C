#include <stdio.h>

int a = 5; //tipo inteiro
float b = 2.3; //decimais
double c = 4.6; //tbm suporta valores reias mas é mais preciso
char d = 't';

int main(){
	printf("O valor de 'a': %d\n",a);
	printf("O valor de 'b': %.2f\n",b);//esse ponto entre é para dizer quantas casas decimais
	printf("O valor de 'c': %d\n",c);
	printf("O valor de 'd': %c\n",d);
	return 0;
}
