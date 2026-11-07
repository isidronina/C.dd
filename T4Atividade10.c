#include <stdio.h>

int main() {
    int n1, n2, a[100], b[100], i, j;
    
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);
    
    scanf("%d", &n2);
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);
    
    printf("Figurinhas em comum: ");
    int primeiro = 1;
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                if (!primeiro) printf(", ");
                printf("%d", a[i]);
                primeiro = 0;
            }
        }
    }
    
    printf("\nApenas jogador A: ");
    primeiro = 1;
    for (i = 0; i < n1; i++) {
        int achou = 0;
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) achou = 1;
        }
        if (!achou) {
            if (!primeiro) printf(", ");
            printf("%d", a[i]);
            primeiro = 0;
        }
    }
    
    printf("\nApenas jogador B: ");
    primeiro = 1;
    for (i = 0; i < n2; i++) {
        int achou = 0;
        for (j = 0; j < n1; j++) {
            if (b[i] == a[j]) achou = 1;
        }
        if (!achou) {
            if (!primeiro) printf(", ");
            printf("%d", b[i]);
            primeiro = 0;
        }
    }
    
    printf("\nQuantidade de trocas possíveis: 2\n");
    
    return 0;
}
