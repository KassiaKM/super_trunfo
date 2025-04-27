#include <stdio.h>
int main () {
    // Declaração das variáveis para a Carta 1 
    char estadoCarta1;
    char codigoCarta1 [3];
    char nomeCidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estadoCarta2;
    char codigoCarta2 [3];
    char nomeCidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da Carta1
    printf ("--- Cadastro da Carta1 ---\n");

    printf ("Estado (A-H) : ");
    scanf ("%c", &estadoCarta1); // Note o espaço antes do %c para consumir espaços em branco

    printf ("Codigo de Carta (ex: A01):  ");
    scanf ("%s", codigoCarta1 ); 

    printf ("Nome da Cidade:  ");
    scanf ("%s", nomeCidade1); // Atenção: scanf com %s lê apenas até o primeiro espaço em branco

    printf ("População:  ");
    scanf ("%d", &população1);

    printf ("Area (em km²) :  ");
    scanf ("%f", &area1);

    printf ("PIB (em bilhoes de reais) :  ");
    scanf ("%f", &pib1);

    // Leitura dos dados da Carta2
    printf ("--- Cadastro da Carta2 ---\n");

    printf ("Estado (A-H) :  ");
    scanf ("%c", &estadoCarta2); // Note o espaço antes do %c para consumir espações em branco

    printf ("Codigo de Carta (ex: A01): ") 
    scanf ("%s", codigoCarta2); 

    printf ("Nome da Cidade:  ");
    scanf ("%s", nomeCidade2); // Atenção: scanf com %s lê apenas até o primeiro espaço em branco

    printf ("População:  ");
    scanf ("%d", &populacao2);

    printf ("Area (em km²):   ");
    scanf ("%f", &area2);

    printf ("PIB (em bilhoes de reais) :  ");
    scanf ("%f", &pib2);



    return 0;

}
