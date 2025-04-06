#include <stdio.h>
#include <string.h>

int main(){

    int populacao, pontos_tur, num_carta;
    char Estado, cod_carta[4], nome_cidade[50];
    float area_km2, pib;

    printf("Digite o número da carta: \n");
    scanf("%d", &num_carta);

    printf("Digite o Estado (sigla com uma letra): \n");
    scanf(" %c", &Estado);  // espaço antes do %c

    printf("Digite o Código da Carta: \n");
    scanf(" %3s", cod_carta);  // espaço antes do %c

    // função para resolver o problema que estava pulando a etapa de colocar o nome da cidade.
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o Nome da Cidade: \n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';

    printf("Digite a quantidade de habitantes: \n");
    scanf(" %d", &populacao);  // espaço antes do %d

    printf("Digite a área (em km²) da cidade: \n");
    scanf(" %f", &area_km2);  // espaço antes do %d

    printf("Digite o valor do PIB da cidade: \n");
    scanf(" %f", &pib);  // espaço antes do %f

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &pontos_tur);  // espaço antes do %d

    printf ("\n\n\n\n");  //pulando 4 linhas para exibição da info da Carta

    printf("Carta: %d\n", num_carta);
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", cod_carta);
    printf("Nome de Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área(em Km²): %.2f km²\n", area_km2);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_tur);

    return 0;
}
