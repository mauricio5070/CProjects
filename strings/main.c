/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Capacitacion
 *
 * Created on 30 de enero de 2018, 05:09 PM
 */

#include <stdio.h> // operaciones de entrada y salida
#include <stdlib.h>
#include <string.h>    //funciones para el manejo de hileras

/*
 * 
 */

void compararStrings(char* string1, char* string2){
    
    printf("Ingrese la primera palabara:\n");
    scanf("%s", string1);
    printf("Ingrese la segunda palabra\n");
    scanf("%s",string2);
    
    
    if(strcmp(string1,string2)==0){
    printf("Las hileras son iguales\n");}
    else{
    
    printf("Las hileras son diferentes\n");}
    
    
}


void copiarString(char* string1, char* string2){
   printf("Digite la palabra que desea copiar:");
   scanf("%s",string1);
    
    strcpy(string2,string1);
    
    printf("\n\nLa palabra es:%s\n\n",string2);
}

void copiarString2(char* string1, char* string2, int cantidad){
       printf("Digite la palabra que desea copiar:");
       scanf("%s",string1);
    printf("\nDigite la cantidad de letras que desea copiar:");
    
    scanf("%i", &cantidad);
    strncpy(string2,string1,cantidad);
    string2[cantidad]= '\0';     /*
                                  
                                  
                                  */
    
    printf("\n\nLa palabra es:%s\n\n",string2);
    
}

void concatenarString(char* string1, char* string2){

 printf("Digite la palabra que desea copiar:");
   scanf("%s",string1);
   
   printf("\nIngrese la segunda palabra:");
    scanf("%s",string2);
    
    strcat(string1,string2);
    
    printf("\n\nLa palabra es:%s\n\n",string1);
}


void concatenarString2(char* string1, char* string2, int cantidad){

 printf("Digite la palabra que desea copiar:");
   scanf("%s",string1);
   
   printf("\nIngrese la segunda palabra:");
    scanf("%s",string2);
   printf("\nDigite la cantidad de letras que desea copiar:");
   scanf("%d", &cantidad);
    
   strncat(string1,string2,cantidad);
    
    printf("\n\nLa palabra es:%s\n\n",string1);
}

void imprimirTamanio(char* string){
    
   printf("Digite una palabra:");
   scanf("%s",string);
    printf("\n\nEl tamanio de la hilera es:%d\n\n",strlen(string));

}

/*void encontrarSubHilera(char* string1, char* string2){
    
    printf("Digite la palabra que desea copiar:");
   scanf("%s",string1);
   
   printf("\nIngrese la segunda palabra:");
    scanf("%s",string2);
    char* subString;
 int i=0;  
 subString= strstr(string1,string2);
    
  while(subString != NULL){
     i++;
     int offset = strlen(string2);
        
subString= strstr(string1,string2);
      
 
     printf("\nveces que se repite:%i",i);
          printf("\n\nLa palabra que coincide  es:%s\n\n",subString);

    system("cls");
    system("pause");
    
} 
}
*/


void dividirString(char* string1, char* string2){
   char* token; 
 printf("Digite la primera palabra:");
   scanf("%s",string1);
   
   printf("\nIngrese la segunda palabra:");
    scanf("%s",string2);
    
   token= strtok(string1,string2);
    
    printf("\n\nLa palabra es:%s\n\n",token);    
    
}


int main() {
    char string1[25];
    char string2[25];
    int cantidad;
    dividirString(string1, string2);
    //imprimirTamanio(string1);
    return (0);
}


