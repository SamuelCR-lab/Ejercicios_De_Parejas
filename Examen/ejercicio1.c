#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//Declaramos el Char inventario que es un array donde se contiene los datos de un almacen, siendo estos la ubicacion Continentes (America 0 y Europa 1), Cuantas Sedes (3)
	//los dispositivos (4)(Televisores=0,  los modelos (5) y los lotes que contienen (10). Debido a esto lo igualamos a 0 para que cada uno de eellos se inicialize en 0 
	int inventario[2][3][4][5][10] = {0};

	//Aqui declaramos cuantos productos tenemos en un inventario en que continente, sede, tipo de producto, modelo y lote. 
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

	//Añadido de Examen: 200 unidades del décimo lote ([9] se debe a que se empieza a contar en 0 y el 9 seria el ultimo lote "10") de modelo mas basico ([0] ya que hay 5 modelos) de televisores ([0] debido a que es el primer producto del inventario) en la sede intermedia ([1] ya que son 3)de Europa.
	int incremento = 0; //creamos esta variable incremento donde se almacenaran las unidades que quiere agregar el usuario
	inventario[1][1][0][0][9] = 200;
	
	printf("Cantidad en Europa almacenados en la sede intermedia, Televisores, modelo basico, perteneciente al lote 10: %d unidades\n",inventario[1][1][0][0][9]);
	printf("Cantidad de dispositivos para incrementar las 200 unidades de televisores antes mostrados: ");
	scanf("%d",&incremento);
	inventario[1][1][0][0][9] += incremento;//Le agregamos un + al = para que se sume la variable incremento a inventario y se guarde ahi ese valor nuevo 
	printf("Cantidad nueva de televisores en Europa almacenados en sede intermedia, el modelo basico, perteneciente al lote 10: %d unidades\n",inventario[1][1][0][0][9]);


return EXIT_SUCCESS;	
}
