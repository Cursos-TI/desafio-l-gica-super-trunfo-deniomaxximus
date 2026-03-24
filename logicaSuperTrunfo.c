#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main(){
    //Declarando variáveis
    char estado1[20], estado2[20], capital1[20], capital2[20], codigoCarta1[3], codigoCarta2[3];
    int populacao1, populacao2, pontosTuristicos1,pontosTuristicos2,atributo1,atributo2,resultado1,resultado2;
    float area1, area2, pib1, pib2, perCapita1, perCapita2, densidade1, densidade2;
    long double superPoder1, superPoder2;


    /*
        estado[20]: nome do estado
        capital[20]: nome da capital
    codigoCarta[3]: código de dois dígitos de identificação da carta
            populacao: quantidade de habitantes do estado
    pontosTuristicos: quantidade de pontos turísticos do estado
                area: tamanho territorial, em km², doo estado
                pib: produto interno bruto do estado
            perCapita: pib per capta (por pessoa) do estado
            densidade: densidade demográfica do estado
        superPoder: recebe a soma de todos os atributos mensuráveis dos estados
    */

    printf("-----------SUPER TRUNFO PAÍSES-----------\n");
    printf("Registrando as cartas dos estados\n");

    //Recebendo os dados da carta 1
    printf("\nCARTA 1\n");
    printf("Digite o código referente ao estado (ume letra de A a H e um número de 1 a 4): ");
    scanf("%s",codigoCarta1);

    printf("Digite o nome do estado: ");
    scanf("%s",estado1);

    printf("Digite a capital do estado: ");
    scanf("%s",capital1);

    printf("Digite a população do estado: ");
    scanf("%d",&populacao1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&pontosTuristicos1);

    printf("Digite a área do estado: ");
    scanf("%f",&area1);

    printf("Digite o PIB do estado: ");
    scanf("%f",&pib1);

    perCapita1 = pib1/populacao1; //Cálculo do PIB per capita da carta 1
    densidade1 = populacao1/area1; //Cálculo da densidade demográfica da carta 1
    superPoder1 = populacao1+pontosTuristicos1+area1+pib1+perCapita1+(1/densidade1); //Cálculo do Super Poder da carta 1

    //Imprimindo os dados da carta 1
    printf("\nCódigo da carta 1: %s\n",codigoCarta1);
    printf("Estado: %s\n",estado1);
    printf("Capital: %s\n",capital1);
    printf("População: %d habitantes\n",populacao1);
    printf("Pontos turísticos: %d pontos\n",pontosTuristicos1);
    printf("Área: %.2f km²\n",area1);
    printf("PIB (Produto Interno Bruto): R$ %.2f\n",pib1);
    printf("PIB per capita: R$ %.2f\n",perCapita1);
    printf("Densidade demográfica: %.2f hab/km²\n",densidade1);
    printf("Super Poder: %.2Lf\n",superPoder1);

    //Recebendo os dados da carta 2
    printf("\nCARTA 2\n");
    printf("Digite o código referente ao estado (ume letra de A a H e um número de 1 a 4): ");
    scanf("%s",codigoCarta2);

    printf("Digite o nome do estado: ");
    scanf("%s",estado2);

    printf("Digite a capital do estado: ");
    scanf("%s",capital2);

    printf("Digite a população do estado: ");
    scanf("%d",&populacao2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&pontosTuristicos2);

    printf("Digite a área do estado: ");
    scanf("%f",&area2);

    printf("Digite o PIB do estado: ");
    scanf("%f",&pib2);

    perCapita2 = pib2/populacao2; //Cálculo do PIB per capita da carta 2
    densidade2 = populacao2/area2; //Cálculo da densidade demográfica da carta 2
    superPoder2 = populacao2+pontosTuristicos2+area2+pib2+perCapita2+(1/densidade2); //Cálculo do Suepr Poder da carta 2

    //Imprimindo os dados da carta 2
    printf("\nCódigo da carta 2: %s\n",codigoCarta2);
    printf("Estado: %s\n",estado2);
    printf("Capital: %s\n",capital2);
    printf("População: %d habitantes\n",populacao2);
    printf("Pontos turísticos: %d pontos\n",pontosTuristicos2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB (Produto Interno Bruto): R$ %.2f\n",pib2);
    printf("PIB per capita: R$ %.2f\n",perCapita2);
    printf("Densidade demográfica: %.2f hab/km²\n",densidade2);
    printf("Super Poder: %.2Lf\n",superPoder2);

    //Comparando as cartas
    printf("\n-----------Hora de comparar os atributos das cartas-----------\n");

    printf("Escolha o primeiro atributo de comparação");
    printf("\n1 - População\n2 - Pontos turísticos\n3 - Área\n4 - PIB\n5 - PIB per capita\n6 - Densidade demográfica\n7 - Super Poder\n");
    printf("Escolha: ");
    scanf("%d",&atributo1);
    
    switch (atributo1){
    case 1:
        printf("\nVocê escolheu maior população\n");
        printf("%s - %d pessoas vs %s - %d pessoas\n",estado1,populacao1,estado2,populacao2);
        resultado1 = populacao1>populacao2 ? 1:0;
        break;
    case 2:
        printf("\nVocê escolheu mais pontos turísticos\n");
        printf("%s - %d pontos vs %s - %d pontos\n",estado1,pontosTuristicos1,estado2,pontosTuristicos2);
        resultado1 = pontosTuristicos1>pontosTuristicos2 ? 1:0;
        break;
    case 3:
        printf("\nVocê escolheu maior área territorial\n");
        printf("%s - %.2f km² vs %s - %.2f km²\n",estado1,area1,estado2,area2);
        resultado1 = area1>area2 ? 1:0;
        break;
    case 4:
        printf("\nVocê escolheu maior PIB\n");
        printf("%s - R$ %.2f vs %s - R$  %.2f\n",estado1,pib1,estado2,pib2);
        resultado1 = pib1>pib2 ? 1:0;
        break;
    case 5:
        printf("\nVocê escolheu maior PIB per capita\n");
        printf("%s - R$ %.2f vs %s - R$ %.2f\n",estado1,perCapita1,estado2,perCapita2);
        resultado1 = perCapita1>perCapita2 ? 1:0;
    case 6:
        printf("\nVocê escolheu menor densidade demográfica\n");
        printf("%s - %.2f hab/km² vs %s - %.2f hab/km²\n",estado1,densidade1,estado2,densidade2);
        resultado1 = densidade1<densidade2 ? 1:0;
        break;
    case 7:
        printf("\nVocê ecolheu maior Super Poder\n");
        printf("%s - %.2Lf vs %s - %.2Lf\n",estado1,superPoder1,estado2,superPoder2);
        resultado1 = superPoder1>superPoder2 ? 1:0;
        break;
    default:
        printf("\nOpção inválida!\n");
        break;
    }

    printf("\nEscolha o segundo atributo de comparação");
    printf("\n1 - População\n2 - Pontos turísticos\n3 - Área\n4 - PIB\n5 - PIB per capita\n6 - Densidade demográfica\n7 - Super Poder\n");
    printf("Escolha: ");
    scanf("%d",&atributo2);

    switch (atributo2){
    case 1:
        printf("\nVocê escolheu maior população\n");
        printf("%s - %d pessoas vs %s - %d pessoas\n",estado1,populacao1,estado2,populacao2);
        resultado2 = populacao1>populacao2 ? 1:0;
        break;
    case 2:
        printf("\nVocê escolheu mais pontos turísticos\n");
        printf("%s - %d pontos vs %s - %d pontos\n",estado1,pontosTuristicos1,estado2,pontosTuristicos2);
        resultado2 = pontosTuristicos1>pontosTuristicos2 ? 1:0;
        break;
    case 3:
        printf("\nVocê escolheu maior área territorial\n");
        printf("%s - %.2f km² vs %s - %.2f km²\n",estado1,area1,estado2,area2);
        resultado2 = area1>area2 ? 1:0;
        break;
    case 4:
        printf("\nVocê escolheu maior PIB\n");
        printf("%s - R$ %.2f vs %s - R$  %.2f\n",estado1,pib1,estado2,pib2);
        resultado2 = pib1>pib2 ? 1:0;
        break;
    case 5:
        printf("\nVocê escolheu maior PIB per capita\n");
        printf("%s - R$ %.2f vs %s - R$ %.2f\n",estado1,perCapita1,estado2,perCapita2);
        resultado2 = perCapita1>perCapita2 ? 1:0;
    case 6:
        printf("\nVocê escolheu menor densidade demográfica\n");
        printf("%s - %.2f hab/km² vs %s - %.2f hab/km²\n",estado1,densidade1,estado2,densidade2);
        resultado2 = densidade1<densidade2 ? 1:0;
        break;
    case 7:
        printf("\nVocê escolheu maior Super Poder\n");
        printf("%s - %.2Lf vs %s - %.2Lf\n",estado1,superPoder1,estado2,superPoder2);
        resultado2 = superPoder1>superPoder2 ? 1:0;
        break;
    default:
        printf("\nOpção inválida!\n");
        break;
    }
    
    if(resultado1 && resultado2){
        printf("\nCarta 1 veceu!");
    }else if(resultado1 != resultado2){
        printf("\nEmpate!");
    }else{
        printf("\nCarta 2 venceu");
    }

    printf("\nFim do programa\n");

    return 0;
}