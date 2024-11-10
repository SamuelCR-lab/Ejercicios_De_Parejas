#include <stdio.h>
#include <stdlib.h>

/**
 *
 *	Autores: Samuel Carías y Daniel Trapero
 * 
 */
#define APROBADO 5.0
struct inventario{
	char nombre [20];
	int cantidad;
};


int main (){
	int productos = 0;
	int contador = 0;
	int con_inventario = 0;
	char reabastecer [3];
	char nombre [20];	
	int aniadir = 0;
	int posicion_max=0;
	int posicion=0;
	printf("Ingrese el número total de productos que desea gestionar (máximo 10): ");
	scanf("%d",&productos);
	struct inventario tienda[productos];
	for (int i = 0; i < productos; i++){
		printf("Ingrese el nombre del %d producto: ",++contador);
		scanf("%s",tienda[i].nombre);
		printf("Ingrese la cantidad del %d producto en stock: ",contador);
		scanf("%d",&tienda[i].cantidad);
		}
		printf("Inventario Completo:\n");
	for (int i = 0; i < productos; i++){
		printf("Producto %d: %s - %d unidades\n",++con_inventario,tienda[i].nombre,tienda[i].cantidad);
	}
	for (int i = 0; i < productos; i++){
		printf("¿Desea reabastecer algún producto? (sí/no):");
		scanf("%s",reabastecer);
		if (reabastecer == "no"){
			return 0;
		}
		printf("Ingrese el nombre del producto: ");
		scanf("%s",nombre);
		if (nombre == tienda[i].nombre){
		printf("Cantidad a añadir: ");
		scanf("%d",&aniadir);
		tienda[i].cantidad = tienda[i].cantidad + aniadir;
		continue;
		}

	}	

return EXIT_SUCCESS;
}

