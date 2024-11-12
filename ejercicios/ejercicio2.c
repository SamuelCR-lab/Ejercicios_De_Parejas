#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char nombres[10][15] = {"Juan","Roberto","Dani","Carlos","Leonardo","Kevin","Marcos","Samu","Jose","Antonio"};
	char letra[2]= "a";
	int resultado = 0;
	printf("Las siguientes palabras no tienen la letra a.");
	for (int i = 0; i < 10; i++){
		resultado = strcmp(nombres[i][j], letra);
		for (int j = 0; j != '\0'; j++)

		if (resultado == 0){
		continue;
		}
		printf("%s\n",nombres[i]);
	}

 return EXIT_SUCCESS;	
}
