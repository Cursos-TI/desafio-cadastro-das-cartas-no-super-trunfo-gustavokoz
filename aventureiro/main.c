#include <stdio.h>

int main() {

    /*
    Criação das variaveis:
    População (Population),
    PIB,
    Area,
    Número de pontos turísticos (PointsAttractions),
    Estado (State),
    Código da Carta (CardCode),
    Nome da Cidade (City)
    */

    char State,State2;
    char CardCode[2],CardCode2[2];
    char City[50],City2[50];
    int PIB,PIB2,Area,Area2,Population,Population2,PointsAttractions,PointsAttractions2;

    /*Formulario primeira carta*/

    printf("1° Carta\n");
    printf("Qual é o estado (A-H):");
    scanf("%c",&State);

    printf("Qual o codigo (01 até 04):");
    scanf("%s", CardCode);

    printf("Qual é o nome da cidade:");
    scanf("%s", City);

    printf("Qual é a quantidade de população da cidade:");
    scanf("%d", &Population);

    printf("Qual é a área da cidade em quilômetros:");
    scanf("%d", &Area);

    printf("Qual é o PIB em bilhões de reais:");
    scanf("%d", &PIB);

    printf("Qual é o número de pontos turísticos:");
    scanf("%d", &PointsAttractions);

    /*Formulario segunda carta*/

    printf("2° Carta\n");

    printf("Qual é o estado (A-H):");
    scanf("\n%c",&State2);

    printf("Qual o codigo (01 até 04):");
    scanf("%s", CardCode2);

    printf("Qual é o nome da cidade:");
    scanf("%s", City2);

    printf("Qual é a quantidade de população da cidade:");
    scanf("%d", &Population2);

    printf("Qual é a área da cidade em quilômetros:");
    scanf("%d", &Area2);

    printf("Qual é o PIB em bilhões de reais:");
    scanf("%d", &PIB2);

    printf("Qual é o número de pontos turísticos:");
    scanf("%d", &PointsAttractions2);

    /*
    fim dos formularios
    */

    /*
    Criação das variaveis para desafio intermediario
    Densidade Populacional: (PopulationDensity)
    PIB per Capita: (PIBPerCapita)
    */
   
    float PopulationDensity = (float)(Population)/(float)(Area);
    float PopulationDensity2 = (float)(Population2)/(float)(Area2);
    float PIBPerCapita = (float)(PIB)/(float)(Population);
    float PIBPerCapita2 = (float)(PIB2)/(float)(Population2);
    /*
    Template de textos
    */

    char StateText[] = "Estado:";
    char CardCodeText[] = "Código:";
    char CityText[] = "Nome da Cidade:";
    char PopulationText[] =  "População:";
    char AreaText[] = "Área:";
    char PIBText[] =  "PIB:";
    char PointsAttractionsText[] = "Número de Pontos Turísticos:";
    char PopulationDensityText[] = "Densidade Populacional:";
    char PIBPerCapitaText[] = "PIB per Capita:";
    
    /*
    fim dos templates
    */
    /*
    inicio do relatorio da primeira carta
    */

    printf("==========================================\n");
    printf("Carta 01:\n%s %c\n",StateText,State);
    printf("%s %c%s\n",CardCodeText,State,CardCode);
    printf("%s %s\n",CityText,City);
    printf("%s %d\n",PopulationText,Population);
    printf("%s %d\n",AreaText,Area);
    printf("%s %d\n",PIBText,PIB);
    printf("%s %d\n",PointsAttractionsText,PointsAttractions);
    printf("%s %.2f\n",PIBPerCapitaText,PIBPerCapita);
    printf("%s %.2f\n",PopulationDensityText,PopulationDensity);
    
    /*
    inicio do relatorio da segunda carta
    */
    
    printf("==========================================\n");
    printf("Carta 02:\n%s %c\n",StateText,State2);
    printf("%s %c%s\n",CardCodeText,State2,CardCode2);
    printf("%s %s\n",CityText,City2);
    printf("%s %d\n",PopulationText,Population2);
    printf("%s %d\n",AreaText,Area2);
    printf("%s %d\n",PIBText,PIB2);
    printf("%s %d\n",PointsAttractionsText,PointsAttractions2);
    printf("%s %.2f\n",PIBPerCapitaText,PIBPerCapita2);
    printf("%s %.2f\n",PopulationDensityText,PopulationDensity2);

    /*
    fim dos relatorios
    */

    return 0;
}
