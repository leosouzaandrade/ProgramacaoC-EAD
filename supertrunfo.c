#include <stdio.h>

int main(){

    int populacao, pontos_tur, num_carta;
    char Estado, cod_carta[4], nome_cidade[20];
    float area_km2, pib;

    printf("Digite o número da carta: \n");
    scanf("%d", &num_carta);
    printf("Carta: %d\n", num_carta);

    printf("Digite o Estado (sigla com uma letra): \n");
    scanf(" %c", &Estado);  // espaço antes do %c
    printf("Estado: %c\n", Estado);

    return 0;
}
