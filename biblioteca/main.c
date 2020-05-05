#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#define TAMLINEA    100
#define TAMELEMENTO 50
#define TAMARCHIVO    50000
#define libros "libros.txt"
#define usuarios "usuarios.txt"
#define alquilados "alquilados.txt"
// abre un archivo


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


void guardarLibros(FILE* archivo, int id, char nombre[30]){
    fprintf(archivo, "%i-%s\n",id,nombre);
    
}
void guardarUsuarios(FILE* archivo, int id, char nombre[30],char apellido[30]){
    fprintf(archivo, "%i-%s %s\n",id,nombre,apellido);
    
}
void guardarAlquilados(FILE* archivo,char n[30],char u[30]){
    fprintf(archivo, "El libro %s fue alquilado por %s \n",n,u);
    
}
void imprimirElementos(char* linea){
    char* elemento;
    elemento = strtok(linea, ";");

    while( elemento != NULL ){
        printf("%s ", elemento);

        elemento = strtok(NULL, ";");
    }

    printf("\n");
}

int contarLineas(FILE* archivo){
    int contador = 0;
    char linea[TAMLINEA];
    
    while(fgets(linea, TAMLINEA, archivo) != NULL){
        contador++;
    }
    
    return contador;
}

void imprimirArchivo(FILE* archivo){
    int contador = 1;
    char linea[TAMLINEA];
    
    fseek(archivo, 0, SEEK_SET);
    
    while(fgets(linea, TAMLINEA, archivo) != NULL){
       
            imprimirElementos(linea);
     
        contador++;
    }
}


void eliminarLineaArchivo(char* nombreArchivo, int numLinea){
    int contador = 1;
    char linea[TAMLINEA];
    char contenidos[TAMARCHIVO] = "";
    FILE* archivo;
    
    archivo = abrirArchivo(nombreArchivo, "r");
    fseek(archivo, 0, SEEK_SET);
    while(fgets(linea, TAMLINEA, archivo) != NULL){
        if (contador != numLinea){
            strcat(contenidos, linea);
        }
        contador++;
    }
    cerrarArchivo(archivo);
    
    archivo = abrirArchivo(nombreArchivo, "w");
    fputs(contenidos, archivo);
    cerrarArchivo(archivo);
}

int main(int argc, char** argv) {
    FILE* archivo;
    
    int opcion = 1;
    int id;
    int dato;
    char nombre[30];
    int i=0;
    
    
 
    char n[30];
    char u[30];
    char apellido[30];
    //variables para sistema de validacion
    int *a=0;
    int *b=0;
    
   
    while(opcion != 0){
        printf("BIBLIOTECA\n");
        printf("1. Agregar un libro\n");
        printf("2. Mostrar libros\n");
        printf("3. Eliminar libros\n");
        printf("4. Agregar un usuario\n");
        printf("5. Mostrar usuarios\n");
        printf("6. Eliminar usuario\n");
        printf("7. Alquilar un libro\n");
        printf("0. Salir\n\n");
        printf("Ingrese la opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion){
            case 1:     //agregar libros
                /*archivo = abrirArchivo(libros, "r");    //me puede llegar a generar id repetidos
                if(archivo != NULL){
               id=contarLineas(archivo)+1;
                }
                
                cerrarArchivo(archivo);
                    }*/
                printf("Ingrese el id y el nombre del libro que desea agragar separados por un espacio: \n");
                scanf("%d %s",&id,nombre);
                archivo = abrirArchivo(libros, "a");
                if(archivo != NULL){
                    guardarLibros(archivo,id,nombre);
                    cerrarArchivo(archivo);
                }
                break;
                system("pause");
                system("cls");
            case 2:
              archivo = abrirArchivo(libros, "r");
                if(archivo != NULL){
                    for(i=0; i= contarLineas(archivo);i++){
                        imprimirArchivo(archivo);
                        cerrarArchivo(archivo);
                    }
                }      
            break;
            system("pause");
            system("cls");
            
            case 3:
                archivo = abrirArchivo(libros, "r");
                if(archivo != NULL){
                    for(i=0; i= contarLineas(archivo);i++){     
                        imprimirArchivo(archivo);
                        cerrarArchivo(archivo);
                    }
                }
           printf("\n------------------------------------------------------\n");     
           printf("Ingrese el numero de linea que desea eliminar: ");
                scanf("%d", &dato);
                archivo = abrirArchivo(libros, "r");
                if(archivo != NULL){
                    if(dato > 0 && dato <= contarLineas(archivo)){
                        cerrarArchivo(archivo);
                        eliminarLineaArchivo(libros, dato);
                    }
                }
                
            break;
       system("pause");
       system("cls"); 
            
            
            case 4:
                printf("Ingrese el id,nombre y apellido del usuario que desea agragar separados por un espacio: \n");
                scanf("%i %s %s",&id,nombre,apellido);
                archivo = abrirArchivo(usuarios, "a");
                if(archivo != NULL){
                    guardarUsuarios(archivo,id,nombre,apellido);
                    cerrarArchivo(archivo);
                }
                break;
                system("pause");
                system("cls");
                case 5:
              archivo = abrirArchivo(usuarios, "r");
                if(archivo != NULL){
                    for(i=0; i= contarLineas(archivo);i++){
                        imprimirArchivo(archivo);
                        cerrarArchivo(archivo);
                    }
                }      
            break;
            system("pause");
            system("cls");
            
            case 6:
                archivo = abrirArchivo(usuarios, "r");
                if(archivo != NULL){
                    for(i=0; i= contarLineas(archivo);i++){
                        imprimirArchivo(archivo);
                        cerrarArchivo(archivo);
                    }
                }
           printf("\n------------------------------------------------------\n");     
           printf("Ingrese el numero de linea que desea eliminar: ");
                scanf("%d", &dato);
                archivo = abrirArchivo(usuarios, "r");
                if(archivo != NULL){
                    if(dato > 0 && dato <= contarLineas(archivo)){
                        cerrarArchivo(archivo);
                        eliminarLineaArchivo(usuarios, dato);
                    }
                }
                
            break;
       system("pause");
       system("cls"); 
            
            case 7:
   archivo = abrirArchivo(libros, "r");
                if(archivo != NULL){                         //lE MUESTRA LA LISTA DE LIBROS AL USUARIO
                    for(i=0; i= contarLineas(archivo);i++){
                        imprimirArchivo(archivo);
                        cerrarArchivo(archivo);
                    }
                 
                }
   
           printf("\n------------------------------------------------------\n");           

archivo = abrirArchivo(libros, "r");
printf("Digite el nombre del libro que desea encontrar:\n");
scanf("%s",n);
 
if(archivo != NULL){
if(strstr(n,nombre)!=NULL){
printf("El libro esta en registro\n");
a=1;
}


else if(strstr(n,nombre)==NULL){
    printf("El libro no existe!!\n");
    a=0;
    //break;
}
}

cerrarArchivo(archivo);
//printf("%d",&a);
system("pause");
system("cls");

//----------------------------------------------------------------------------------------------------------------------
//proceso de validacion para usuarios
if(a==1){
archivo = abrirArchivo(usuarios, "r");
                if(archivo != NULL){
                    for(i=0; i= contarLineas(archivo);i++){
                        imprimirArchivo(archivo);
                        cerrarArchivo(archivo);
                    }
                }
           printf("\n------------------------------------------------------\n");

          archivo = abrirArchivo(usuarios, "r");
printf("Digite el nombre del usuario que desea encontrar:\n");
scanf("%s",u);
if(archivo != NULL){
if(strstr(u,nombre)!=NULL){
printf("El usuario esta en registro\n");
b=1;

}
else if(strstr(u,nombre)==NULL){
    printf("El usuario no existe!!\n");
    b=0;
    //break;
}

}
cerrarArchivo(archivo);     
//si tanto el libro como el usuario estan registrados(a==1 && b=1) entonses se guarda un registro y se muestra al usuario.
if((a==1) && (b==1)){
    
    archivo = abrirArchivo(alquilados, "a");
                if(archivo != NULL){
                    guardarAlquilados(archivo,n,u);
                    cerrarArchivo(archivo);
                }
    printf("\nLISTA DE ALQUILADOS:\n\n");
    archivo = abrirArchivo(alquilados, "r");
    if(archivo != NULL){
    for(i=0; i= contarLineas(archivo);i++){
                        imprimirArchivo(archivo);
                        cerrarArchivo(archivo);
                    }
                }
printf("\n------------------------------------------------------\n");
printf("Libro alquilado con exito!!\n");
    
    
    
}
    

}     
           break;
       system("pause");
       system("cls"); 

            default:
                if(opcion != 0){
                    printf("Opcion no reconocida");
                }
        }
       system("pause");
       system("cls"); 
        
    }
    
    return (EXIT_SUCCESS);
}