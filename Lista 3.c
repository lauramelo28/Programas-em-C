#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int exe1();
int exe2();
int exe3();
int exe4();
int exe5();
int exe6();
int exe7();
int exe8();
int exe9();
int exe10();

int main(){
    int opcao;
    do{
            printf("\n\n-----------------------------------------");
        printf("\nDigite o exercicio que deseja: ");
        scanf("%i", &opcao);

        switch (opcao){
            case 1:
               exe1();
            break;
            case 2:
                exe2();
            break;
            case 3:
                exe3();
            break;
            case 4:
                exe4();
            break;
            case 5:
                exe5();
            break;
            case 6:
                exe6();
            break;
            case 7:
                exe7();
            break;
            case 8:
                exe8();
            break;
            case 9:
                exe9();
            break;
            case 10:
                exe10();
            break;
            default:
                printf("\nOpcao invalida");
        }
    }
    while(opcao!=10);
    return 0;
}


int exe1(){
    printf("\n\n-------------- Exercicio 1 --------------\n");
    /* Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares
       (QPares) e a quantidade de números impares (QImpares) lidos. Admita que o valor 9999 é utilizado como
        sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3

        TESTE:  Entrada      Saída
                    1       3 pares
                    2       1 ímpar
                    6
                    8
    */

    int X, QPares, QImpares;
    QPares=0;
    QImpares=0;

    printf("\nVoce ira digitar varios numeros (caso queira parar, utilize 9999)");
    printf("\nDigite um numero: ");
    scanf("%i",&X);

    while(X != 9999){

        if(X%2 == 0){
             QPares++;
        }
        else{
            QImpares++;
        }
        printf("\nDigite um numero: ");
        scanf("%i",&X);
    }
    printf("\nA quantidade de numeros pares digitados foi: %i", QPares);
    printf("\nA quantidade de numeros impares digitados foi: %i", QImpares);


    return 0;
}

int exe2(){
    printf("\n\n-------------- Exercicio 2 --------------\n");
    /*Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior,
     o menor e a média aritmética desse conjunto de dados. (Flag -1).

        TESTE:  Entrada      Saída
                    5       menor valor: 3
                    6       maior valor: 6
                    3       media: 4.00
                    4
                    -1
    */

    int numero, menor, maior, i;
    float media,soma;

    maior = -1;
    menor = 9999;
    i=0;
    soma=0;
    printf("\nDigite um numero positivo, (caso queira parar utilize -1): ");
    scanf("%i", &numero);

    while (numero != -1){
        while(numero < 0){
            printf("\nNumero invalido!");
            printf("\nDigite um numero positivo, (caso queira parar utilize -1): ");
            scanf("%i", &numero);
        }
            if(numero> maior){
                maior = numero;
            }
            if(numero< menor){
                menor = numero;
            }
        soma = soma + numero;
        i++;
        printf("Digite um numero positivo, (caso queira parar utilize -1): ");
        scanf("%i", &numero);
    }

    media = (soma/i);
    printf("\nMenor valor = %i \nMaior valor = %i  \nMedia dos numeros = %0.2f", menor,maior,media);
    return 0;
}

int exe3(){
    /*  Escrever um algoritmo em Portugol, para calcular e imprimir o fatorial de um número lido do teclado.

        Algoritmo:

        var
            numero,fatorial,i:int

        inicio
            leia (numero)
            fatorial <- 1

                para i de numero ate passo 1 faca
                    fatorial <- fatorial*i
                fimpara

            escreva(numero, fatorial)
        fimalgoritmo

        TESTE   Entrada  Saída
                   5      120
    */

    printf("\n\n-------------- Exercicio 3 --------------\n");
    int numero,fatorial, i;
    printf("\nDigite um numero: ");
    scanf("%i", &numero);

    fatorial=1;

        for(i=numero; i>1; i--){
            fatorial = fatorial*i;
        }
        printf("\nO fatorial de %i = %i",numero, fatorial);

    return 0;
}

int exe4(){
    /* Calcule o valor da seguinte série lido a quantidade de termos:
       S= 1 - 1/3^3 + 1/5^3 - 1/7^3 + 1/9^3 .....

       TESTE:  Entrada    Saída
                  4      0,968048

    */

    printf("\n\n-------------- Exercicio 4 --------------\n");
    float S;
    int denominador, sinal, termos;
    printf("\nDigite a quantidade de termos da serie: ");
    scanf("%i", &termos);

    denominador = 1;
    sinal = 1;
    S=0;

    for (int i=1; i<=termos; i++){
        S = S + (( 1.0 /(pow (denominador,3))*1.0) * sinal);
        denominador = denominador + 2;
        sinal = sinal * (-1);
    }
    printf("\n\n\n S = %f", S);
    return 0;
}

int exe5(){
    /*  Escreva um algoritmo que peça um número N maior que 2. Gere e imprima a série FIBONACCI até este n-ésimo termo.

        TESTE: Entrada    Saída
                  4      1 1 2 3 5

    */

    printf("\n\n-------------- Exercicio 5 --------------\n");
    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Digite um numero: ");
    scanf("%i", &n);
    printf("\nSequencia de Fibonacci:\n");
    printf("%i ", b);

    for(i = 0; i < n; i++) {
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        printf("%d ", auxiliar);
    }

    return 0;
}

int exe6(){
    /* Fazer um algoritmo para calcular o valor de s, dado por, sendo o valor de N  deverá se lido do teclado
        S= 1/N - 2/N-1 + 3/N-2 - 4 /N-3....
            TESTE: Entrada    Saída
                    5          3.70

    */

    printf("\n\n-------------- Exercicio 6 --------------\n");
    float numerador, denominador, s;
    int n, sinal;

    printf("Digite n: ");
    scanf("%i", &n);
    s=0;
    sinal = 1;
    denominador =n;

    for(int i=0; i<n; i++){
      numerador = i+1;
      s = s + ((numerador/denominador) * sinal);
      sinal = sinal*(-1);
      denominador--;
    }
    printf("\n\nS = %f", s);

    return 0;
}
int exe7(){
    /* Fazer um algoritmo que imprima todos os números
        palíndromos de 10000 a 99999.

        TESTE:  Saída
                 900

    */
    printf("\n\n-------------- Exercicio 7 --------------\n");

    int numero, invertido, auxiliar, qtd;

    numero=10000;
    qtd=0;

        while(numero<=99999){

            invertido = 0;
            auxiliar = numero;

            while (auxiliar > 0) {
            invertido = (invertido*10) + (auxiliar % 10);
            auxiliar = auxiliar / 10;
            }

            if (numero == invertido){
             qtd++;
            }
            numero++;
        }
        printf("\nDe 10000 a 99999 possui %i numeros palindromos", qtd);
    return 0;

}
int exe8(){
    /* O numero 3025 possui a seguinte  característica:
            30 + 25 = 55
            55^2 = 3025
        Quantos e quais são os números de 4 dígitos possuem essa característica?

        TESTE:  Saída
                 2025
                 3025
                 9801
                 3 numeros encontrados
    */

    printf("\n\n-------------- Exercicio 8 --------------\n");
    int numero, soma, potencia, PrimeiraMetade, SegundaMetade, quantidade;
    quantidade=0;

        for(numero=1000;numero<=9999;numero++){

            PrimeiraMetade = numero/100;
            SegundaMetade = numero%100;
            soma = PrimeiraMetade + SegundaMetade;
            potencia = pow(soma,2);

                if(potencia == numero){
                    printf("\nNumero %i tem a caracteristica", numero);
                    quantidade++;
                }
        }
        printf("\nA quantidade de numeros encontrados com esse criterio foram: %i\n", quantidade);

    return 0;
}
int exe9(){
    printf("\n\n-------------- Exercicio 9 --------------\n");
    /*
    Faça um programa para um jogo de cara ou coroa. Neste caso, o jogador escolhe cara ou coroa
    (0 – cara e 1 –para coroa) mostre ao final de 10 tentativas, quantas foram certas e quantas erradas.
    (utilize o comando -para que o computador escolha o resultado).

    TESTE: Entrada   Saída
             1      acertos: 3
                     erros: 7
    OBS: A saída pode ser diferente pois o resultado do pc é aleatório;

    */
    int escolha, resultadoPC, acerto, erro;

    printf("\n Cara = 0, Coroa = 1 ");
    printf("\n Digite sua escolha: ");
    scanf("%i", &escolha);

    while(escolha>1 || escolha<0){
        printf("\nErro!! Opcao invalida");
    printf("\nCara = 0, Coroa = 1 ");
    printf("\nDigite sua escolha: ");
    scanf("%i", &escolha);

    }

    acerto=0;
    erro=0;

    srand(time(NULL));

    for (int i=0; i<10; i++){
        resultadoPC = rand() % 2;

        printf("\nResultado do PC = %i", resultadoPC);

        if(escolha == resultadoPC){
            acerto++;
        }
        else{
            erro++;
        }
    }

    printf("\nA quantidade de acertos foram = %i", acerto);
    printf("\nA quantidade de erros foram = %i", erro);

    return 0;
}
int exe10(){
    printf("\n\n-------------- Exercicio 10 --------------\n");
    /* Faça um programa para adivinhar um número escolhido pelo usuário, entre 1 e 1023. Indique ao
    final quantas tentativas foram necessárias. O programa deverá localizar o número escolhido pelo
    usuário em no máximo 10 tentativas!

    TESTE:     Entrada                  Saida
            Numero pensado: 500     tentativas do pc

    */

      int tentativa, valorIntermediario, numeroMaximo, numeroMinimo;
      char opcao[6];

      numeroMaximo = 1023;
      numeroMinimo = 1;
      tentativa = 0;

      printf("\nPense em um numero entre 1 e 1023 para ser adivinhado");
      printf("\n\n");

      while(tentativa < 10){
          tentativa++;
          printf("\nTentativa: %i", tentativa);
          valorIntermediario = numeroMinimo + (numeroMaximo - numeroMinimo)/2;
          printf("\nO numero %i e: MAIOR, MENOR ou IGUAL que o escolhido?\n", valorIntermediario);
          scanf("%s", opcao);

          if(strcasecmp(opcao, "Igual") == 0){
              printf("\nAcertei!\nO numero escolhido foi: %i\n", valorIntermediario);
              break;
          }
          else if(strcasecmp(opcao, "Maior") == 0){
              numeroMaximo = valorIntermediario;
          }
          else if(strcasecmp(opcao, "Menor") == 0){
              numeroMinimo = valorIntermediario;
          }
          else{
              printf("Opcao invalida");
          }
          if (tentativa==10){
          printf("O numero maximo de tentativas foi atingido. Nao acertei seu numero");
          }
      }

    return 0;
}
