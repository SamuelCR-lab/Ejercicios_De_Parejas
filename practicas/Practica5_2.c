#include <stdio.h>
#include <stdlib.h>

/**
 *
 *	Autores: Samuel Carías y Daniel Trapero
 * 
 */
#define APROBADO 5.0
struct notas{
	char nombre [40];
	double notas_finales;
};


int main (){
	int num_estudiantes = 0;
	int aprobados = 0;
	int suspensos = 0;
	float suma = 0;	
	float promedio = 0;
	int nota_max=0;
	int nota_min=10;	
	printf("Introduce el numero de estudiantes: \n");
	scanf(" %d",&num_estudiantes);
	struct notas Estudiantes[num_estudiantes];
	for (int i = 0; i < num_estudiantes; i++){
		printf("Nombre del estudiante: ");
		scanf(" %s",Estudiantes[i].nombre);
		printf("Nota final del estudiante: ");
		scanf(" %lf",&Estudiantes[i].notas_finales);
		if (Estudiantes[i].notas_finales >= APROBADO){
			aprobados = aprobados + 1;
		}else{
			suspensos = suspensos + 1;
		}
		suma += Estudiantes[i].notas_finales;

		for(int i = 0; i < num_estudiantes; i++){

			if (nota_min < Estudiantes[i])
				nota_min = nota[i];
		}

		for(int i = 0; i < num_estudiantes; i++){
			if (nota_max > promedio)
				nota_max++;
		}	

		for(int i = 0; i < num_estudiantes; i++){
			if (Estudiantes[i] > promedio)
				nota_min++;
		}	
	}

	promedio = suma/num_estudiantes;
	printf("Nota promedio de la clase: %f\n",promedio);
	printf("El número de alumnos aprobados es: %d\n", aprobados);
	printf("El número de alumnos suspensos es: %d\n", suspensos);
<<<<<<< HEAD











return EXIT_SUCCESS;
=======
	printf("Nota máxima: %d\n el alumno \n",nota_max);
	printf("Nota mínima: %d\n el alumno \n",nota_min);
	printf("Notas por encima del promedio: %d\n",nota_max);
}
	return EXIT_SUCCESS;
>>>>>>> 8e77255269cfad614c74a3bcf65724a2b7615e55
}
