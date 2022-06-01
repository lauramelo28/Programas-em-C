/*
15/05/22
6º Lista de exercícios - Arquivos
Aluna: Laura Enísia Rodrigues Melo
Turma: Eng. Software - Noite
Professor: Roberto
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//double e float sao parecidos, so que o float sao 4 bytes e o double sao 8bytes
//Tem q usar double em arquivo pq tem 8bytes
//quando usa double o % é f
//fmod é o resto e faz o casting de double para int

void procedimentoA();
void procedimentoB();
void procedimentoC();
void procedimentoD();

int main(){
    //menu
  int opcao;
    do{
        printf("\n\n-----------------------------------------");
        printf("\nDigite o exercicio que deseja 1,2,3 ou 4: ");
        scanf("%i", &opcao);

        switch (opcao){
            case 1:
               procedimentoA();
            break;
            case 2:
                procedimentoB();
            break;
            case 3:
                 procedimentoC();
            break;
            case 4:
                procedimentoD();
            break;
            default:
                printf("\nOpcao invalida");
        }
    }
    while(opcao!=4);
    return 0;
}

void procedimentoA(){
    //a) Gravar em um arquivo os 64 primeiros valores da série: 1 1 2 3 5 8 13 21 34
    FILE *arquivo_Fibonacci;

    double a,b,auxiliar,i;

    if((arquivo_Fibonacci = fopen("arquivo_Fibonacci.txt","w")) == NULL){
        printf("Erro de abertura! \n");
    }
    else{
        a = 0;
        b = 1;
        fprintf(arquivo_Fibonacci, "1");
        for(i = 0; i < 64; i++) {
            auxiliar = a + b;
            a = b;
            b = auxiliar;
            fprintf(arquivo_Fibonacci, "\n%.0f", auxiliar);
        }
        fclose(arquivo_Fibonacci);
    }
    system("pause");
}


void procedimentoB(){
    //b) Ler o arquivo letra a e armazenar os valores pares em um arquivo e os impares em outro arquivo
    int resto;
    double valor;

    FILE *arquivo;
    FILE *arquivo_Impar;
    FILE *arquivo_Par;
    arquivo_Par = fopen("arquivo_Par.txt","w");
    arquivo_Impar = fopen("arquivo_Impar.txt","w");

    if((arquivo = fopen("arquivo_Fibonacci.txt","r")) == NULL){
        printf("Erro de abertura! \n");
    }
    else{
        if((arquivo_Par = fopen("arquivo_Par.txt","w")) == NULL){
            printf("Erro de abertura! \n");
        }
        else{

            if((arquivo_Impar = fopen("arquivo_Impar.txt","w")) == NULL){
                printf("Erro de abertura! \n");
            }
            else{
                fscanf(arquivo,"%lf",&valor);

                while(!feof(arquivo)){
                    resto=fmod(valor,2);

                    if(resto == 0) {
                         fprintf(arquivo_Par, "%.0lf\n", valor);
                    }
                    else{
                         fprintf(arquivo_Impar, "%.0lf\n", valor);

                    }
                    fscanf(arquivo,"%lf",&valor);
                }
            }
        }
    }

    fclose(arquivo);
    fclose(arquivo_Par);
    fclose(arquivo_Impar);

    system("pause");
}

void procedimentoC(){
    //c) Ler o arquivo letra a e armazenar apenas os primos em um arquivo
    int resto;
    double aux;

    FILE *arquivo;
    FILE *arquivo_Primo;
    arquivo_Primo = fopen("arquivo_Primo.txt","w");

    if((arquivo = fopen("arquivo_Fibonacci.txt","r")) == NULL){
        printf("Erro de abertura! \n");
    }
    else{
        if((arquivo_Primo = fopen("arquivo_Primo.txt","w")) == NULL){
            printf("Erro de abertura! \n");
        }
        else{
            fscanf(arquivo," %lf",&aux);
            //fprintf(arquivo_Primo, "Numeros primos do arquivo: \n");

            while(!feof(arquivo)){
                int qtdPrimo=0;

                for(int i=2; i< aux/2; i++){
                    resto=fmod(aux,i);

                    if(resto==0){
                        qtdPrimo++;
                        break;
                    }
                }
                if(qtdPrimo == 0){
                    fprintf(arquivo_Primo, "\n%.0lf",aux);
                }
                fscanf(arquivo,"%lf",&aux);
            }
        }
    }

    fclose(arquivo);
    fclose(arquivo_Primo);
    system("pause");
}


void procedimentoD(){
    /*d)Leia um conjunto de valores (flag -1) e verifique para cada valor se ele se encontra ou não no arquivo
        gravado na letra a. Caso não exista deverá mostrar o valor anterior e o posterior a esse valor. Exemplo:
        caso seja lido o valor 8 – deverá ser mostrada a informação o valor 8 está no arquivo na posição 6, caso o
        valor lido seja o 17 – deverá ser mostrada a informação o valor 17 não está no arquivo, valores mais
        próximos: 13 e 21.

        TESTE     ENTRADA              SAÍDA
                 3 10 21 -1         3 esta no arquivo, posicao 4
                                    10 nao esta no arquivo, valores mais proximos 8 e 13
                                    21 esta no arquivo, posicao 8


    */
    double valor, linha1, linha2 , posicao_Anterior , array[40] ;
    int i,posicao_Par, posicao_Impar;

    valor=0;
    i=0;

    FILE*arquivo;

    if ((arquivo = fopen("arquivo_Fibonacci.txt","r")) == NULL){
      printf("Erro de abertura! \n");
    }
    else{

        printf("\nVoce ira digitar varios valores, caso queira parar digite: -1");

        while (valor != -1){
            printf("\nDigite um valor: ");
            scanf("%lf",&valor);

            array[i] = valor;
            array[i+1] = '\0';
            i++;
        }

        for(i=0; array[i] != '\0'; i++){
            arquivo = fopen("arquivo_Fibonacci.txt","r");

            posicao_Impar = 1;
            posicao_Par = 2;
            posicao_Anterior = 0;

        while (!feof(arquivo)){
            fscanf(arquivo,"%lf",&linha1);
            fscanf(arquivo,"%lf",&linha2);

            if((array[i] == linha1) && (array[i] == linha2)){
                printf("\nO valor '%.0f' esta no arquivo e nas posicoes: '%i' e '%i'\n",array[i],posicao_Impar, posicao_Impar+1);
                break;
            }

            if(array[i] == linha1){
                printf("\nO valor '%.0f' esta no arquivo e na posicao: '%i'\n",array[i],posicao_Impar);
                break;
            }

            if(array[i] == linha2){
                printf("\nO valor '%.0f' esta no arquivo e na posicao '%i'\n",array[i],posicao_Par);
                break;
            }

            if(array[i] > linha1 && array[i] < linha2){
                printf("\nO valor '%.0f' NAO esta no arquivo. Valores mais proximos sao: '%.0f' e'%.0f'\n",array[i],linha1,linha2);
                break;
            }

            if(array[i] > posicao_Anterior && array[i] < linha1){
                printf("\nO valor '%.0f' NAO esta no arquivo. Valores mais proximos sao: '%.0f' '%.0f'\n",array[i],posicao_Anterior,linha1);
                break;
            }

            posicao_Impar = posicao_Par + 1;
            posicao_Par = posicao_Par + 2;
            posicao_Anterior = linha2;
        }
      }
    }
    fclose(arquivo);
    system("pause");
}








