#include <iostream>
#include <stdio.h>
#include <stdint.h>
int32_t Sumar_Array(int16_t *x, int16_t xn);
int16_t Multiplicar_Sat (int16_t n1, int16_t n2);
inline int16_t Multip_Sat (int16_t n1, int16_t n2){
    int16_t n3 = n1*n2;
    if (n3<n1){
        return -1; //overflow
    }
    else{
        return n3;
    }
}