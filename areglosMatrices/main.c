/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Capacitacion
 *
 * Created on 25 de enero de 2018, 05:47 PM
 */

/*Enum->valores enumerados
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */
#define est 5
#define cant 5

int main(int argc, char** argv) {

    /*int notas[] = {80,90,100,75};
    int i;
    for(i=0;i<4;i++){
    
        printf("Nota %d: %d\n", i+1, notas[i]);
    }*/
   
   /*int notas[est];
   int i;
    
    for(i=0;i<est;i++){
     printf("Digite la nota numero %i del estudiante...\n\n",i+1);
     scanf("%i",&notas[i]);
    }
    for(i=0;i<est;i++){
     printf("Nota %d: %d\n", i+1, notas[i]);
    }*/
    
  /*  int notas [est][cant];
    int i;
    int j;
    for(i=0;i<est;i++){
        for(j=0;j<cant;j++){
     printf("Digite la nota numero %i del estudiante...\n\n",i+1);
     scanf("%i",&notas[i]);
        }
    }
    for(i=0;i<est;i++){
        for(j=0;j<cant;j++){
     printf("Nota %d: %d\n", i+1, notas[i]);
    }
    }*/
    
    /*enum semana{lunes,martes,miercoles,jueves,viernes};
    enum semana dia;
    enum codigo {exitoso=1, fallido=1, errorLectura=1}; 
   
    if(dia== jueves || dia== martes){
        printf("voy a clases\n");
    }
        else{
            printf("voy a comer");
        }
    
    printf("Porfavor digite el dia...\n");
            scanf("%d",dia);
    
    switch(dia){
        case lunes:
            printf("No voy a clases\n");
            break;
         case martes:
            printf("Si voy a clases\n");
            break;
             case miercoles:
            printf("No voy a clases\n");
            break;
             case jueves:
            printf("Si voy a clases\n");
            break;
             case viernes:
            printf("No voy a clases\n");
            break;
            system("pause");
            system ("cls");
            
        
    }*/
    struct persona{
        
    char nombre[20];
    char apellido [25];
    int edad;
    int salario;
   
    };
    struct persona profesor;
        strcpy(profesor.nombre,"Alan"); 
        strcpy(profesor.apellido,"Ortega"); 
        profesor.salario= 800;
        profesor.edad=52;
        
         printf("Nombre: %s\n",profesor.nombre);
         printf("Edad: %s\n",profesor.apellido);
         printf("Edad: %d\n",profesor.edad);
         printf("Edad: %d\n",profesor.salario);
    
    
    struct persona estudiantes[8];
    int i;
    char nombre[20];
    int edad; 
    for(i=0;i<8;i++){
    printf("Digite el nombre del estudiante...\n");
    
    printf("Digite la edad del estudiante...\n");
    scanf("%d",edad);
    strcpy(estudiantes[i].nombre, nombre);
    }
    for(i=0;i<8;i++){
    printf("El nombre es %s\n", estudiantes[i].nombre);
    printf("la edad es %d\n", edad);
    }
  
    
    return (0);
}

