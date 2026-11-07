#include <stdio.h>

int main() {
    int n, i, mais_a = 0, mais_b = 0, mesmo = 0;
    float farm_a[100], farm_b[100], total_a = 0, total_b = 0;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) scanf("%f", &farm_a[i]);
    for (i = 0; i < n; i++) scanf("%f", &farm_b[i]);
    
    for (i = 0; i < n; i++) {
        total_a += farm_a[i];
        total_b += farm_b[i];
        
        if (farm_a[i] < farm_b[i]) {
            mais_a++;
        } else if (farm_b[i] < farm_a[i]) {
            mais_b++;
        } else {
            mesmo++;
        }
    }
    
    printf("FARMAZOOM\n");
    printf("Farmácia A: ");
    for (i = 0; i < n; i++) {
        printf("%.0f", farm_a[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\nFarmácia B: ");
    for (i = 0; i < n; i++) {
        printf("%.0f", farm_b[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\nProdutos mais Baratos\n");
    printf("Na Farmácia A: %d\n", mais_a);
    printf("Na Farmácia B: %d\n", mais_b);
    printf("Mesmo preço: %d\n", mesmo);
    printf("Total\nFarmácia A: R$ %.0f\nFarmácia B: R$ %.0f\n", total_a, total_b);
    
    if (total_a < total_b) {
        printf("Melhor opção: Farmácia A\n");
    } else if (total_b < total_a) {
        printf("Melhor opção: Farmácia B\n");
    } else {
        printf("Melhor opção: Empate\n");
    }
    
    return 0;
}
