/*
    Ejemplo de como cambiar los valores de una variable temporalmente
    Formato: (tipo de dato) variable
*/
#include <stdio.h>
int main(){
    int a, b;
    float c, d;

    a =15;
    b=5;

    c = a/b;                    //Division de enteros
    d = (float) a / (float) b;  //Division de flotantes

    printf("[integers]\t a = %d\t b = %d\n", a, b);
    printf("[floats]\t c = %f\t d=%f\n", c, d);
}