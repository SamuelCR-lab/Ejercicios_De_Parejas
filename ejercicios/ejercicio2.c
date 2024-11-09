#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contiene_letra(char nombre, char letra) {
	for (int i = 0; nombre[i] != '\0'; i++){
		if (nombre[i] == letra){
			return 1;
		}
		return 0;
	}
}

int main(){
	int nombres[10];
	char nombre[] = {"andrea","rodrigo","samuel","jose","daniel","ruben","lucia","kevin","pedro","lucas"};
	char letra = 'a';
	printf("Las siguientes palabras no tienen la letra a.");
	for (int i = 0; i < 10; i++){
		nombre [i] = nombres [i];
		if (contiene_letra(nombres[i],letra)){
		continue;
		}
		printf("%d\n",nombres[i]);
	}

 return EXIT_SUCCESS;	
}
