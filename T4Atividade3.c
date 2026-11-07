#include <stdio.h>

int main() {
    char projeto[50];
    int qtd, i;
    float meta, doacoes[100], total = 0, maior;
    
    scanf("%s", projeto);
    scanf("%d", &qtd);
    scanf("%f", &meta);
    
    for (i = 0; i < qtd; i++) {
        scanf("%f", &doacoes[i]);
        total += doacoes[i];
        
        if (i == 0) {
            maior = doacoes[i];
        } else if (doacoes[i] > maior) {
            maior = doacoes[i];
        }
    }
    
    printf(">> Resumo das Doações <<\n");
    printf("Projeto: %s\n", projeto);
    printf("Doações recebidas: ");
    for (i = 0; i < qtd; i++) {
        printf("%.0f", doacoes[i]);
        if (i < qtd - 1) printf(", ");
    }
    printf("\nTotal arrecadado: %.0f\n", total);
    printf("Maior doação: %.0f\n", maior);
    
    if (total >= meta) {
        printf("Situação: Meta atingida\n");
    } else {
        printf("Situação: Meta não atingida\n");
    }
    
    return 0;
}
