#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include "matematica.h"
using namespace std;


int main(void){

    char buf[100];
    FILE*fd;

    cout<<"========Inicio del programa=========="<<endl;
    fd = fopen("archivo_texto.txt","r+t");
    fread(buf,100,1,fd);
    printf("%s",buf);
    fclose(fd);
    cout<<" "<<endl;
    
    //Ejercicio 1
    int16_t arr[] = {1,2,3};//valores que quiero sumar
    int32_t suma = 0; //inicializo
    int largo = sizeof(arr)/sizeof(int16_t); //quiero que sea de 16 bits
    suma = Sumar_Array(arr,largo);

    //Ejercicio 3
    int32_t mult = 0;
    int16_t n1 = 10;
    int16_t n2 = 5;
    mult = Multiplicar_Sat(n1,n2);

    cout<<" "<<endl;
    cout<<"=========Fin del programa========="<<endl;
    
}
