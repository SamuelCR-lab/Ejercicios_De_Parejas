#include <stdio.h>
#include <stdlib.h>

/**
 *
 *	Autores: Samuel Carías y Daniel Trapero
 * 
 */
struct {
	char nombre [40];
	double notas_finales;
};


int main (){
	int num_estudiantes = 0;
	int aprobados = 0;
	int suspensos = 0;
	float suma = 0;	
	float promedio = 0;
	float nota_max=0;
	float nota_min=10;	
	int posicion_min=0;
	int posicion_max=0;
	int posicion=0;
	printf("Introduce el numero de estudiantes: ");
	scanf("%d",&num_estudiantes);
	struct notas Estudiantes[num_estudiantes];
	for (int i = 0; i < num_estudiantes; i++){
		printf("Nombre del estudiante: ");
		scanf("%s",Estudiantes[i].nombre);
		printf("Nota final del estudiante: ");
		scanf("%lf",&Estudiantes[i].notas_finales);
			if (Estudiantes[i].notas_finales >= APROBADO){
				aprobados = aprobados + 1;
			}else{
				suspensos = suspensos + 1;
			}
			suma += Estudiantes[i].notas_finales;
			}		
			promedio = suma/num_estudiantes;
	
			for(int i = 0; i < num_estudiantes; i++){
				if (nota_min > Estudiantes[i].notas_finales)
					nota_min = Estudiantes[i].notas_finales;
				}

			for(int i = 0; i < num_estudiantes; i++){
				if (nota_max < Estudiantes[i].notas_finales)
					nota_max = Estudiantes[i].notas_finales;
				}	

	printf("Nota promedio de la clase: %f\n",promedio);
	printf("El número de alumnos aprobados es: %d\n", aprobados);
	printf("El número de alumnos suspensos es: %d\n", suspensos);
	printf("Nota máxima: %f\n (el alumno en la posicion %d)",nota_max,posicion_max);
	printf("Nota mínima: %f\n (el alumno en la posicion %d)",nota_min,posicion_min);

			for(int i = 0; i < num_estudiantes; i++){
				if (Estudiantes[i].notas_finales > promedio)
				printf("Estudiante en la posicion %d: %lf\n",posicion,Estudiantes[i].notas_finales);}



return EXIT_SUCCESS;
	printf("Nota máxima: %d\n el alumno \n",nota_max);
	printf("Nota mínima: %d\n el alumno \n",nota_min);
	printf("Notas por encima del promedio: %d\n",nota_max);
}
	return EXIT_SUCCESS;
}
