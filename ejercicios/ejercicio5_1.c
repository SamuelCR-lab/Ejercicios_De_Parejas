#include <stdio.h>
#include <stdlib.h>

int main(){
	char dias[7][10] = {"Lunes", "Martes", "Míercoles", "Jueves", "Viernes", "Sábado", "Domingo"};
	float temperatura [7];	
	float suma = 0;
	float promedio = 0;
	float temp_max = 0;
	float temp_min = 200;
	int contador_max = 0;
	int contador_min = 0;

	printf("Introduce la temperatura promedio de cada dia de la semana\n");
	for (int i = 0; i < 7; i++){
		printf(" %s\n",dias[i]);
		scanf(" %f",&temperatura[i]);
		suma += temperatura[i];

	}
	promedio = suma/7;
	printf("Temperatura promedio de la semana: %f°C\n",promedio);
	for(int i = 0; i < 7 ; i++){
		if (temp_max < temperatura[i])
			temp_max = temperatura[i];
	}

	for(int i = 0; i < 7; i++){
		if (temp_min > temperatura[i])
			temp_min = temperatura[i];
	}

	for(int i = 0; i < 7; i++){
		if (temperatura [i] > promedio)
			contador_max++;
	}	

	for(int i = 0; i < 7; i++){
		if (temperatura [i] < promedio)
			contador_min++;
	}

	printf("Temperatura máxima: %f°C el día \n",temp_max);
	printf("Temperatura mínima: %f°C el día \n",temp_min);
	printf("Número de días con temperaturas superiores al promedio: %d\n",contador_max);
	printf("Días con temperaturas por debajo del promedio: %d\n",contador_min);

	for(int i = 0; i < 7; i++){
		if (temperatura[i] < promedio)
			printf("%s: %f°C\n",dias[i],temperatura[i]);
	}
	return 0;
}
