#include <stdio.h>
#include <stdlib.h>


int  main (){
 int numero;
 int quadrado;

 printf("\n Calculo de quadrados: \n");
 printf("\n Insira um numero de valor inteiro: \n");

 while(numero != 0){
    quadrado = numero * numero;

    printf ("\n O quadrado do %d e' %d\n", numero, quadrado);
    scanf ("%d", &numero);
 }
 return 0;

}
