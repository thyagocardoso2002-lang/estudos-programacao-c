
#include <stdio.h>
#include <stdlib.h>

int main() {

    //==================================================
    // DESAFIO 1 - SENHA COM TRES TENTATIVAS
    //==================================================

    printf("\n=== DESAFIO 1 - SENHA ===\n");

    int senha;
    int tentativas = 0;

    while (tentativas < 3) {

        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == 1234) {

            printf("Acesso permitido!\n");
            break;

        }

        printf("Senha incorreta!\n");
        tentativas++;

    }

    if (tentativas == 3) {

        printf("Usuario bloqueado!\n");

    }


    //==================================================
    // ATIVIDADE 2 - VALIDACAO DE ENTRADA
    //==================================================

    printf("\n=== ATIVIDADE 2 - VALIDACAO DE NOTA ===\n");

    float nota;

    printf("Digite uma nota entre 0 e 10: ");
    scanf("%f", &nota);

    while (nota < 0 || nota > 10) {

        printf("Nota invalida. Digite novamente: ");
        scanf("%f", &nota);

    }

    printf("Nota aceita: %.2f\n", nota);


    //==================================================
    // ATIVIDADE 3 - SOMATORIO DE 1 ATE 100
    //==================================================

    printf("\n=== ATIVIDADE 3 - SOMATORIO ===\n");

    int soma = 0;

    for (int i = 1; i <= 100; i++) {

        soma += i;

    }

    printf("Soma = %d\n", soma);


    //==================================================
    // ATIVIDADE 4 - FATORIAL
    //==================================================

    printf("\n=== ATIVIDADE 4 - FATORIAL ===\n");

    int n;
    long long fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {

        printf("Numero invalido! Digite entre 0 e 20.\n");

    } else {

        for (int i = 1; i <= n; i++) {

            fatorial *= i;

        }

        printf("Fatorial de %d = %lld\n", n, fatorial);

    }


    //==================================================
    // DESAFIO 5 - TODAS AS TABUADAS
    //==================================================

    printf("\n=== DESAFIO 5 - TODAS AS TABUADAS ===\n");

    for (int numero = 1; numero <= 10; numero++) {

        printf("\n=== TABUADA DO %d ===\n", numero);

        for (int i = 1; i <= 10; i++) {

            printf("%d x %d = %d\n",
                   numero, i, numero * i);

        }

    }


    //==================================================
    // ATIVIDADE 6 - VERIFICAR MAIORIDADE
    //==================================================

    printf("\n=== ATIVIDADE 6 - MAIORIDADE ===\n");

    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {

        printf("Maior de idade!\n");

    } else {

        printf("Menor de idade!\n");

    }


    //==================================================
    // ATIVIDADE 7 - MAIOR DE TRES NUMEROS
    //==================================================

    printf("\n=== ATIVIDADE 7 - MAIOR DE TRES NUMEROS ===\n");

    int x, y, z;

    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x >= y && x >= z) {

        printf("%d e o maior numero!\n", x);

    } else if (y >= x && y >= z) {

        printf("%d e o maior numero!\n", y);

    } else {

        printf("%d e o maior numero!\n", z);

    }


    //==================================================
    // ATIVIDADE 8 - ANO BISSEXTO
    //==================================================

    printf("\n=== ATIVIDADE 8 - ANO BISSEXTO ===\n");

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0) {

        printf("Ano bissexto!\n");

    } else if (ano % 4 == 0 && ano % 100 != 0) {

        printf("Ano bissexto!\n");

    } else {

        printf("Nao e bissexto!\n");

    }


    //==================================================
    // ATIVIDADE 9 - CALCULADORA COM MENU
    //==================================================

    printf("\n=== ATIVIDADE 9 - CALCULADORA ===\n");

    int a, b, opcao;
    float resultado;

    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Resto\n");

    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 5) {

        printf("Digite o primeiro numero: ");
        scanf("%d", &a);

        printf("Digite o segundo numero: ");
        scanf("%d", &b);

    }

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
                printf("Resto: %.0f\n", resultado);

            } else {

                printf("Resto por zero nao permitido!\n");

            }

            break;

        default:

            printf("Opcao invalida!\n");

    }


    //==================================================
    // DESAFIO - SISTEMA DE MENU PRINCIPAL
    //==================================================

    printf("\n=== DESAFIO 10 - MENU PRINCIPAL ===\n");

    int opcaoMenu;
    int num1, num2;
    int tabuada;

    float nota1, nota2, nota3;
    float media;

    do {

        printf("\n=============================\n");
        printf("       MENU PRINCIPAL\n");
        printf("=============================\n");

        printf("1 - Somar dois numeros\n");
        printf("2 - Calcular media\n");
        printf("3 - Tabuada\n");
        printf("0 - Sair\n");

        printf("=============================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu) {

            case 1:

                printf("\nDigite o primeiro numero: ");
                scanf("%d", &num1);

                printf("Digite o segundo numero: ");
                scanf("%d", &num2);

                printf("Resultado da soma: %d\n", num1 + num2);

                break;

            case 2:

                printf("\nDigite a primeira nota: ");
                scanf("%f", &nota1);

                printf("Digite a segunda nota: ");
                scanf("%f", &nota2);

                printf("Digite a terceira nota: ");
                scanf("%f", &nota3);

                media = (nota1 + nota2 + nota3) / 3;

                printf("Media final: %.2f\n", media);

                break;

            case 3:

                printf("\nDigite um numero: ");
                scanf("%d", &tabuada);

                printf("\n=== TABUADA DO %d ===\n", tabuada);

                for (int i = 1; i <= 10; i++) {

                    printf("%d x %d = %d\n",
                           tabuada, i, tabuada * i);

                }

                break;

            case 0:

                printf("\nEncerrando o programa...\n");

                break;

            default:

                printf("\nOpcao invalida!\n");

        }

    } while (opcaoMenu != 0);

    printf("\nPrograma finalizado!\n");

    return 0;

}
