#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char estado1[30], cidade1[40], codigo1[4];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Dados da Carta 2
    char estado2[30], cidade2[40], codigo2[4];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o nome do estado:\n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Digite o nome da cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite o código da carta (Ex: A01):\n");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    getchar(); // Limpa o \n do buffer antes do próximo fgets

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o nome do estado:\n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Digite o nome da cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite o código da carta (Ex: B02):\n");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Menu de comparação usando SWITCH
    int escolha;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (MENOR VENCE)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\nComparando %s (%s) e %s (%s):\n", cidade1, estado1, cidade2, estado2);

    switch (escolha) {
        case 1:
            // Comparação de população
            printf("População -> %d vs %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Venceu: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Venceu: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            // Comparação de área
            printf("Área -> %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2)
                printf("Venceu: %s\n", cidade1);
            else if (area2 > area1)
                printf("Venceu: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            // Comparação de PIB
            printf("PIB -> %.2f vs %.2f\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Venceu: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Venceu: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            // Comparação de pontos turísticos
            printf("Pontos Turísticos -> %d vs %d\n", pontos_turisticos1, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Venceu: %s\n", cidade1);
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("Venceu: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            // Comparação de densidade demográfica (MENOR VENCE)
            printf("Densidade Demográfica -> %.2f hab/km² vs %.2f hab/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Venceu: %s\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Venceu: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            // Opção inválida
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}