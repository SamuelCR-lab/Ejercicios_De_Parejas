#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Declaramos el Char inventario que es un array donde se contiene los datos de un almacen, siendo estos la ubicacion Continentes (America 0 y Europa 1), Cuantas Sedes (3)
	//los dispositivos (4)(Televisores=0,  los modelos (5) y los lotes que contienen (10). Debido a esto lo igualamos a 0 para que cada uno de eellos se inicialize en 0 
	char inventario[2][3][4][5][10] = {0};

	//Con esto expresamos que en America al hacer la Categoria 0, en su priemra sede que es 0, hay de los dispositivos de los cuales el 0 son televisores  
	inventario[0][0][0][0][0] = 155;
	inventario[1][1][1][3][6] = 200;
	inventario[1][0][2][2][5] = 333;
	inventario[1][2][3][4][2] = 200;
	inventario[0][1][4][1][9] = 169;

return EXIT_SUCCESS;	
}
