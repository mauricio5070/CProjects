/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Capacitacion
 *
 * Created on 23 de enero de 2018, 05:09 PM
 */

#include <stdio.h>
#include <stdlib.h>

void numeroPalabra(int numero){
   
    
    switch(numero){
        case 1:
            printf("UNO\n\n");
            break;
              case 2:
            printf("DOS\n\n");
            break;
              case 3:
            printf("TRES\n\n");
            break;
              case 4:
            printf("CUATRO\n\n");
            break;
        default:
            printf("Este numero no es una opcion...\n");
    }  
}

void esPar(int numero){
    switch(numero){
        case 2:
        case 4:
        case 6:
        case 8:
            printf("El numero es par\n\n");
            break;
        default:
            printf("El nunmero es impar\n\n");
            
    }
}
int diasPorMes(int mes){
    int dias;

    switch(mes){
        case 2:
            dias=28;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias= 31;
            break;
          
        case 4:
        case 6:
        case 9:
        case 11:
            dias =30;
            break;
            
    
}
    return dias;
}


void imprimirLinea(int tamanio){
    int i;
    for(i=0;i<tamanio;i++){
printf("*");
    }
    
    printf("\n");
}


 void imprimirRectangulo(int largo, int ancho){
     int fila;
     int columna;
     for(fila=0;fila<largo;fila++){
         for(columna=0;columna<ancho;columna++){
             printf("*");
         }
         printf("\n");
     }
        
        
    }

void imprimirCuadrado(int tam){
    int i;
    for(i=0;i<tam;i++){
        imprimirLinea(tam);
    }
    
    
}
void imprimirMaximo(int numMax){
    int i;
    for(i=0;i<numMax;i++){
        printf("%d\n\n",i+1);
    }
    
    
}

 void imprimirCuadradoV2(int tam){
        int fila;
        int columna;
        for (fila=0;fila<tam;fila++){
            for(columna=0;columna<tam;columna++){
                printf("*");
            }
            printf("\n");
        }
    }
 
 


int main() {
    int numero;
    int valor;
    int valor2;
    int resultado;
    int opcion=1;
    
   /* printf("Digite el numeo0o de mes para ver cuantos dias posee\n\n");
    scanf("%d",&valor);
    resultado= diasPorMes(valor);
    printf("el mes tiene %d dias...", resultado);
   // numeroPalabra(valor);*/
   /* printf("Por favor digite el largo...\n\n");
    scanf("%d", &valor);
     printf("Por favor digite el ancho...\n\n");
    scanf("%d", &valor2);
    imprimirRectangulo(valor,valor2);*/
    
   
   
    printf("MENU DE OPCIONES DE ESTRUCTURAS DE CONTROL\n\n\n");
                
                
                
                
    while(opcion !=0){
         
    printf("1.Imprimir cuadrado\n");
              printf("2.Imprimir rectangulo\n");
               printf("3.Imprimir linea\n");
                printf("0.Salir\n\n\n\n");
                scanf("%d",&opcion);
        
        
    switch(opcion){
            
        case 0:{
            printf("Hasta Luego!!\n");
            break;
        }
            case 1:{
                printf("digite un numero\n");
                scanf("%d",&valor);
                imprimirCuadrado(valor);
                break;
            }
           case 2:{
              printf("digite el largo\n");
                scanf("%d",&valor);
                         printf("digite el ancho\n");
                          scanf("%d",&valor2);
                imprimirRectangulo(valor,valor2);
                break;
            }
           case 3:{
               printf("digite un numero\n");
                scanf("%d",&valor);
                imprimirLinea(valor);
                break;
                default:
                {
                    printf(" La opcion no existe!!\n\n");
                
                   }
            }
       
        }
    system("pause");
    system("cls");   
        }
   
    
    
    
    return (0);
}

