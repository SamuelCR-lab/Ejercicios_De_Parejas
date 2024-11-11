#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int nombres[10];
	char nombre[10] = {"andrea", "rodrigo", "samuel", "jose", "daniel", "ruben", "lucia", "kevin", "pedro","lucas"};
	char letra[10] = "a";
	int resultado = 0;
	printf("Las siguientes palabras no tienen la letra a.");
	for (int i = 0; i < 10; i++){
		nombres[i] = nombre;
		resultado = strcmp(nombres,letra);
		if (resultado == '0'){
		continue;
		}
		printf("%d\n",nombres[i]);
	}

 return EXIT_SUCCESS;	
}
