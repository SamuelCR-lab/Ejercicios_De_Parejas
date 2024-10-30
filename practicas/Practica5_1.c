#include <stdio.h>
#include <stdlib.h>

int main(){
	char dias[7][10] = {"Lunes", "Martes", "Míercoles", "Jueves", "Viernes", "Sábado", "Domingo"};
	float temperatura [7];	
	float suma = 0;
	float promedio = 0;
	float temp_max = 0;
	float temp_min = 200;

	printf("Introduce la temperatura promedio de cada dia de la semana\n");
	for (int i = 0; i < 7; i++){
	printf(" %s\n",dias[i]);
	scanf(" %f",&temperatura[i]);
	suma += temperatura[i];
	
	}
	for(int i = 0; i < 7 ; i++){
		if (temp_max < temperatura[i])
			temp_max = temperatura[i];
	}

	for(int i = 0; i < 7 ; i++){
		if (temp_min > temperatura[i])
			temp_min = temperatura[i];
	}
				
				
				
	promedio = suma/7;
	printf("%f\n",promedio);
	printf("Temperatura máxima: %f el día \n",temp_max);
	printf("Temperatura mínima: %f el día \n",temp_min);

return 0;
}
