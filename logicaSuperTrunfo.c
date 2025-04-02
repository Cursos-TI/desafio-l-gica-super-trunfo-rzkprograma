#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
typedef struct {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para comparar duas cartas com base na população
void compararCartas(Carta c1, Carta c2) {
    printf("\nComparação baseada em: População\n");
    printf("%s (%s): %d habitantes\n", c1.cidade, c1.estado, c1.populacao);
    printf("%s (%s): %d habitantes\n", c2.cidade, c2.estado, c2.populacao);

    if (c1.populacao > c2.populacao) {
        printf("Vencedora:%s!\n", c1.cidade);
    } else if (c1.populacao < c2.populacao) {
        printf("Vencedora: %s!\n", c2.cidade);
    } else {
        printf("Empate!\n");
    }
}

int main() {
    // Definição das cartas manualmente
    Carta carta1 = {"São Paulo", "SP001", "São Paulo", 12300000, 1521.11, 699.28, 20};
    Carta carta2 = {"Rio de Janeiro", "RJ001", "Rio de Janeiro", 6775561, 1200.27, 415.86, 15};
    
    compararCartas(carta1, carta2);

    return 0;
}
