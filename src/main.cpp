#include <iostream>
#include <stdio.h>
#include <stdint.h>
using namespace std;

int32_t Sumar_Array(int16_t *x, int16_t xn);
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

    cout<<" "<<endl;
    cout<<"=========Fin del programa========="<<endl;

}
int32_t Sumar_Array (int16_t* x, int16_t xn){
    int32_t suma = 0;
    for(int32_t i = 0; i<xn; i++)
    {
        suma = suma + *x; //voy sumando los elementos del array
        x++; //voy avanzando en la posición del array

        //con índice
        //suma = suma + x[i];
    }
    printf("La suma del array es %d",suma);
    return suma;
}