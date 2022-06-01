/*
29/05/22
7º Lista de exercícios - Modularização Revisão
Aluna: Laura Enísia Rodrigues Melo
Turma: Eng. Software - Noite
Professor: Roberto
*/


#include <stdio.h>
#include <stdlib.h>

int exe1();
int exe2();
int exe3();
int exe4();
int exe5();
int exe6();

float N, S;

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
            default:
                printf("\nOpcao invalida");
        }
    }
    while(opcao!=6);
    return 0;
}

int exe1(){
    float a,b,numerador, denominador, sinal, N, S;
    a=0;
    b=1;
    sinal=1;
    S=0;
    denominador=2;

    printf("Digite o valor de N: ");
    scanf("%f", &N);

    for(float i=0; i<N; i++){
        numerador= a+b;
        a=b;
        b=numerador;

        if(i==1){
          sinal=sinal*(-1);
        }

        S = (S +((a/denominador)*sinal));

        denominador = denominador+2;
        sinal=sinal*(-1);
    }
    printf("\nSoma = %f\n", S);
   return 0;
}


int exe2(){

    void somaTermos2(){
        float a,b,numerador, denominador, sinal, N, S;
        a=0;
        b=1;
        sinal=1;
        S=0;
        denominador=2;

        printf("Digite o valor de N: ");
        scanf("%f", &N);

        for(float i=0; i<N; i++){
            numerador= a+b;
            a=b;
            b=numerador;

            if(i==1){
              sinal=sinal*(-1);
            }

            S = (S +((a/denominador)*sinal));

            denominador = denominador+2;
            sinal=sinal*(-1);
        }
        printf("\nSoma = %f\n", S);
    }

    somaTermos2();
    return 0;
}

int exe3(){
    void somaTermos3(){
        float a,b,numerador, denominador, sinal;
        a=0;
        b=1;
        sinal=1;
        denominador=2;

        for(float i=0; i<N; i++){
            numerador= a+b;
            a=b;
            b=numerador;

            if(i==1){
              sinal=sinal*(-1);
            }

            S = (S +((a/denominador)*sinal));

            denominador = denominador+2;
            sinal=sinal*(-1);
        }
        printf("\nN = %0.f \nSoma = %f\n", N, S);
    }

    printf("Digite o valor de N: ");
    scanf("%f", &N);
    somaTermos3();
    return 0;
}

int exe4(){
    void somaTermos4(float Num, float *S){
        float a,b,numerador, denominador, sinal;
        a=0;
        b=1;
        sinal=1;
        denominador=2;

        for(float i=0; i<Num; i++){
            numerador= a+b;
            a=b;
            b=numerador;

            if(i==1){
              sinal=sinal*(-1);
            }

            *S = (*S +((a/denominador)*sinal));

            denominador = denominador+2;
            sinal=sinal*(-1);
        }
        printf("\nN = %0.f \nSoma = %f\n",Num, *S);
    }

    float N, S1;
    printf("Digite o valor de N: ");
    scanf("%f", &N);
    somaTermos4(N, &S1);

    return 0;
}

int exe5(){

    float somaTermos5(){
        float a,b,numerador, denominador, sinal, S;
        a=0;
        b=1;
        sinal=1;
        S=0;
        denominador=2;

        for(float i=0; i<N; i++){
            numerador= a+b;
            a=b;
            b=numerador;

            if(i==1){
              sinal=sinal*(-1);
            }

            S = (S +((a/denominador)*sinal));

            denominador = denominador+2;
            sinal=sinal*(-1);
        }
        return S;
    }

    printf("Digite o valor de N: ");
    scanf("%f", &N);
    printf("\nN = %0.f \nSoma = %f\n", N, somaTermos5());
    return 0;
}


int exe6(){

    float somaTermos6(float Num){
        float a,b,numerador, denominador, sinal, S;
        a=0;
        b=1;
        sinal=1;
        S=0;
        denominador=2;

        for(float i=0; i<Num; i++){
            numerador= a+b;
            a=b;
            b=numerador;

            if(i==1){
              sinal=sinal*(-1);
            }

            S = (S +((a/denominador)*sinal));

            denominador = denominador+2;
            sinal=sinal*(-1);
        }
        return S;
    }

    float N;
    printf("Digite o valor de N: ");
    scanf("%f", &N);
    printf("\nN = %0.f \nSoma = %f\n", N, somaTermos6(N));
    return 0;
}
