#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *	Autores: Samuel Carías y Daniel Trapero
 * 
 */
#define BAJO_STOCK 5.0
struct inventario{
	char nombre[20];
	int cantidad;
};


int main (){
	int productos = 0;
	int contador = 0;
	int con_inventario = 0;
	char reabastecer[3];
	char comparacion[3] = "si";
	char nombre1[20];	
	int aniadir = 0;
	char buscar[20];
	int resultado;
	int resultado1;
	int resultado2;
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
		printf("¿Desea reabastecer algún producto? (si/no): ");
		scanf("%s",reabastecer);
		resultado = strcmp(reabastecer, comparacion);
	if (resultado == 0){
			printf("Ingrese el nombre del producto: ");
			scanf("%s",nombre1);
			resultado1 = strcmp(nombre1, tienda[i].nombre);
			if (resultado1 == 0){
			printf("Cantidad a añadir: ");
			scanf("%d",&aniadir);
			tienda[i].cantidad = tienda[i].cantidad + aniadir;
			}
		
		for (int i = 0; i < productos; i++){
			if (tienda[i].cantidad <= BAJO_STOCK){
			printf("%s - %d\n",tienda[i].nombre,tienda[i].cantidad);
				}
			}	
		for (int i = 0; i < 1; i++){
			printf("Ingrese el nombre del producto a buscar: ");
			scanf("%s",buscar);
			resultado1 = strcmp(buscar, tienda[i].nombre);
			if (resultado2 == 0){
			printf("Cantidad en stock: %d unidades\n",tienda[i].cantidad);
				}
			}		
	}else{
		for (int i = 0; i < producto; i++){
			if (tienda[i].cantidad <= BAJO_STOCK){
			printf("%s - %d\n",tienda[i].nombre,tienda[i].cantidad);
				}
			}		
		for (int i = 0; i < 1; i++){
			printf("Ingrese el nombre del producto a buscar: ");
			scanf("%s",buscar);
			resultado2 = strcmp(buscar, tienda[i].nombre);
			if (resultado2 == 0){
			printf("Cantidad en stock: %d unidades\n",tienda[i].cantidad);
				}
			}
		return 0;	
		}
	}
return EXIT_SUCCESS;
}

