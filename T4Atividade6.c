#include <stdio.h>

int main() {
    int dias, i, j, dia_maior = 1, dia_menor = 1;
    float pesos[100], maior, menor;
    
    scanf("%d", &dias);
    
    for (i = 0; i < dias; i++) {
        scanf("%f", &pesos[i]);
        if (i == 0) {
            maior = pesos[i];
            menor = pesos[i];
        } else {
            if (pesos[i] > maior) {
                maior = pesos[i];
                dia_maior = i + 1;
            }
            if (pesos[i] < menor) {
                menor = pesos[i];
                dia_menor = i + 1;
            }
        }
    }
    
    printf("Pesos informados: ");
    for (i = 0; i < dias; i++) {
        printf("%.0f", pesos[i]);
        if (i < dias - 1) printf(", ");
    }
    printf("\nMaior peso: %.0f kg (Dia %d)\n", maior, dia_maior);
    printf("Menor peso: %.0f kg (Dia %d)\n", menor, dia_menor);
    printf("Gráfico de evolução:\n");
    
    for (i = 0; i < dias; i++) {
        printf("Dia %d | ", i + 1);
        int barras = (int)(pesos[i] / 5);
        for (j = 0; j < barras; j++) {
            printf("#");
        }
        printf("\n%.0f\n", pesos[i]);
    }
    
    return 0;
}
