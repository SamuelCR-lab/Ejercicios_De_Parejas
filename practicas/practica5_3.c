#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *	Autores: Samuel Carías y Daniel Trapero
 * 
 */
#define BAJO_STOCK 5.0
struct inventario{//declaramos este struct para que se almacene en el cada una los productos que dispone nuestro inventario
	char nombre[20];
	int cantidad;
};


int main (){
	int productos = 0;
	int contador = 0;
	int con_inventario = 0;
	int aniadir = 0;
	int resultado = 0;
	int resultado1 = 0;
	char reabastecer[3];
	char comparacion[3] = "si";
	char nombre[20];
	char buscar [20];
	//1. Con esta solicitud de cantidad de productos de inventario
	printf("Ingrese el número total de productos que desea gestionar (máximo 10): ");
	scanf("%d",&productos);
	if (productos > 10){
		printf("El numero máximo de productos es 10\n");
		return 0;
	}else{//Posteriormente declarando un bucle for para el ingreso de productos y cantidades de los mismos
	struct inventario tienda[productos];//llamamos al struct dandole tienda como palabra que lo enlaza con el main
	for (int i = 0; i < productos; i++){
		printf("Ingrese el nombre del %d producto: ",++contador);//Utilizamos el ++ en contador  para que cada vez que se repita el bucle se sume un 1
		scanf("%s",tienda[i].nombre);
		printf("Ingrese la cantidad del %d producto en stock: ",contador);
		scanf("%d",&tienda[i].cantidad);
		}
	//2. Con este print este bucle mostraremos el Inventario Completo:
		printf("Inventario Completo:\n");
	for (int i = 0; i < productos; i++){//esto debido a que cuando creamos el bucle i < productos se repetira hasta un valor antes que tenemos el numero de productos pero como el contador comienza en 0 y no en 1 es que se pone solo < si comenzara en 1 tendria que ser <= 
		printf("Producto %d: %s - %d unidades\n",++con_inventario,tienda[i].nombre,tienda[i].cantidad);//bucle donde se mostra todos los productos del inventario con su respectivo contador y las unidades que disponemos
	}
	//3. Bucle crado para el Reabastecimiento de Productos
	for (int i = 0; i < productos; i++){
		printf("¿Desea reabastecer algún producto? (si/no): ");
		scanf("%s",reabastecer);
		resultado = strcmp(reabastecer, comparacion);//para comparar cadenas de caracteres se necesita usar una variable int para que mediante el uso de strcmp(cadena1 (a comparar), cadena2 (a comparar)) que se obtiene de la libreria <string.h>, si son iguales dan como resultado en int = 0 si son distintas son = 1
		if (resultado == 0){
			printf("Ingrese el nombre del producto: ");
			scanf("%s",nombre);
			printf("Cantidad a añadir: ");
			scanf("%d",&aniadir);
			tienda[i].cantidad = tienda[i].cantidad + aniadir;		
		}else{
		//4. Bucle para mostrar los productos en baja existencia
		for (int i = 0; i < productos; i++){
			if (tienda[i].cantidad <= BAJO_STOCK){ //realizamos una comparacion de la cantidad de existencias de cada uno de los productos con una variable global #define dandole el nombre de BAJO_STOCK
				printf("%s - %d\n",tienda[i].nombre,tienda[i].cantidad);
				}
		//5. Bucle creado para Buscar un Producto por Nombre su nombre y mostrar la cantidad de existencias del mismo
		for (int i = 0; i < productos; i++){
			printf("Ingrese el nombre del producto a buscar: ");
			scanf("%s",buscar);
			resultado1 = strcmp(buscar, tienda[i].nombre);
			if (resultado1 == 0){
				printf("Cantidad en stock: %d unidades\n",tienda[i].cantidad);
			}else{
				printf("Este producto no existe\n");
				break;
				}	
			}
			return 0;
			}
		}
	}
		for (int i = 0; i < productos; i++){
			if (tienda[i].cantidad <= BAJO_STOCK){
				printf("%s - %d\n",tienda[i].nombre,tienda[i].cantidad);
				}
			}
		for (int i = 0; i < productos; i++){
			printf("Ingrese el nombre del producto a buscar: ");
			scanf("%s",buscar);
			resultado1 = strcmp(buscar, tienda[i].nombre);
			if (resultado1 == 0){
				printf("Cantidad en stock: %d unidades\n",tienda[i].cantidad);
			}else{
				printf("Este producto no existe\n");
				break;
			}		
		}
	}
return EXIT_SUCCESS;
}

