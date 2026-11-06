
#include <stdio.h>
int main () {

    //Soma e operações aula 2, parte 2
    int numero1;
    int numero2;
    int soma, sub;
    float modulo, div, mult;

    printf("Digite um número: ");
    scanf("%d", &numero1);

    printf("Digite um segundo número: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    sub = numero1 - numero2;
    mult = numero1 * numero2;
    div = numero1 / numero2;
    modulo = numero1 % numero2;

    printf("soma = %d\n", soma);
    printf("subtracao = %d\n", sub);
    printf("multiplicacao = %.2f\n", mult);
    printf("divisao = %.2f\n", div);
    printf("modulo = %.2f\n", modulo);

}