//aula 2, parte 3
#include <stdio.h>
#include <stdlib.h>

int main () {
    //DESAFIO 1 - Divisão Resto
    float num1 = 10, num2 = 3;
    float div = num1 / num2;
    printf("=== DESAFIO 1 ===\n");
    printf("Resultado = %f\n", div);



    //DESAFIO 2 - Expressões
    int resultado1 = (2+3) * 4;
    int resultado2 = 2+3 * 4;
    printf("=== DESAFIO 2 ===\n");
    printf("Resultado = %d", resultado1);
    printf("\nResultado2 = %d\n", resultado2);


    //DESAFIO 3 - Contador
    int contador =0;
    contador++;
    contador++;
    contador++;
    printf("=== DESAFIO 3 ===\n");
    printf("Resultado = %d\n", contador);
    return 0;

    //DESAFIO 4 - Conversão
    double valor = 8.75;
    int inteiro = (int) valor;
    printf("=== DESAFIO 4 ===\n");
    printf("valor original = %.2f\n", valor);
    printf("valor convertido = %d", inteiro);

    return 0;

}
