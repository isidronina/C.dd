#include <stdio.h>

int main() {
    float transacoes[1000];
    int total_t = 0, i;
    float valor;
    
    while (1) {
        scanf("%f", &valor);
        if (valor == -1) break;
        
        if (valor == 0) {
            if (total_t > 0) {
                total_t--;
            }
        } else {
            transacoes[total_t] = valor;
            total_t++;
        }
    }
    
    float saldo = 0;
    for (i = 0; i < total_t; i++) {
        saldo += transacoes[i];
    }
    
    printf("Saldo final: %.0f\n", saldo);
    
    return 0;
}
