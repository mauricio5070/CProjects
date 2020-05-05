

#define TAMLINEA    100
#define TAMELEMENTO 50
#define TAMARCHIVO    50000
#define archivoLibros "libros.txt"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* abrirArchivo(char* nombre, char* modo){
    FILE* archivo;
    
    archivo = fopen(nombre, modo);
    if(archivo == NULL){
        printf("Error al abrir el archivo\n");
    }
    
    return archivo;
}

// cierra un archivo
void cerrarArchivo(FILE* archivo){
    if (fclose(archivo) != 0){
        printf("Error al cerrar el archivo\n");
    }
}
void guardarLibros(FILE* archivo, int id){
    
    fopen(archivo,"a");
    fputs(id,archivo);
    fclose(archivo);
}
int contarLineas(FILE* archivo){
    int contador = 0;
    char linea[TAMLINEA];
    
    while(fgets(linea, TAMLINEA, archivo) != NULL){
        contador++;
    }
    
    return contador;
}
void guardarElementos(FILE* archivo, int id, char nombre[30]){
    
    fprintf(archivo, "%i-%s", id,nombre);
    
}

int main(int argc, char** argv) {
   
    
FILE* archivo;  
int id;
char nombre[30];
char opcion[4];
 
 
  
do{
       
       printf("1. Agregar libros\n");
       printf("0. Regresar\n\n");
       printf("Ingrese la opcion: ");
       opcion[0]=getchar();
       
       switch(opcion[0]){
           
           case '1':    
           
archivo = abrirArchivo(archivoLibros, "r");
if(archivo != NULL){
  id=contarLineas(archivo)+1; 
  cerrarArchivo(archivo);
     }
 printf("Digite el nombre del libro\n");
 //scanf(fgets(nombre,30,stdin),nombre);
 scanf("%s",nombre);
archivo = abrirArchivo(archivoLibros, "a");
                if(archivo != NULL){
                    guardarElementos(archivo, id,nombre);
                    cerrarArchivo(archivo);
                
                }
            break;
                
       }
}while(opcion!='3');
   
//system("pause");
//system("cls");

    return(EXIT_SUCCESS);

}
