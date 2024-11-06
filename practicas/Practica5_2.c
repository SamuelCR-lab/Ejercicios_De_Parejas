#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autores: Samuel Carías y Daniel 
 * 
 */

struct notas{
	char nombre [40];
	float notas_finales;
};


int main (){
	float suma = 0;	
	float promedio = 0;	
	struct notas Estudiantes[10];
	printf("Introduce el nombre y la nota final de cada estudiante: \n");
	for (int i = 0; i <3 ; i++){
	Estudiantes[i] = Estudiantes [i];
	printf("Nombre del estudiante: ");
	scanf(" %s",Estudiantes->nombre);
	printf("Nota final del estudiante: ");
	scanf(" %f",&Estudiantes->notas_finales);

	suma += Estudiantes->notas_finales;
	
	}
	promedio = suma/3;
	printf("Nota promedio de la clase: %f\n",promedio);
return EXIT_SUCCESS;
}
