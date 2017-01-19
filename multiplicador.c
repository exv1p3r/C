#include <stdio.h>
main(){
    int multiplicador;      /*Definiendo el multiplicador como un entero*/
    int multiplicando;      /*Definiendo el multiplicando como un entero*/
    int resultado;          /*Defino resultado como un entero*/
    multiplicador = 1000;   /*Asignando valores a las variables*/
    multiplicando = 2;
    resultado = multiplicador * multiplicando;
    printf("Resultado = %d\n", resultado);      /*Muestro el resultado*/
    return 0;
}