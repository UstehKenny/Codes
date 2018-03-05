#include <stdio.h>


typedef struct{
	int clave;
	char *nombre;
	float precio;
	
}Producto;

typedef struct{
	int clave;
	char *categoria;
	Producto productos[25];	
}SeccionT;

typedef struct{
	char *nombre;
	char *zona;
	SeccionT secciones[10];
}TiendaDep;

int i,n;
char r;

TiendaDep arr1[5];
SeccionT arr2[5];
Producto arr3[5];

void crearTienda(TiendaDep*);
void crearSeccion(SeccionT*);
void crearProducto(Producto*);
void mostrarTiendas();
void mostrarSecciones();
void mostrarProductos();

main(){
	int s;	
	r = 's';
	
//	do{
	puts("Seleccione una opcion");
	puts("1.Crear Tienda");
	puts("2.Crear Seccion");
	puts("3.Crear Producto");
	puts("4.Mostrar Productos");
	puts("5.Mostrar Secciones");
	puts("6.Mostrar Tiendas");
	puts("7.Asignar Productos a Seccion");
	puts("8.Asignar seccion a tiendas");
	puts("9.Salir");
	
	scanf("%d",&s);
	
	switch(s){
		case 1:
			puts("Tiendas a ingresar: ");
			scanf("%d",&n);			
			crearTienda(arr1);
			break;
			
		case 2:
			puts("Secciones a ingresar: ");
			scanf("%d",&n);			
			crearSeccion(arr2);			
			break;
			
		case 3:
			puts("Productos a ingresar: ");
			scanf("%d",&n);			
			crearProducto(arr3);			
			break;
			
		case 4:
			puts("~~~~~~~~~Productos~~~~~~~~~");
			puts("");
			mostrarProductos();
			break;
			
		case 5:
			puts("~~~~~~~~~Secciones~~~~~~~~~");
			puts("");
			mostrarSecciones();
			break;
			
		case 6:
			puts("~~~~~~~~~Tiendas~~~~~~~~~");
			puts("");
			mostrarTiendas();
			break;
			
		case 7:
			break;	
		
		case 8:
			break;
	
		case 9:
			break;
		
		default:
			puts("Invalido");
			break;	
	}
//	puts("Desea realizar otra opcion: s/n");
//	scanf("%c",&r);
//	getchar();		
  //}while(r == 's');

	
}

void crearTienda(TiendaDep arr1[n]){
	int n1;
	for(i=0;i<n;i++){
		TiendaDep crearT;
		puts("Ingrese nombre de la tienda");
		setbuf(stdin, NULL);
		scanf("%[^\n]*%c",&crearT.nombre);
		getchar();
		puts("Ingrese zona");
		scanf("%[^\n]*%c",&crearT.zona);
		getchar();
		puts("Numero de secciones:");
		scanf("%d",&n1);
		getchar();
		for(i=0;i<n1;i++){
			puts("Ingrese nombre de la Seccion");
			scanf("%[^\n]*%c",&crearT.secciones[i]);
		}
	}	
	
}

void crearSeccion(SeccionT arr2[n]){
	for(i=0;i<n;i++){
		SeccionT crearS;
		puts("Ingrese la categoria");
		setbuf(stdin, NULL);
		scanf("%[^\n]*%c",crearS.categoria);
		puts("Ingrese la clave");
		scanf("%d",crearS.clave);
	}
}

void crearProducto(Producto arr3[n]){
		for(i=0;i<n;i++){
		Producto crearP;
		puts("Ingrese nombre del Producto");
		setbuf(stdin, NULL);
		scanf("%[^\n]*%c",crearP.nombre);
		puts("Ingrese la clave del Producto");
		scanf("%d",crearP.clave);	
		puts("Ingrese el precio del Producto");
		scanf("%f",crearP.precio);
	}
}

void mostrarTiendas(){
	for(i=0;i<n;i++){
		printf("TIENDA: %s\n",arr1[i].nombre);
		printf("ZONA: %s\n",arr1[i].zona);
	}
}

void mostrarSecciones(){
	
}

void mostrarProductos(){
	
}

