#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

  int exe4a();
  int exe4b();
  int exe4c();
  int exe4d();
  int exe4e();
  int exe4f();
  int exe4g();
  int exe4h();
  int exe4i();
  int exe4j();
  int exe5_1_7();
  int exe5_8_12();
  int exe5_13_15();

int main(){
  exe4a();
  exe4b();
  exe4c();
  exe4d();
  exe4e();
  exe4f();
  exe4g();    
  exe4h();
  exe4i();
  exe4j(); 
  exe5_1_7();
  exe5_8_12();
  exe5_13_15();

  return 0;
}
  
  int exe4a(){
    printf("\n\n\n------------ Exercicio 4a) ------------");
    
    /* 4a) Leia um número e imprima seu sucessor.
        TESTE: Entrada           Saida
                  2                3
    */
    
    int numero;
      printf("\nDigite um numero inteiro: ");
      scanf("%i", &numero);
        numero++;
        printf("O sucessor desse numero e: %i", numero);
    return 0;
  }

  int exe4b(){
    printf("\n\n\n------------ Exercicio 4b) ------------");

    /* 4b) Calcule a média aritmética de quatro números inteiros dados.
        TESTE: Entrada           Saida
               1;2;3;4           2.50
    */
    
    int num1, num2, num3, num4;
      float media;
      printf("\nDigite o primeiro numero inteiro: ");
      scanf("%i", &num1);
      printf("\nDigite o segundo numero inteiro: ");
      scanf("%i", &num2);
      printf("\nDigite o terceiro numero inteiro: ");
      scanf("%i", &num3);
      printf("\nDigite o quarto numero inteiro: ");
      scanf("%i", &num4);
      media = ((num1+num2+num3+num4)/4.0) ;
      printf ("\nA media dos numeros = %0.2f", media);
    return 0;
    }
  
  int exe4c(){
    printf("\n\n\n------------ Exercicio 4c) ------------");
    
    /*4c) Faça um algoritmo que receba 3 (três) notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.
        TESTE:     Entrada              Saida
                1;2;3(nota)            2.25
                2;2;4 (peso)
    */
    
    float n1,n2,n3,p1,p2,p3, MediaPonderada;
    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &n3);
  
    printf("\nDigite o peso 1: ");
    scanf("%f", &p1);
    printf("\nDigite o peso 2: ");
    scanf("%f", &p2);
    printf("\nDigite o peso 3: ");
    scanf("%f", &p3);
  
    MediaPonderada = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3) ;
    printf("\nA media ponderada dessas notas = %0.2f", MediaPonderada);
    return 0;
  }
  
  int exe4d(){
    printf("\n\n\n------------ Exercicio 4d) ------------");
    
    /* 4d) Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F). 
        TESTE:     Entrada        Saida
                     27            80,6              
*/
    
    float tempC, tempF;
    printf("\nDigite a temperatura em Celsius: ");
    scanf ("%f", &tempC);
    tempF = 9.0/5.0 * tempC + 32;
    printf ("\nA temperatura em Fahrenheit = %0.2f", tempF);
    return 0;
  }
  
  int exe4e(){
    printf("\n\n\n------------ Exercicio 4e) ------------");
    
    /*4e) Faça um algoritmo que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o novo salário. 
        TESTE:     Entrada        Saida
                    1500           1650
                    10  
    */
    
    float salario, aumento, Aaumento, SalarioFinal;
    printf("\nDigite o salario do funcionario: ");
    scanf ("%f", &salario);
    printf("\nDigite o percentual de aumento: ");
    scanf ("%f", &aumento);
    Aaumento = aumento/100.0 * salario;
    SalarioFinal= salario + Aaumento;
    printf("\nO salario com o aumento = R$%0.2f", SalarioFinal);
    return 0;
  }
  
  int exe4f(){
    printf("\n\n\n------------ Exercicio 4f) ------------");
    
    /*4f)Faça um algoritmo que peça ao usuário a base e a altura e calcule a área de um triangulo. 
        TESTE:     Entrada        Saida
                    10             150
                    30 
    */
    
    int base, altura;
    float areaT;
    printf("\nDigite a base do triangulo: ");
    scanf("%i", &base);
    printf("\nDigite a altura do triangulo: ");
    scanf("%i", &altura);
    areaT = (base*altura)/2;
    printf("\nA area do triangulo = %0.2f",areaT);
    return 0;
  }
  
  int exe4g(){
    printf("\n\n\n------------ Exercicio 4g) ------------");
    
    /* 4g)Pedro comprou um saco de Ração com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ração em gramas. Faça um algoritmo que receba o peso do Saco de ração e a quantidade de ração fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias 
      TESTE:     Entrada        Saida
                   5            3500
                  100
                  200
    */
    
    float SacoRacao, RacaoGato1, RacaoGato2, RacaoConsumida, RestoSaco;
  
    printf("\nDigite o peso em Kg do saco de racao: ");
    scanf("%f", &SacoRacao);
    printf("\nDigite a racao em gramas do gato 1: ");
    scanf("%f", &RacaoGato1);
    printf("\nDigite a racao em gramas do gato 2: ");
    scanf("%f", &RacaoGato2);
  
    SacoRacao = SacoRacao*1000;
    RacaoGato1 = RacaoGato1*5;
    RacaoGato2 = RacaoGato2*5;
    RacaoConsumida = RacaoGato1 + RacaoGato2;  
    RestoSaco = SacoRacao - RacaoConsumida;
  
    printf("\nApos 5 dias restara no saco de racao: %0.2f gramas",RestoSaco);
    return 0;
  }
  
  int exe4h(){
    printf("\n\n\n------------ Exercicio 4h) ------------");
    
    /* 4h) Ler dois números inteiros para variáveis a e b. Trocar o valor de b com o de a, e imprimi-los. 
      TESTE:     Entrada        Saida
                   5            a=6
                   6            b=5
    */
    
    int a, b,c;
    printf("\nDigite o valor de a: ");
    scanf("%i",&a);
    printf("\nDigite o valor de b: ");
    scanf("%i",&b);
    c=a;
    a=b;
    b=c;
    printf("\nO valor de a = %i, b = %i", a,b);
    return 0;
  }
  
  int exe4i(){
    printf("\n\n\n------------ Exercicio 4i) ------------");
    
    /* 4i) Leia um número e imprima o resto da divisão por 7. Utilize o comando resto (a,b) na linguagem C (a % b).
    TESTE:     Entrada        Saida
                  49            0                
    */
    
    int a, resto;
    printf("\nDigite um numero: ");
    scanf("%i",&a);
    resto = a % 7;
    printf ("\nO resto de %i / 7 = %i",a,resto);
    return 0;
  }
  
  int exe4j(){
    printf("\n\n\n------------ Exercicio 4j) ------------");
    
    /*4j) Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do número de termos.
    TESTE:     Entrada        Saida
                  5            56
                  6
                  7
    */
    
    int a1,a2,n,an;
    float r, soma;
    
    printf("\nDigite o primeiro termo da PA: ");
    scanf("%i", &a1);
    printf("\nDigite o segundo termo da PA: ");
    scanf("%i", &a2);
    printf("\nDigite o numero de termos da PA: ");
    scanf("%i", &n);
  
    r = a2-a1;
    an = (a1+((n-1)*r));
    soma = ((n*(a1+an))/2.0);
  
    printf("\nA soma dos termos dessa PA = %0.2f", soma);
    return 0;
  }

  int exe5_1_7(){
      printf("\n\n\n------------ Exercicio 5.1 a 5.7 ------------\n");
      int num, resto, intervalo1, intervalo2, intervalo3;
  
      printf("\nDigite um numero inteiro: ");
      scanf("%i", &num);
  
      /* 5.1) Ler um valor inteiro do teclado e dizer se é par 
         TESTE: Entrada           Saida
                  2                  1
                  3                  0
      */
      resto = num % 2 == 0;
      printf("\n1) O numero e par? %i", resto);

    
      /* 5.2) Ler um valor inteiro do teclado e dizer se é ímpar 
        TESTE: Entrada           Saida
                  2                  0
                  3                  1
      */
      resto = num % 2 == 1;
      printf("\n2) O numero e impar? %i", resto);
  
  
      /* 5.3) Ler um valor inteiro do teclado e dizer se ímpar e maior que 100. 
          TESTE: Entrada          Saida
                    3                 0
                    111               1
      */
      resto = (num %2 == 1) && (num>100);
      printf("\n3) O numero e impar e maior que 100? %i",resto);
  
  
      /* 5.4) Ler um valor inteiro do teclado e dizer se é par e menor que 100, ou ímpar e maior que 100.
            TESTE: Entrada          Saida
                      4               1
                      111             1
      */
      resto = ((num %2 == 0) && (num<100)) || ((num %2 == 1) && (num>100)) ;
      printf("\n4) O numero e par e menor que 100 OU impar e maior que 100? %i", resto);
  
      /* 5.5)Ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75). 
      TESTE: Entrada         Saida
                10             0
                50             1
      */
      intervalo1 = (num>25) && (num<75);
      printf("\n5) O numero esta entre o intervalo (25:75)? %i",intervalo1);
  
      /* 5.6)Ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado entre [25:75].
      TESTE: Entrada          Saida
                 25             1
                 78             0
      */
      intervalo2 = (num>=25) && (num<=75);
      printf("\n6) O numero esta entre o intervalo [25:75]? %i",intervalo2);
  
      /* 5.7) Ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99]
      TESTE: Entrada          Saida
                25             1
                100            0

      */
      intervalo3 = ((num>=15) && (num<=45)) || ((num>=66) && (num<=99));
      printf("\n7) O numero esta entre o intervalo [15:45] ou [66:99]? %i\n",intervalo3);
  
    return 0;
  }

  int exe5_8_12(){
    printf("\n\n\n------------ Exercicio 5.8 a 5.12 ------------\n");
    int valor1, valor2, teste;
    float valor3,valor4,valor5,valor6,valor7;
       
      /* 5.8) Ler dois valores inteiros do teclado e dizer se o primeiro é par e o segundo é ímpar.
      TESTE: Entrada           Saida
              2                  1
              3                  1
      */
      printf("\nDigite o primeiro valor inteiro: ");
      scanf("%i", &valor1);
      printf("Digite o segundo valor inteiro: ");
      scanf("%i", &valor2);
    
      teste = (valor1 % 2 == 0);  
      printf("\n8) O primeiro valor e par? %i", teste);
    
      teste = (valor2 % 2 != 0);
      printf("\n   O segundo valor e impar? %i", teste);
      printf ("\n");

    
      /* 5.9)Ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo, e o segundo é ímpar e negativo.
      TESTE: Entrada           Saida
              2                  1
              3                  0
      */
      teste = ((valor1 % 2 == 0) && (valor1>0));
      printf("\n9) O primeiro valor e par e positivo? %i", teste);
      teste = ((valor2 % 2 !=0) && (valor2<0));
      printf("\n   O primeiro valor e impar e negativo? %i", teste);
      printf("\n");

    
      /* 5.10)Ler dois valores reais do teclado e dizer se o primeiro é maior, menor ou igual ao segundo.
      TESTE: Entrada           Saida
              2.5 ; 3.1         0  
                                1
                                0
      */
      printf("\nDigite o primeiro valor real: ");
      scanf("%f", &valor3);
      printf("Digite o segundo valor real: ");
      scanf("%f", &valor4);
      teste = (valor3 > valor4);
      printf("\n10) O primeiro valor e maior que o segundo? %i", teste);
      teste = (valor3 < valor4);
      printf("\n    O primeiro valor e menor que o segundo? %i", teste);
      teste = (valor3 == valor4);
      printf("\n    O primeiro valor e igual ao segundo? %i\n", teste);

    
      /*5.11)Ler três valores reais do teclado e dizer se o primeiro está entre os outros dois
       TESTE: Entrada           Saida
                2.0               1        
                1.0
                3.0
      */
      
      printf("\nDigite o primeiro valor real: ");
      scanf("%f",&valor5);
      printf("Digite o segundo valor real: ");
      scanf("%f",&valor6);
      printf("Digite o terceiro valor real: ");
      scanf("%f",&valor7);
    
      teste = ((valor5>=valor6) && (valor5<=valor7) || (valor5<=valor6) && (valor5>=valor7) );
      printf("\n11) O primeiro valor esta entre os outros dois? %i", teste);
    
  
      /*5.12) Ler três valores reais do teclado e dizer se o primeiro não está entre os outros dois
        TESTE: Entrada           Saida
                200.0              1
                100.0
                300.0
      */
      printf("\n\nDigite o primeiro valor real: ");
      scanf("%f",&valor5);
      printf("Digite o segundo valor real: ");
      scanf("%f",&valor6);
      printf("Digite o terceiro valor real: ");
      scanf("%f",&valor7);
      
      teste = ((valor5<=valor6) || (valor5>=valor7));
      printf("\n12) O primeiro valor nao esta entre os outros dois? %i", teste);
    return 0;
  }
    
  int exe5_13_15(){    
      printf("\n\n\n------------ Exercicio 5.13 a 5.15 ------------\n");
      char a,b,c,x;
      int teste;
      
      /*5.13) Ler três valores literais (caracteres) do teclado e dizer se o primeiro está entre os outros dois
          TESTE: Entrada           Saida
                 b                   1
                 a
                 c              
      */
      printf("\nDigite 3 caracteres: ");
      fflush(stdin);
      scanf("%c", &a);
      fflush(stdin);
      scanf("%c", &b);
      fflush(stdin);
      scanf("%c", &c);
    
      teste = (a>b) && (a<c);
      printf("\n13) O primeiro caracter e maior que o segundo e menor que o terceiro? %i",teste);
  
      /*5.14)Ler três valores literais (caracteres) do teclado e dizer se estão em ordem crescente lexicograficamente.
          TESTE: Entrada           Saida
                   a                1
                   b
                   c
      */
      printf("\n\nDigite 3 caracteres: ");
      fflush(stdin);
      scanf("%c", &a);
      fflush(stdin);
      scanf("%c", &b);
      fflush(stdin);
      scanf("%c", &c);
    
      teste = ((a>b) && (b<c));
      printf("\n14) Os valores estao ordem crescente lexicograficamente? %i\n",teste);

      
    /* 5.15) Ler um valor literal (caractere) do teclado e dizer se é uma letra maiúscula.
          TESTE: Entrada           Saida
                   H                1
    */   
    printf("\nDigite um valor literal: ");
    fflush(stdin);
    scanf("%c", &x);

    teste = (x>='A' && x<='Z');
    
    printf("\n15) O caracter e maiusculo? %i",teste);
    printf("\n\n\n--------------------- FIM ---------------------\n");
    return 0;
  }
