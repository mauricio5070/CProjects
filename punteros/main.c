#include <stdio.h>
#include <stdlib.h>
#include <string.h>




struct persona{
    int edad;
    char nombre[20];
};
void sumarCinco(int numero){
    
    numero=numero+5;
    
}
void sumarCincoPorReferencia(int *dato){
    *dato= *dato+5;
}

int main(int argc, char** argv) {
    int dato=1;
    int i;
    //maloc -> memory allocation se usa para peddir emoria a la PC
    int* vector;
    //creo un vector de 5 posiciones(se puede reemplesar por un tamaño determinado) void*
    vector= (int*) malloc(5 * sizeof(int));
    for(i=0;i<5;i++){
        printf("%d\n",vector[i]);
    }
    //toma el puntero y libera el espacio que contiene
    free(vector);
    
    /*int* puntero;
    puntero= &dato; 
    char palabra[20]= "academia\0";
    char* ptrPalabra;
    ptrPalabra= palabra;
    printf("Tamanio en memoria es de:%d\n",sizeof(dato)); //imprime el tamaño en memoria de una variable
    printf("Tamanio en memoria es de:%d\n",sizeof(puntero));
     printf("%p\n",puntero);
     printf("%d\n",*puntero);
    //*puntero=5;
    sumarCincoPorReferencia(puntero);
    printf("%d\n",dato);*/
    
    
    struct persona profesor;
    struct persona* ptrProfesor= &profesor;
    profesor.edad=25;
    ptrProfesor->edad=27;
    printf("%d\n",profesor.edad);
    
    struct persona* estudiantes;
                //cast       
    estudiantes= (struct persona*) malloc(5 * sizeof(struct persona));
    
    for (i=0;i<5;i++){
        printf("%d", estudiantes[i].edad);
    }
    printf("\n");
    
    return (EXIT_SUCCESS);
}

