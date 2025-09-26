/* 
JOGO DE SUPER TRUNFO: PAÍSES 
Nome: Ramon Ferreira
Curso: Engenharia de software
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(){
    setlocale (LC_ALL,"Portuguese");
    
    char estado1; //Variável referente ao estado carta 01; identificada por uma letra de "A" a "H"
    char codigo1[4]; //Variável referente ao código da carta 01, identificada pela letra do estado seguida por um número de 01 a 04
    char cidade1[50]; //Variável referente ao nome da cidade da carta 01
    int populacao1; //Variável referente ao número de habitantes da carta 01
    float area1; //Variável referente à área da cidade em km^2 da carta 01
    float pib1; //Variável referente ao PIB da cidade da carta 01
    int turismo1; //Variável referente ao número de pontos turísticos na cidade da carta 01
    
    char estado2; //Variável referente ao estado carta 02; identificada por uma letra de "A" a "H"
    char codigo2[4]; //Variável referente ao código da carta 02, identificada pela letra do estado seguida por um número de 01 a 04
    char cidade2 [50]; //Variável referente ao nome da cidade da carta 02
    int populacao2; //Variável referente ao número de habitantes da carta 02
    float area2; //Variável referente à área da cidade em km^2 da carta 02
    float pib2; //Variável referente ao PIB da cidade da carta 02
    int turismo2; //Variável referente ao número de pontos turísticos na cidade da carta 02
    
    
    printf ("JOGO DE SUPER TRUNFO: PAÍSES");
    printf ("\nUtilize os campos abaixo para informar os dados das cartas do jogo. Siga atentamente as instruções!");
    
    //Inserção de dados da Carta 1
    printf ("\n\nCarta 1");
    printf ("\nEstado (digite uma letra de 'A' a 'H' para indicar o estado): ");
    scanf ("%c", &estado1); //Usuário insere a letra referente ao estado da carta 01
    printf ("\nCódigo (digite o código da carta indicado pela letra informada no estado e um número de 01 a 04, ex.: A01): ");
    scanf ("%s", &codigo1); //Usuário insere as informações referentes ao código da carta 01
    printf ("\nCidade (informe o nome da cidade): ");
    scanf ("%s", &cidade1); //Usuário insere o nome da cidade da carta 01
    printf ("\nPopulação (digite o número de habitantes): ");
    scanf ("%d", &populacao1); //Usuário insere qual a população da cidade da carta 01
    printf ("\nÁrea (informe a área da cidade em quilômetros quadrados): ");
    scanf ("%f", &area1); //Usuário insere a área, em km^2 da cidade da carta 01
    printf ("\nPIB: ");
    scanf ("%f", &pib1); //Usuário insere o PIB da cidade da carta 01
    printf ("\nPontos turísticos (informe o número de pontos turísticos que a cidade possui): ");
    scanf ("%d", &turismo1); //Usuário insere o número de pontos turísticos da cidade da carta 01
    
    //Inserção de dados da Carta 2 
    printf ("\n\nCarta 2");
    printf ("\nEstado (digite uma letra de 'A' a 'H' para indicar o estado): ");
    scanf ("%c", &estado2); //Usuário insere a letra referente ao estado da carta 02
    printf ("\nCódigo (digite o código da carta indicado pela letra informada no estado e um número de 01 a 04, ex.: A01): ");
    scanf (" %s", &codigo2); //Usuário insere as informações referentes ao código da carta 02
    printf ("\nCidade (informe o nome da cidade): ");
    scanf (" %s", &cidade2); //Usuário insere o nome da cidade da carta 02
    printf ("\nPopulação (digite o número de habitantes): ");
    scanf ("%d", &populacao2); //Usuário insere qual a população da cidade da carta 02
    printf ("\nÁrea (informe a área da cidade em quilômetros quadrados): ");
    scanf ("%f", &area2); //Usuário insere a área, em km^2 da cidade da carta 02
    printf ("\nPIB: ");
    scanf ("%f", &pib2); //Usuário insere o PIB da cidade da carta 02
    printf ("\nPontos turísticos (informe o número de pontos turísticos que a cidade possui): ");
    scanf ("%d", &turismo2); //Usuário insere o número de pontos turísticos da cidade da carta 02
    
    printf ("\n\n\nMuito obrigado! Os dados de cada uma das cartas que você registrou estão apresentados a seguir.");
    
    //Apresentação dos dados da Carta 1
    printf ("\n\nCARTA 1");
    printf ("\nEstado: %c", estado1);
    printf ("\nCódigo: %s", codigo1);
    printf ("\nCidade: %s", cidade1);
    printf ("\nPopulação: %d", populacao1);
    printf ("\nÁrea (km^2): %f", area1);
    printf ("\nPIB: %f", pib1);
    printf ("\nPontos turísticos: %d", turismo1);
    
    //Apresentação dos dados da Carta 2
    printf ("\n\nCARTA 2");
    printf ("\nEstado: %c", estado2);
    printf ("\nCódigo: %s", codigo2);
    printf ("\nCidade: %s", cidade2);
    printf ("\nPopulação: %d", populacao2);
    printf ("\nÁrea (km^2): %f", area2);
    printf ("\nPIB: %f", pib2);
    printf ("\nPontos turísticos: %d", turismo2);
    
    }
