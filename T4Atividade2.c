#include <stdio.h>

int main() {
    int n, i, cresceu = 1, caiu = 1, constante = 1;
    float fat[100];
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%f", &fat[i]);
    }
    
    for (i = 1; i < n; i++) {
        if (fat[i] < fat[i - 1]) cresceu = 0;
        if (fat[i] > fat[i - 1]) caiu = 0;
        if (fat[i] != fat[i - 1]) constante = 0;
    }
    
    printf(">> Análise de Faturamento <<\n");
    printf("Faturamento informado: ");
    for (i = 0; i < n; i++) {
        printf("%.0f", fat[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\nSituação: ");
    
    if (constante) {
        printf("Constante\n");
    } else if (cresceu) {
        printf("Crescimento\n");
    } else if (caiu) {
        printf("Queda\n");
    } else {
        printf("Sem padrão\n");
    }
    
    return 0;
}
