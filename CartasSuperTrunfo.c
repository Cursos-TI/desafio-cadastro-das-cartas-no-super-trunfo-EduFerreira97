#include <stdio.h>
int main (){

    char estado, cidade[30], codigo[4];
    int populacao, PonTur;
    float area, PIB;
    /*PonTur é a abreviação de "Pontos turisticos"
    aqui estão atribuidos os formatos das variaveis da carta 1*/

    printf ("Ceará = Estado A\n");
    printf ("Bahia = Estado B\n");
    /*Informativo para sabermos qual letra corresponde a qual estado*/

    printf ("Aqui preencheremos os dados da primeira carta!\n");
    printf ("Digite a letra que corresponde ao estado da cidade escolhida!\n");
    scanf (" %c", &estado);
    
    printf ("Digite o código do estado seguido de um numero para representar a cidade\n");
    scanf ("%s", &codigo);
    
    printf ("Digite o nome da cidade\n");
    scanf ("%s", &cidade);

    printf ("Digite a população\n");
    scanf ("%d", &populacao);

    printf ("Digite a área em km²\n");
    scanf ("%f", &area);

    printf ("Digite o PIB\n");
    scanf ("%f", &PIB);

    printf ("Digite a quantidade de pontos turisticos\n");
    scanf ("%d", &PonTur);

    /*Agora iremos incluir o formato das variáveis da carta 2, 
    assim como os dados da mesma*/

    char estado2, cidade2[30], codigo2[4];
    int populacao2, PonTur2;
    float area2, PIB2;

    printf ("\nAgora preencheremos os dados da segunda carta!\n");
    
    printf ("\nDigite a letra que corresponde ao estado da cidade escolhida!\n");
    scanf (" %c", &estado2);
    
    printf ("Digite o código do estado seguido de um numero para representar a cidade\n");
    scanf ("%s", &codigo2);
    
    printf ("Digite o nome da cidade\n");
    scanf ("%s", &cidade2);

    printf ("Digite a população\n");
    scanf ("%d", &populacao2);

    printf ("Digite a área em km²\n");
    scanf ("%f", &area2);

    printf ("Digite o PIB\n");
    scanf ("%f", &PIB2);

    printf ("Digite a quantidade de pontos turisticos\n");
    scanf ("%d", &PonTur2);

    /*Finalizando o preenchimento dos dados, agora vamos
    comparar as duas cartas*/

    printf ("\nAgora que finalizamos, vamos comparar os dados das duas!\n\n");

    printf ("Carta 1\n");
    printf ("Estado: %c\n", estado);
    printf ("Código: %s\n", codigo);
    printf ("Nome da cidade: %s\n", cidade);
    printf ("População: %d\n", populacao);
    printf ("Area: %.2fkm²\n", area);
    printf ("PIB: %f\n", PIB);
    printf ("Numero de Pontos Turisticos: %d\n\n", PonTur);

    /*Acima estão os dados da carta 1, segue abaixo os dados
    da carta 2*/

    printf ("Carta 2\n");
    printf ("Estado: %c \n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Area: %.2fkm²\n", area2);
    printf ("PIB: %d\n", PIB2);
    printf ("Numero de Pontos Turisticos: %d", PonTur2);

return 0;



}
