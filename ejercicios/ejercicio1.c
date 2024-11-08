#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Declaramos el Char inventario que es un array donde se contiene los datos de un almacen, siendo estos la ubicacion Continentes (America 0 y Europa 1), Cuantas Sedes (3)
	//los dispositivos (4)(Televisores=0,  los modelos (5) y los lotes que contienen (10). Debido a esto lo igualamos a 0 para que cada uno de eellos se inicialize en 0 
	int inventario[2][3][4][5][10] = {0};

	//Con esto expresamos que en America al hacer la Categoria 0, en su priemra sede que es 0, hay de los dispositivos de los cuales el 0 son televisores  
	inventario[0][0][0][0][0] = 500;
	inventario[1][1][1][3][6] = 2250;
	inventario[1][0][2][2][5] = 1363;
	inventario[1][2][3][4][2] = 2060;
	inventario[0][1][0][1][9] = 169;
	printf("Cantidad en América, sede 0, Televisores, modelo 0, lote 0: %d unidades\n",inventario[0][0][0][0][0]);
	printf("Cantidad en Europa, sede 1, Teléfonos, modelo 3, lote 6: %d unidades\n",inventario[1][1][1][3][6]);
	printf("Cantidad en Europa, sede 0, Ordenadores, modelo 2, lote 5: %d unidades\n",inventario[1][0][2][2][5]);
	printf("Cantidad en Europa, sede 2, Electrodomésticos, modelo 4, lote 2: %d unidades\n",inventario[1][2][3][4][2]);
	printf("Cantidad en América, sede 1, Televisores, modelo 1, lote 9: %d unidades\n",inventario[0][1][0][1][9]);
return EXIT_SUCCESS;	
}
