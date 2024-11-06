#include <stdio.h>
#include <stdlib.h>
/**
 *
 *	Autores: Samuel Carías y Daniel Trapero
 * 
 */

struct notas{
	char nombre [40];
	float notas_finales;
};


int main (){
	int num_estudiantes = 0;
	float suma = 0;	
	float promedio = 0;	
	struct notas Estudiantes[200];
	printf("Introduce el nombre y la nota final de cada estudiante: \n");
	scanf(" %d",&num_estudiantes);
	for (int i = 0; i < num_estudiantes; i++){
	printf("Nombre del estudiante: ");
	scanf(" %s",Estudiantes[i].nombre);
	printf("Nota final del estudiante: ");
	scanf(" %f",&Estudiantes[i].notas_finales);

	suma += Estudiantes[i].notas_finales;
	
	}

	promedio = suma/num_estudiantes;
	printf("Nota promedio de la clase: %f\n",promedio);

#define Limite_nota_aprobado 5.0
struct notas aprobadas = 10;
for (int i =0, ){
	printf("La nota es:", &nota);
	scanf (


return EXIT_SUCCESS;
}
