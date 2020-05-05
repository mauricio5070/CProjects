#include <stdio.h>
#include <stdlib.h>
// las fuynciones se define de esta forma: tipo nombre(valores de entrada){}
int cuadrado(int num){
   int resultado; 
    resultado =num*num;
    return resultado;
    
}
void imprimeCuadrado(int num){
    
    int resultado;
    
    printf("Digite un numero\n\n");
    scanf("%d",&num);

    
    resultado= cuadrado(num);
    printf("El cuadrado de %d es: %d \n\n\n\n", num, resultado);
    
}
void evaluaEstudiante(char nota[4]){
  
    printf("Digite la nota del estudiante\n\n");
    double noota;
    
    scanf("%s",nota);
    noota = atof(nota);
    if(noota >= 67.5){
        printf("El estudiante aprobo el curso\n\n\n");
    }
    if(noota>=60 && noota<67.5){
        printf("El estudiante reprobo el curso pero tiene derecho a ampliacion\n\n\n");
    }
    else{
        printf("El estudiante reprobo el curso\n\n\n");
    
}
}

int main() {
    
    int num;
    char nota [4]; // es preferible hacer la conversion de string a numero en el main. 
    //double numDos;
    //char palabra[3];
    /*char palabras[26];*/
    
   /*printf("Digite una palabra\n\n");
    scanf("%s",palabra);
    printf("La palabra digitada es:%s\n", palabra);
    printf("Escriba dos palabras\n", palabra);
    fgets(palabras,26,stdin);
    printf("Las palabras digitada es:%s\n", palabras);*/
    
    /*printf("Digite un numero\n\n");
    scanf("%d",&num);
     printf("El numero es:%d\n", num);
     printf("Digite un numero decimal\n\n");
    scanf("%s",palabra);
    numDos = atof(palabra); //atoi entero, atof flotante, atol long 
     printf("El numero es:%.4f\n", numDos);*/
    
   
   // imprimeCuadrado(num);
    evaluaEstudiante(nota);

    
    return (EXIT_SUCCESS);
}

