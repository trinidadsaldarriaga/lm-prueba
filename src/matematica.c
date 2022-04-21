#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include "matematica.h"

int Sumar_Array (int* x, int xn){
    int suma = 0;
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