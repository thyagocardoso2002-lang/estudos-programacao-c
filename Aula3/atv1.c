#include <stdio.h>
#include <stdlib.h>
int main () {

    //AULA3 parte 0 - Verificar Maioridade
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior de Idade!\n");
    }else{
        printf("Menor de Idade!\n\n");
    }


    //AULA3 parte 1 - Maior de Dois Números - Desafio A
    printf("\n=== Maior de Dois Números ===\n");

    int x, y, z;
    printf("Digite a 3 números: ");
   scanf("%d %d %d", &x, &y, &z);

    if (x >= y && x >= z) {
        printf("x é maior\n");
    } else if (y >= x && y >= z) {
        printf("y é maior\n");
    } else {
        printf("z é maior\n\n");
    }

    //AULA3 parte 2 - Ano Bissexto - Desafio B
    printf("\n=== Ano Bissexto ===\n\n");
    int ano;
    printf("digite um ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0) {
        printf("ano bissexto\n");
    } else if (ano % 4 == 0 && ano % 100 != 0) {
        printf("ano bissexto\n");
    } else {
        printf("Não é bissexto\n");
    }

    //AULA3 Parte 3 - Calculadora com Menu
    printf("\n=== CALCULADORA ===\n\n");

    int a, b, opcao;
    float resultado;

    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Resto\n");

    printf("\nOpcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    switch (opcao) {

        case 1:

            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);

            break;

        case 2:

            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);

            break;

        case 3:

            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);

            break;

        case 4:

            if (b != 0) {

                resultado = (float)a / b;
                printf("Resultado: %.2f\n", resultado);

            } else {

                printf("Divisao por zero nao permitida!\n");

            }

            break;

        case 5:

            if (b != 0) {

                resultado = a % b;
                printf("Resto: %.2f\n", resultado);

            } else {

                printf("Nao e possivel calcular resto com divisor zero!\n");

            }

            break;

        default:

            printf("Opcao invalida!\n");

    }





    //AULA4 Parte 4 - Sistema de Desconto
    printf("\n=== Sistema de DESCONTO ===\n\n");
    float valor, desconto, valorFinal;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);


    if (valor >= 500.0) {
        desconto = valor * 0.10;
    }
    else if (valor >= 200.0) {
        desconto = valor * 0.05;
    }
    else {
        desconto = 0.0;
    }

    valorFinal = valor - desconto;

    printf("\n----- RESUMO DA COMPRA -----\n");
    printf("Valor original: R$ %.2f\n", valor);
    printf("Desconto:      R$ %.2f\n", desconto);
    printf("Valor final:   R$ %.2f\n", valorFinal);

    return 0;










































}


