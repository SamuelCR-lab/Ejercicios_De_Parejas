#include <stdio.h>
#include <stdlib.h>

int main(){
	char dias[7][11] = {"Lunes", "Martes", "Míercoles", "Jueves", "Viernes", "Sábado", "Domingo"}; //**Este array guarda el número de carácteres y el máximos de espacios que ocupan las palabras//
	float temperatura [7];	
	float suma = 0;
	float promedio = 0;
	float temp_max = 0;
	float temp_min = 200;
	int guardar_dia;
	int contador_max = 0;
	int contador_min = 0;

	printf("Introduce la temperatura promedio de cada dia de la semana\n");
	for (int i = 0; i < 7; i++){
	printf(" %s\n",dias[i]);
	scanf(" %f",&temperatura[i]);
	suma += temperatura[i];
	
	}
	promedio = suma/7;            //Para calcular el promedio, lo que hemos hecho es la suma de la temperatura de los 7 días y luego dividrla entre 7 y así lo obtenemos.//           
	printf("Temperatura promedio de la semana: %f°C\n",promedio);
	for(int i = 0; i < 7 ; i++){
		if (temp_max < temperatura[i]){
			temp_max = temperatura[i]; 
		        guardar_dia = i;
		}
	}
	printf("Temperatura máxima: %f°C el día %s\n",temp_max,dias[guardar_dia]);
	for(int i = 0; i < 7; i++){
		if (temp_min > temperatura[i]){
			temp_min = temperatura[i]; 
		        guardar_dia = i;
		}
	}

	for(int i = 0; i < 7; i++){
		if (temperatura [i] > promedio) //La temperatura por encima del promedio se obtiene poninendo que la temperatura es mayor que éste.//
			contador_max++;
	}	
	
	for(int i = 0; i < 7; i++){
		if (temperatura [i] < promedio)
			contador_min++;
	}

	printf("Temperatura mínima: %f°C el día %s\n",temp_min,dias[guardar_dia]);          //* Cada printf contiene la respuesta final y dónde tiene que buscarla. Además, en este caso, como es un array hemos 
	printf("Número de días con temperaturas superiores al promedio: %d\n",contador_max);//* puesto en qué parte del array tiene que buscarla.
	printf("Días con temperaturas por debajo del promedio: %d\n",contador_min);

	for(int i = 0; i < 7; i++){
		if (temperatura[i] < promedio)
			 printf("%s: %f°C\n",dias[i],temperatura[i]);
	}
return 0;
}
