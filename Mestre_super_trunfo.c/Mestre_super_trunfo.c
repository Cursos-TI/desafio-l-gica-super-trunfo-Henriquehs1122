#include <stdio.h>
#include <string.h>

// Função para limpar buffer
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função para comparar dois valores
int comparar(float valor1, float valor2, int menorVence) {
    if (menorVence) {
        return (valor1 < valor2) ? 1 : (valor2 < valor1) ? -1 : 0;
    } else {
        return (valor1 > valor2) ? 1 : (valor2 > valor1) ? -1 : 0;
    }
}

int main() {
    // Dados da Carta 1
    char estado1[30], cidade1[40], codigo1[4];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Dados da Carta 2
    char estado2[30], cidade2[40], codigo2[4];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // 📋 Cadastro da primeira carta
    printf("📄 Cadastro da primeira carta:\n");
    printf("Estado: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Código (Ex: A01): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    limparBuffer();

    // 📄 Cadastro da segunda carta
    printf("\n📄 Cadastro da segunda carta:\n");
    printf("Estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Código (Ex: B02): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // 🔢 Cálculo da densidade
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // 🚩 Menu de comparação
    int escolha1, escolha2;
    printf("\n🔍 Escolha dois atributos para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (MENOR VENCE)\n");

    printf("\nDigite o número do primeiro atributo: ");
    scanf("%d", &escolha1);

    if (escolha1 < 1 || escolha1 > 5) {
        printf("⚠️ Opção inválida! Encerrando programa.\n");
        return 1;
    }

    printf("Digite o número do segundo atributo (diferente do primeiro): ");
    scanf("%d", &escolha2);

    if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
        printf("⚠️ Opção inválida! Encerrando programa.\n");
        return 1;
    }

    // 🌟 Comparação
    int pontos1 = 0, pontos2 = 0;

    // Comparação do primeiro atributo
    printf("\n➡️ Comparando pelo primeiro atributo:\n");
    switch (escolha1) {
        case 1:
            printf("População -> %d vs %d\n", populacao1, populacao2);
            switch (comparar(populacao1, populacao2, 0)) {
                case 1: pontos1++; break;
                case -1: pontos2++; break;
                case 0: printf("Empate neste atributo!\n"); break;
            }
            break;
        case 2:
            printf("Área -> %.2f km² vs %.2f km²\n", area1, area2);
            switch (comparar(area1, area2, 0)) {
                case 1: pontos1++; break;
                case -1: pontos2++; break;
                case 0: printf("Empate neste atributo!\n"); break;
            }
            break;
        case 3:
            printf("PIB -> %.2f vs %.2f\n", pib1, pib2);
            switch (comparar(pib1, pib2, 0)) {
                case 1: pontos1++; break;
                case -1: pontos2++; break;
                case 0: printf("Empate neste atributo!\n"); break;
            }
            break;
        case 4:
            printf("Pontos Turísticos -> %d vs %d\n", pontos_turisticos1, pontos_turisticos2);
            switch (comparar(pontos_turisticos1, pontos_turisticos2, 0)) {
                case 1: pontos1++; break;
                case -1: pontos2++; break;
                case 0: printf("Empate neste atributo!\n"); break;
            }
            break;
        case 5:
            printf("Densidade -> %.2f vs %.2f (MENOR VENCE)\n", densidade1, densidade2);
            switch (comparar(densidade1, densidade2, 1)) {
                case 1: pontos1++; break;
                case -1: pontos2++; break;
                case 0: printf("Empate neste atributo!\n"); break;
            }
            break;
    }

    // Comparação do segundo atributo
    printf("\n➡️ Comparando pelo segundo atributo:\n");
    switch (escolha2) {
        case 1:
            printf("População -> %d vs %d\n", populacao1, populacao2);
            switch (comparar(populacao1, populacao2, 0)) {
                case 1: pontos1++; break;
                case -1: pontos2++; break;
                case 0: printf("Empate neste atributo!\n"); break;
            }
            break;
        case 2:
            printf("Área -> %.2f km² vs %.2f km²\n", area1, area2);
            switch (comparar(area1, area2, 0)) {
                case 1: pontos1++; break;
                case -1: pontos2++; break;
                case 0: printf("Empate neste atributo!\n"); break;
            }
            break;
        case 3:
            printf("PIB -> %.2f vs %.2f\n", pib1, pib2);
            switch (comparar(pib1, pib2, 0)) {
                case 1: pontos1++; break;
                case -1: pontos2++; break;
                case 0: printf("Empate neste atributo!\n"); break;
            }
            break;
        case 4:
            printf("Pontos Turísticos -> %d vs %d\n", pontos_turisticos1, pontos_turisticos2);
            switch (comparar(pontos_turisticos1, pontos_turisticos2, 0)) {
                case 1: pontos1++; break;
                case -1: pontos2++; break;
                case 0: printf("Empate neste atributo!\n"); break;
            }
            break;
        case 5:
            printf("Densidade -> %.2f vs %.2f (MENOR VENCE)\n", densidade1, densidade2);
            switch (comparar(densidade1, densidade2, 1)) {
                case 1: pontos1++; break;
                case -1: pontos2++; break;
                case 0: printf("Empate neste atributo!\n"); break;
            }
            break;
    }

    // 🎯 Resultado Final
    printf("\n===============================\n");
    printf("🏆 Resultado Final:\n");
    printf("%s: %d ponto(s)\n", cidade1, pontos1);
    printf("%s: %d ponto(s)\n", cidade2, pontos2);

    if (pontos1 > pontos2)
        printf("✅ Vencedor: %s (%s)\n", cidade1, estado1);
    else if (pontos2 > pontos1)
        printf("✅ Vencedor: %s (%s)\n", cidade2, estado2);
    else
        printf("🤝 Empate Geral!\n");
    printf("===============================\n");

    return 0;
}
