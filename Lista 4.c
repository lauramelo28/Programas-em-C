/*
    PRINCIPAIS STRINGS
 strcpy( ): copia uma string em outra;
 strcat( ): adiciona o conteúdo de uma string em outra;
 strcmp( ): compara duas strings (-1 <, 0 = , 1 >) – case sensitive
 strcasecmp( ): compara duas strings (-1 <, 0 = , 1 >) – sem case sensitive
 strlwr( ): converte conteúdo para minúsculas;
 strupr( ): converte conteúdo para maiúsculas;
 atof( ): converte cadeia de caracteres para um valor real;
 atoi( ): converte cadeia de caracteres para um valor inteiro;
 sprintf(): converte a cadeia de saída em uma string;

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
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

    /* 1 - Leia um conjunto indeterminado de palavras e ao final (estipule você um flag)
        informe qual foi a maior palavra e a
        menor palavra digitada, em tamanho e lexicograficamente.

        TESTE: ENTRADA                      SAÍDA
                zeus                 maior palavra: patricia
                patricia             menor palavra: ana
                ana                  maior palavra lexicograficamente:zeus
                Soraia               menor palavra: abacaxi
                abacaxi
                fim

    */

    char palavra[51];
    char MenorPalavra[51];
    char MaiorPalavra[51];
    char MenorPalavraLex[51];
    char MaiorPalavraLex[51];

    printf("Voce ira digitar varias palavras e para terminar digite 'fim' \n");
    printf("\nOBS: Lembre que na tabela ASCII, letras maiusculas são MENORES que letras minusculas\n");
    printf("Digite uma palavra: ");
    fflush(stdin);
    gets(palavra);

    strcpy(MenorPalavra,palavra);
    strcpy(MaiorPalavra,palavra);
    strcpy(MenorPalavraLex,palavra);
    strcpy(MaiorPalavraLex,palavra);

    while(strcmp (palavra, "fim") != 0){

        if ( strlen(palavra)< strlen(MenorPalavra) ){
            strcpy(MenorPalavra,palavra);
        }

        if ( strlen(palavra)> strlen(MaiorPalavra) ){
            strcpy(MaiorPalavra,palavra);
        }

        if( strcmp (palavra, MenorPalavraLex) == -1){
            strcpy(MenorPalavraLex,palavra);
        }

        if( strcmp (palavra, MaiorPalavraLex) == 1){
            strcpy(MaiorPalavraLex,palavra);
        }
        gets(palavra);
    }


    printf("\nMaior palavra encontrada: %s", MaiorPalavra);
    printf("\nMenor palavra encontrada: %s", MenorPalavra);
    printf("\nMenor palavra lexicograficamente encontrada: %s", MenorPalavraLex);
    printf("\nMaior palavra lexicograficamente encontrada: %s", MaiorPalavraLex);
    printf("\n\n");

 return 0;
}

int exe2(){
    /*2 – Ler um string de no máximo 50 caracteres e contar quantas letras A essa palavra possui.

        TESTE: ENTRADA    SAÍDA
                laura       2

    */
    int i, qtd, tamanhoPalavra;
    char palavra[51];

    qtd=0;

    printf("\nDigite uma string: ");
    fflush(stdin);
    gets(palavra);

    tamanhoPalavra = strlen(palavra);

    for(i=0; i<=tamanhoPalavra ; i++){
        if(palavra[i]=='a' || palavra[i]=='A'){
           qtd++;
        }
    }

    printf("Essa palavra possui: %i letras A",qtd);

    return 0;
}

int exe3(){
    /*3 – Ler uma string de no máximo 50 caracteres e indicar quais as posições da letra A nessa palavra.

        TESTE:  ENTRADA    SAÍDA
                 manga      1,4

    */

    int i, tamanhoPalavra;
    char palavra[51];

    printf("\nDigite uma palavra: ");
    fflush(stdin);
    gets(palavra);

    tamanhoPalavra = strlen(palavra);

    printf("Essa palavra possui a letra A nas posicoes:");

    for(i=0; i<=tamanhoPalavra ; i++){
        if(palavra[i]=='a' || palavra[i]=='A'){
           printf(" %i, ",i);
        }
    }

    return 0;
}

int exe4(){
    /*4 – Ler uma string de no máximo 50 caracteres e em seguida um caractere, mostrar quais as posições esse caractere
            aparece na string lida e quantas vezes ele apareceu.

        TESTE:  ENTRADA           SAÍDA
               televisao*         posicao: 9
                   *                qtd:1

    */

    int i, tamanhoPalavra,qtd;
    char palavra[51];
    char caracter;

    printf("\nDigite uma palavra: ");
    fflush(stdin);
    gets(palavra);

    printf("\nDigite um caracter: ");
    scanf("%c", &caracter);

    qtd=0;
    tamanhoPalavra = strlen(palavra);

    for(i=0; i<=tamanhoPalavra ; i++){
        if(palavra[i]== caracter){
           printf("\nEsse caracter '%c' aparece na posicao: %i", caracter, i);
           qtd++;
        }
    }

    printf("\n\nA palavra '%s' tem %i caracteres '%c' ", palavra, qtd, caracter);

    return 0;
}

int exe5(){

    /*5 - Ler uma string de no máximo 50 caracteres e em seguida um caractere (entre A e z - consista se o caracter esta nesse
        intervalo), mostrar quais as posições esse caractere (maiúscula ou minúscula) na string lida e quantas vezes ele apareceu.

        TESTE:   ENTRADA        SAÍDA
                caderno        posicao: 4
                    r           qtd: 1

    */

    int i, tamanhoPalavra,qtd;
    char palavra[51], caracter[2];

    printf("\nDigite uma palavra: ");
    fflush(stdin);
    gets(palavra);

    printf("\nDigite um caracter entre A e z: ");
    gets(caracter);

    while((caracter[0] < 'A') || (caracter[0] > 'z')){
        printf("\nErro - Caracter invalido. Ele deve estar entre A e z.");
        printf("\nDigite um novo caracter: ");
        fflush(stdin);
        gets(caracter);
    }

    qtd=0;
    tamanhoPalavra = strlen(palavra);

    strcpy(caracter, strlwr(caracter));
    strcpy(palavra, strlwr(palavra));

    for(i=0; i<=tamanhoPalavra; i++){
        if(palavra[i] == caracter[0]){
           printf("\nEsse caracter '%c' aparece na posicao: %i", caracter[0], i);
           qtd++;
        }
    }

    printf("\n\nEssa palavra tem %i caracteres '%c' ", qtd, caracter[0]);

    return 0;
}

int exe6(){
    /*6 - Ler uma string de no máximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são números e
        quantos não são nem números nem letras.

        TESTE:   ENTRADA            SAÍDA
                laura123*-+.      letras: 5
                                  numeros: 3
                                  caracter qualquer: 4

    */

    char palavra[51];
    int i, qtdLetras, qtdNumeros, tamanhoPalavra, qtdCaracter;
    qtdLetras=0;
    qtdNumeros=0;
    qtdCaracter=0;

    printf("\nDigite uma palavra: ");
    fflush(stdin);
    gets(palavra);

    tamanhoPalavra = strlen(palavra);

    for(i=0; i<tamanhoPalavra ; i++){
        if((palavra[i]>= 'A') && (palavra[i] <='z')){
           qtdLetras++;
        }
        else{
            if((palavra[i]>='0') && (palavra[i]<='9')){
                qtdNumeros++;
            }
            else{
                qtdCaracter++;
            }
        }
    }
    printf("\nEssa palavra tem %i numeros", qtdNumeros);
    printf("\nEssa palavra tem %i letras", qtdLetras);
    printf("\nEssa palavra tem %i caracteres que nao sao numeros nem letras", qtdCaracter);

    return 0;
}

int exe7(){
    /*7 – Ler uma string de no máximo 50 caracteres e criar uma nova string com seu inverso, isso é a ultima letra da primeira
    string será a primeira na nova string e assim sucessivamente.

        TESTE: ENTRADA    SAÍDA
                porta     atrop

    */

    char aux, string[51],stringAUX[51];
    int tamanhoString, i, posicao;

    printf("\nDigite uma string: ");
    fflush(stdin);
    gets(string);

    tamanhoString = strlen(string);
    posicao=0;

    for(i=tamanhoString-1; i>=0; i--){
       stringAUX[posicao]= string[i];
       posicao++;
    }
    printf("\nString invertida: %s\n", stringAUX);

    return 0;
}

int exe8(){
    /*8 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Utilize uma string
        auxiliar.

        TESTE:      ENTRADA                     SAÍDA
                estudantes da puc          estudantesdapuc

    */

    char frase[51], fraseAuxiliar[51];
    int contadorEspaco;
    printf("Digite uma frase: ");
    fflush(stdin);
    gets(frase);

    contadorEspaco=0;

    for (int i=0; i<=strlen(frase); i++){
        if(frase[i]== ' '){
            contadorEspaco++;
        }
        else{
            fraseAuxiliar[i-contadorEspaco]=frase[i];
        }
    }

    printf("\nFrase: %s", frase);
    printf("\nFrase sem espacos: %s", fraseAuxiliar);

    return 0;
}

int exe9(){
    /*9 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Sem utilize string auxiliar.

        TESTE:      ENTRADA                     SAÍDA
                estudantes da puc          estudantesdapuc

    */

    char frase[51];
    int contadorEspaco;
    printf("Digite uma frase: ");
    fflush(stdin);
    gets(frase);

    printf("\nFrase: %s", frase);

    for (int i=0; i<=strlen(frase); i++){
        if(frase[i]== ' '){
            contadorEspaco++;
        }
        else{
            frase[i-contadorEspaco]=frase[i];
        }
    }

    printf("\nFrase sem espacos: %s", frase);
    return 0;
}

int exe10(){
    /*10 - Ler uma string de no máximo 50 caracteres em seguida leia outra string de no máximo 3 caracteres, informe quantas
        vezes a segunda string aparece na primeira string, e diga as posições iniciais em que ela aparece.

        TESTE:    ENTRADA   SAÍDA
                    laura   qtd: 1
                    ura     posicao: 2

    */

    char PrimeiraString[51], SegundaString[4];
    int i, j, quantidade;

    quantidade=0;

    printf("Digite uma string: ");
    fflush(stdin);
    gets(PrimeiraString);
    printf("Digite outra string de no maximo 3 caracteres: ");
    fflush(stdin);
    gets(SegundaString);

    for(i=0; PrimeiraString[i] !='\0'; i++){
        char aux[4]="";

            for(j=i; j-i != strlen(SegundaString); j++){

                if(PrimeiraString[j] != '\0'){
                    aux[j-i] = PrimeiraString[j];
                }
                else{
                    break;
                }
            }
            if(strcmp(SegundaString, aux) == 0){
                printf("\nA Segunda String aparece na posicao: %i", i);
                quantidade++;
            }
    }
    printf("\nA qtde de vezes que a Segunda String aparece na Primeira e: %i\n", quantidade);

    return 0;
}
