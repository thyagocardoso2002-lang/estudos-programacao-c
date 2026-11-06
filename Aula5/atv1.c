#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//==================================================
// PROTOTIPOS DAS FUNCOES
//==================================================

void mostrarMenu(void);

double somar(double a, double b);
double subtrair(double a, double b);
double multiplicar(double a, double b);
double dividir(double a, double b);

int adicionarUm(int numero);

int maior(int a, int b);
int menor(int a, int b);

double celsiusParaFahrenheit(double celsius);
double fahrenheitParaCelsius(double fahrenheit);
double kmParaMilhas(double km);

double calcularMedia(double n1, double n2, double n3);
bool aprovado(double media, double frequencia);
void mostrarResultado(double media, double frequencia);

void mostrarTabuada(int numero);
void mostrarTabuadas(int inicio, int fim);

void executarOperacao(int opcao);


//==================================================
// PROGRAMA PRINCIPAL
//==================================================

int main(void) {


    //==================================================
    // DESAFIO 1 - MENU REUTILIZAVEL
    //==================================================

    printf("\n=== DESAFIO 1 - MENU REUTILIZAVEL ===\n");

    mostrarMenu();


    //==================================================
    // DESAFIO 2 - MINI CALCULADORA POR FUNCOES
    //==================================================

    printf("\n=== DESAFIO 2 - MINI CALCULADORA ===\n");

    {
        double num1, num2;

        printf("Digite o primeiro numero: ");
        scanf("%lf", &num1);

        printf("Digite o segundo numero: ");
        scanf("%lf", &num2);

        printf("\n===== RESULTADOS =====\n");

        printf("Soma: %.2lf\n", somar(num1, num2));

        printf("Subtracao: %.2lf\n", subtrair(num1, num2));

        printf("Multiplicacao: %.2lf\n",
               multiplicar(num1, num2));

        if (num2 != 0) {

            printf("Divisao: %.2lf\n", dividir(num1, num2));

        } else {

            printf("Divisao por zero nao permitida!\n");

        }
    }


    //==================================================
    // DESAFIO 3 - CORRIGINDO A INTENCAO
    //==================================================

    printf("\n=== DESAFIO 3 - ADICIONAR UM ===\n");

    {
        int x = 10;

        printf("Valor inicial: %d\n", x);

        x = adicionarUm(x);

        printf("Novo valor de x: %d\n", x);
    }


    //==================================================
    // EXERCICIO A - MAIOR E MENOR
    //==================================================

    printf("\n=== EXERCICIO A - MAIOR E MENOR ===\n");

    {
        int num1, num2;

        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);

        printf("Digite o segundo numero: ");
        scanf("%d", &num2);

        printf("Maior numero: %d\n", maior(num1, num2));

        printf("Menor numero: %d\n", menor(num1, num2));
    }


    //==================================================
    // EXERCICIO B - CONVERSOES
    //==================================================

    printf("\n=== EXERCICIO B - CONVERSOES ===\n");

    {
        double celsius, fahrenheit, km;

        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &celsius);

        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &fahrenheit);

        printf("Digite a distancia em KM: ");
        scanf("%lf", &km);

        printf("\n===== RESULTADOS =====\n");

        printf("Celsius para Fahrenheit: %.2lf\n",
               celsiusParaFahrenheit(celsius));

        printf("Fahrenheit para Celsius: %.2lf\n",
               fahrenheitParaCelsius(fahrenheit));

        printf("KM para Milhas: %.2lf\n",
               kmParaMilhas(km));
    }


    //==================================================
    // EXERCICIO C - SISTEMA ACADEMICO
    //==================================================

    printf("\n=== EXERCICIO C - SISTEMA ACADEMICO ===\n");

    {
        double n1, n2, n3;
        double media, frequencia;

        printf("Digite a primeira nota: ");
        scanf("%lf", &n1);

        printf("Digite a segunda nota: ");
        scanf("%lf", &n2);

        printf("Digite a terceira nota: ");
        scanf("%lf", &n3);

        printf("Digite a frequencia (%%): ");
        scanf("%lf", &frequencia);

        // Calcula a media
        media = calcularMedia(n1, n2, n3);

        // Mostra o resultado
        mostrarResultado(media, frequencia);
    }


    //==================================================
    // EXERCICIO D - TABUADA COMO FUNCAO
    //==================================================

    printf("\n=== EXERCICIO D - TABUADA ===\n");

    {
        int numero;

        printf("Digite um numero: ");
        scanf("%d", &numero);

        printf("\n=== TABUADA DO %d ===\n", numero);

        mostrarTabuada(numero);
    }


    //==================================================
    // DESAFIO D - TODAS AS TABUADAS COMO FUNCAO
    //==================================================

    printf("\n=== DESAFIO D - VARIAS TABUADAS ===\n");

    {
        int inicio, fim;

        printf("Digite o numero inicial: ");
        scanf("%d", &inicio);

        printf("Digite o numero final: ");
        scanf("%d", &fim);

        if (inicio <= fim) {

            mostrarTabuadas(inicio, fim);

        } else {

            printf("Numero inicial deve ser menor ou igual ao final!\n");

        }
    }


    //==================================================
    // MINI PROJETO - CALCULADORA MODULAR
    //==================================================

    printf("\n=== MINI PROJETO - CALCULADORA MODULAR ===\n");

    {
        int opcao;

        do {

            mostrarMenu();

            printf("Escolha uma opcao: ");
            scanf("%d", &opcao);

            if (opcao >= 1 && opcao <= 4) {

                executarOperacao(opcao);

            } else if (opcao != 0) {

                printf("\nOpcao invalida!\n");

            }

        } while (opcao != 0);

        printf("\nCalculadora encerrada!\n");
    }


    //==================================================
    // FIM DO PROGRAMA
    //==================================================

    printf("\n====================================\n");
    printf("TODAS AS ATIVIDADES FORAM EXECUTADAS!\n");
    printf("====================================\n");

    return 0;

}


//==================================================
// IMPLEMENTACAO DAS FUNCOES
//==================================================


//--------------------------------------------------
// FUNCAO - MOSTRAR MENU
//--------------------------------------------------

void mostrarMenu(void) {

    printf("\n================ CALCULADORA ================\n");

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("0 - Sair\n");

    printf("=============================================\n");
}


//--------------------------------------------------
// FUNCAO - SOMAR
//--------------------------------------------------

double somar(double a, double b) {

    return a + b;

}


//--------------------------------------------------
// FUNCAO - SUBTRAIR
//--------------------------------------------------

double subtrair(double a, double b) {

    return a - b;

}


//--------------------------------------------------
// FUNCAO - MULTIPLICAR
//--------------------------------------------------

double multiplicar(double a, double b) {

    return a * b;

}


//--------------------------------------------------
// FUNCAO - DIVIDIR
//--------------------------------------------------

double dividir(double a, double b) {

    return a / b;

}


//--------------------------------------------------
// FUNCAO - ADICIONAR UM
//--------------------------------------------------

int adicionarUm(int numero) {

    numero++;

    return numero;

}


//--------------------------------------------------
// FUNCAO - MAIOR NUMERO
//--------------------------------------------------

int maior(int a, int b) {

    if (a > b) {

        return a;

    } else {

        return b;

    }

}


//--------------------------------------------------
// FUNCAO - MENOR NUMERO
//--------------------------------------------------

int menor(int a, int b) {

    if (a < b) {

        return a;

    } else {

        return b;

    }

}


//--------------------------------------------------
// FUNCAO - CELSIUS PARA FAHRENHEIT
//--------------------------------------------------

double celsiusParaFahrenheit(double celsius) {

    return (celsius * 1.8) + 32;

}


//--------------------------------------------------
// FUNCAO - FAHRENHEIT PARA CELSIUS
//--------------------------------------------------

double fahrenheitParaCelsius(double fahrenheit) {

    return (fahrenheit - 32) / 1.8;

}


//--------------------------------------------------
// FUNCAO - KM PARA MILHAS
//--------------------------------------------------

double kmParaMilhas(double km) {

    return km * 0.621371;

}


//--------------------------------------------------
// FUNCAO - CALCULAR MEDIA
//--------------------------------------------------

double calcularMedia(double n1, double n2, double n3) {

    return (n1 + n2 + n3) / 3;

}


//--------------------------------------------------
// FUNCAO - VERIFICAR APROVACAO
//--------------------------------------------------

bool aprovado(double media, double frequencia) {

    if (media >= 7 && frequencia >= 75) {

        return true;

    } else {

        return false;

    }

}


//--------------------------------------------------
// FUNCAO - MOSTRAR RESULTADO ACADEMICO
//--------------------------------------------------

void mostrarResultado(double media, double frequencia) {

    printf("\n===== RESULTADO ACADEMICO =====\n");

    printf("Media: %.2lf\n", media);

    printf("Frequencia: %.2lf%%\n", frequencia);

    if (aprovado(media, frequencia)) {

        printf("Situacao: APROVADO!\n");

    } else {

        printf("Situacao: REPROVADO!\n");

    }

}


//--------------------------------------------------
// FUNCAO - MOSTRAR UMA TABUADA
//--------------------------------------------------

void mostrarTabuada(int numero) {

    for (int i = 1; i <= 10; i++) {

        printf("%d x %d = %d\n",
               numero, i, numero * i);

    }

}


//--------------------------------------------------
// FUNCAO - MOSTRAR VARIAS TABUADAS
//--------------------------------------------------

void mostrarTabuadas(int inicio, int fim) {

    for (int i = inicio; i <= fim; i++) {

        printf("\n=== TABUADA DO %d ===\n", i);

        mostrarTabuada(i);

    }

}


//--------------------------------------------------
// FUNCAO - EXECUTAR OPERACAO DA CALCULADORA
//--------------------------------------------------

void executarOperacao(int opcao) {

    double num1, num2;
    double resultado;

    printf("\nDigite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    switch (opcao) {

        case 1:

            resultado = somar(num1, num2);

            printf("Resultado da soma: %.2lf\n", resultado);

            break;


        case 2:

            resultado = subtrair(num1, num2);

            printf("Resultado da subtracao: %.2lf\n", resultado);

            break;


        case 3:

            resultado = multiplicar(num1, num2);

            printf("Resultado da multiplicacao: %.2lf\n", resultado);

            break;


        case 4:

            if (num2 != 0) {

                resultado = dividir(num1, num2);

                printf("Resultado da divisao: %.2lf\n", resultado);

            } else {

                printf("Divisao por zero nao permitida!\n");

            }

            break;


        default:

            printf("Opcao invalida!\n");

            break;

    }

}