/*
09/04/22
2º Lista de exercícios - Comandos Condicionais
Aluna: Laura Enísia Rodrigues Melo
Turma: Eng. Software - noite
Professor: Roberto
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
    int op;
    printf("\nDigite o numero do exercicio que deseja: ");
    scanf("%i", &op);

    switch (op){
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
            printf("Opcao invalida!");

    }
  return 0;
}

int exe1(){
    printf("\n\n\n------------ Exercicio 1 ------------\n");

    /*EXERCICIO 1)
        Fazer um algoritmo que leia um numero inteiro e mostre uma
        mensagem indicando se este numero e par ou impar.

        TESTE: Entrada       Saida
                  2           Par
    */

        int num1;
        printf("\nDigite um numero inteiro: ");
        scanf("%i", &num1);

        if (num1%2 ==0){
            printf("\nEsse numero e par\n");
        }
        else{
            printf("\nEsse numero e impar\n");
        }
    return 0;
}

int exe2(){
    printf("\n\n\n------------ Exercicio 2 ------------\n");

    /*EXERCICIO 2)
    Fazer um algoritmo peça o nome e as 3 notas de um aluno e mostre, além do nome e do valor da media do aluno, uma mensagem de "Aprovado", caso a media seja igual ou superior a 6, ou a mensagem "reprovado", caso contrario.

        TESTE: Entrada       Saida
                 Ana        Media = 10
                 10          Aprovada
                 10
                 10
    */

        float nota1, nota2, nota3, media;
        char nome[50];

        printf("\nDigite seu primeiro nome: ");
        fflush(stdin);
        gets(nome);

        printf("\nDigite sua primeira nota: ");
        scanf("%f", &nota1);
        printf("\nDigite sua segunda nota: ");
        scanf("%f", &nota2);
        printf("\nDigite sua terceira nota: ");
        scanf("%f", &nota3);

        media = ((nota1+nota2+nota3)/3);
        printf("\n%s sua media e: %2.0f", nome,media);

        if (media>=6){
            printf("\nVoce foi aprovado!!\n");
        }
        else{
            printf("\nVoce foi reprovado!!\n");
        }
    return 0;
}

int exe3(){
    printf("\n\n\n------------ Exercicio 3 ------------\n");

    /*EXERCICIO 3)
    Fazer um algoritmo que leia a temperatura da água e mostre se está no estado solido, líquido ou gasoso.

        TESTE: Entrada       Saida
                 50        Liquido

    */
    float temperatura;
    printf("\nDigite a temperatura da agua: ");
    scanf("%f", &temperatura);

    if (temperatura<0){
        printf("\nA agua esta no estado solido\n");
    }
    else{
        if ((temperatura>=0) && (temperatura<100)){
        printf("\nA agua esta no estado liquido\n");
        }

        else{
             printf("\nA agua esta no estado gasoso\n");
        }
    }
    return 0;
}

int exe4(){
    printf("\n\n\n------------ Exercicio 4 ------------\n");

    /*EXERCICIO 4)
    Leia um valor X e se ele for menor que 0 avalie Y = x2 + 4. Se ele for maior que 0 avalie x3 -3 e se ele for igual a 0 de uma mensagem de erro.
        TESTE: Entrada       Saida
                 10           997
    */

    int x,y;
    printf("Digite o valor X: ");
    scanf("%i", &x);

    if(x<0){
        y = (pow(x,2) + 4);
        printf ("O x avaliado = %i\n",y);
    }
    else{
        if(x>0){
            y =(pow(x,3) - 3);
            printf ("O x avaliado = %i\n",y);
        }
        else{
            printf("ERRO!\n");
        }
    }
    return 0;
}

int exe5(){
    printf("\n\n\n------------ Exercicio 5 ------------\n");

    /*EXERCICIO 5)
    Construa um algoritmo que receba como entrada três valores (A,B e C). Após o processamento o menor valor
    deverá estar em A e o maior valor em C, e o valor intermediário em B. Imprima A,B e C.
       TESTE:  Entrada       Saida
                 5            A=1
                 9            B=5
                 1            C=9
    */

    int a,b,c, auxA,auxB,auxC;
    printf("\n5Digite o primeiro valor: ");
    scanf("%i", &a);
    printf("Digite o segundo valor: ");
    scanf("%i", &b);
    printf("Digite o primeiro valor: ");
    scanf("%i", &c);

    auxB= b;
    auxC=c;

    if(a>b){
        b=a;
        a=auxB;
    }
     if(a>c){
        c=a;
        a=auxC;
    }
     if(b>c){
        auxC=c;
        c=b;
        b=auxC;
    }
    printf("\nA = %i, B = %i, C = %i\n", a,b,c);

    return 0;
}

int exe6(){
    printf("\n\n\n------------ Exercicio 6 ------------\n");

    /*EXERCICIO 6)
    Desenvolver um algoritmo que leia três números inteiros: X, Y, Z  e verifique se o número X é divisível por Y e por Z.
        O algoritmo deverá mostrar as possíveis mensagens:
        - o número é divisível por Y e Z.
        - o número é divisível por Y mas não por Z.
        - o número é divisível por Z mas não por Y.
        - o número não é divisível nem Y nem por Z.

       TESTE:  Entrada       Saida
                50            1
                 2            0
                 1            0
                              0

    */

    int x,y,z,restoY,restoZ;

    printf("\nDigite o valor de X: ");
    scanf("%i",&x);
    printf("\nDigite o valor de Y: ");
    scanf("%i",&y);
    printf("\nDigite o valor de Z: ");
    scanf("%i",&z);

    restoY = x%y;
    restoZ = x%z;

        if(restoY == 0 && restoZ == 0){
            printf("\nX e divisivel por Y e Z? 1");
        }
        else{
            printf("\nX e divisivel por Y e Z? 0");
        }

        if(restoY==0 && restoZ !=0){
            printf("\nX e divisivel por Y, mas nao por Z? 1");
        }
        else{
            printf("\nX e divisivel por Y, mas nao por Z? 0");
        }

        if(restoZ==0 && restoY !=0){
            printf("\nX e divisivel por Z, mas nao por Y? 1");
        }
        else{
            printf("\nX e divisivel por Z, mas nao por Y? 0");
        }

        if(restoY != 0 && restoZ !=0){
            printf("\nX nao e divisivel nem por Y e nem por Z? 1");
        }
        else{
            printf("\nX nao e divisivel nem por Y e nem por Z? 0");
        }

    return 0;
}

int exe7(){
    printf("\n\n\n------------ Exercicio 7 ------------\n");

    /*EXERCICIO 7)
        Fazer um algoritmo que dado um numero de 4 dígitos (verifique se o número pertence a faixa) calcule e escreva se ele possui ou não esta característica.

        TESTE: Entrada       Saida
                 3025        POSSUI
    */

    int numero, soma, potencia, PrimeiraMetade, SegundaMetade;
    printf("Digite um numero com 4 algarismos: ");
    scanf("%i", &numero);

        while(numero/1000 < 1 || numero/1000>9.9){
            printf("Numero invalido. Digite um novo numero com 4 algarismos: ");
             scanf("%i", &numero);
        }

        PrimeiraMetade = numero/100;
        SegundaMetade = numero%100;

        soma = PrimeiraMetade + SegundaMetade;

        potencia = pow(soma,2);

        if(potencia == numero){
            printf("\nO numero %i pertence a faixa. \n %i + %i = %i\n %i^2 = %i\n", numero, PrimeiraMetade, SegundaMetade, soma, soma, potencia);
        }
        else{
            printf("\nO nao numero nao pertence a faixa ");
        }
    return 0;
}

int exe8(){
    printf("\n\n\n------------ Exercicio 8 ------------\n");


     /* EXERCICIO 8)
       ler um código do teclado e  mostrar o nome correspondente, de acordo com a lista :
            221 Bernardo
            211 Eustáquio
            311 Luiz
            312 Mário
            332 Artur

        TESTE: Entrada       Saida
                 312         Mario
    */

    int num1;

    printf("\nDigite um codigo: ");
    scanf("%i", &num1);

        switch (num1){
            case 221:
                printf("\nBernardo\n");
            break;
            case 211:
                printf("\nEustaquio\n");
            break;
            case 311:
                printf("\nLuiz\n");
            break;
            case 312:
                printf("\nMario\n");
            break;
            case 332:
                printf("\nArthur\n");
            break;
            default:
                printf("\nCodigo invalido\n");
        }
    return 0;
}

int exe9(){
    printf("\n\n\n------------ Exercicio 9 ------------\n");


    /*EXERCICIO 9)
        Fazer um algoritmo que dado um numero de 5 dígitos; calcule e escreva se este e ou não palíndromo.

        TESTE: Entrada       Saida
                97379       É palíndromo
    */
    int numero, invertido, auxiliar;
    printf("\nDigite um numero com 5 algarismos: ");
    scanf("%i", &numero);

        while(numero/10000 <1 || numero/10000>9.9){
            printf("Numero invalido. Digite um novo numero com 5 algarismos: ");
             scanf("%i", &numero);
         }

        invertido = 0;
        auxiliar = numero;


        while (auxiliar > 0) {
        invertido = (invertido*10) + (auxiliar % 10);
        auxiliar = auxiliar / 10;
        }
        printf("\nNumero normal: %i \nNumero invertido: %i\n", numero, invertido);

        if (numero == invertido){
         printf("Os numeros SAO palindromos\n");
        }
        else{
            printf("Os numeros NAO sao palindromos \n");
        }
    return 0;
}

int exe10(){
    printf("\n\n\n------------ Exercicio 10 ------------\n");

    /*EXERCICIO 10)
        Desenvolver um algoritmo para calcular a conta de água para a SANEAGO

        TESTE: Entrada       Saida
                 1            250
                 50
    */
    int modalidade, num1, num2, num3;
    float QtdAgua, ValorResidencial, ValorComercial, ValorIndustrial, valor1,valor2,valor3;

    printf("\nPara a modalidade RESIDENCIAL digite: 1 ");
    printf("\nPara a modalidade COMERCIAL digite: 2 ");
    printf("\nPara a modalidade INDUSTRIAL digite: 3 ");
    printf("\n\nDigite a sua modalidade: ");
    scanf("%i", &modalidade);

    while(modalidade < 1 || modalidade>3){
        printf("Opcao invalida. Digite sua nova modalidade: ");
         scanf("%i", &modalidade);
    }

    switch (modalidade){
        case 1:
            printf("\nDigite a quantidade de agua em m3/L gasta esse mes: ");
            scanf("%f", &QtdAgua);
            ValorResidencial = (75 + (3.5*QtdAgua));
            printf("Voce deve pagar para a SANEGO R$%0.2f\n", ValorResidencial);
        break;

        case 2:
            printf("\nDigite a quantidade de agua em m3/L gasta esse mes: ");
            scanf("%f", &QtdAgua);

                if(QtdAgua>80){
                    valor1= QtdAgua-80;
                    valor2= 5.5 * valor1;
                    ValorComercial= 500 + valor2;
                    printf("Voce deve pagar para a SANEGO = R$%0.2f\n", ValorComercial);

                }
                else{
                     printf("Voce deve pagar para a SANEGO = R$500\n");
                }
        break;

        case 3:
            printf("\nDigite a quantidade de agua em m3/L gasta esse mes: ");
            scanf("%f", &QtdAgua);

                if(QtdAgua>100){
                    valor1= QtdAgua-100;
                    valor2= 8 * valor1;
                    ValorIndustrial= 800 + valor2;
                    printf("Voce deve pagar para a SANEGO R$%0.2f\n", ValorIndustrial);

                }
                else{
                     printf("Voce deve pagar para a SANEGO = R$800\n");
                }
        break;

        default:
            printf("\nCodigo invalido\n");
    }

    return 0;
}
