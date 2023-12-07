#include <stdio.h>
#include <stdlib.h>


int resultadocentimetros(int n1){
int centimetros;
centimetros = n1 * 100;

return centimetros;
}

int main (){

    float numero;
    float resultado;

printf("digite um numero em metros:");
scanf("%f", &numero);

resultado = resultadocentimetros(numero);

printf("\n=======convertendo em centimentros=======\n");
printf("resultaado:%.2f cm",resultado);

    return 0;
}