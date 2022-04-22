#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include "matematica.h"

int32_t Sumar_Array (int* x, int xn){
    int16_t suma = 0;
    for(int i = 0; i<xn; i++)
    {
        suma = suma + *x; //voy sumando los elementos del array
        x++; //voy avanzando en la posición del array

        //con índice
        //suma = suma + x[i];
    }
    printf("La suma del array es %d",suma);
    return suma;
}

int16_t Multiplicar_Sat (int16_t n1, int16_t n2)
{
    int16_t n3 = n1*n2;
    printf("La multiplicacion da: %d",n3);
    return n3;
}