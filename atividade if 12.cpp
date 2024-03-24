#include <stdio.h>

int main(){
	 int n1;
	 
	 printf("escolha o primeiro numero: ");
	 scanf("%d", &n1);
	 
	 if (n1 >= 0) {
	 	printf ("\n\o quadrado do numero e: %d", n1 * n1);
	 }else{
	 	printf("\n\Numero invalido");
	 }
}
