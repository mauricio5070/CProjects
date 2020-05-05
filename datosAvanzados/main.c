/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Capacitacion
 *
 * Created on 25 de enero de 2018, 05:24 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int a =22;
    int b = 51;
    float c= 22;
    float  d= 51;
    int resultado;
    double resultado2;
   /*
    
    conversion int-char char-int
    
    */
    
    char r;
    int k= 97;
   
    r= (char)(k);
    resultado= b/a;
    resultado2= (double)d/(double)c;
    
    printf("%i\n",resultado);
   
     printf("%f\n",resultado2);
     printf("%c\n",r);
     
    return (EXIT_SUCCESS);
}

