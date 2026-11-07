#include <stdio.h>

int main() {
    int n, i, aprovados = 0, reprovados = 0;
    float notas[100], soma = 0, media, maior, menor;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
        
        if (notas[i] >= 6) {
            aprovados++;
        } else {
            reprovados++;
        }
        
        if (i == 0) {
            maior = notas[i];
            menor = notas[i];
        } else {
            if (notas[i] > maior) maior = notas[i];
            if (notas[i] < menor) menor = notas[i];
        }
    }
    
    media = soma / n;
    
    printf(">> Resultado da Turma <<\n");
    printf("Notas informadas: ");
    for (i = 0; i < n; i++) {
        printf("%.0f", notas[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\nMédia da turma: %.0f\n", media);
    printf("Maior nota: %.0f\n", maior);
    printf("Menor nota: %.0f\n", menor);
    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    
    if (reprovados == 0) {
        printf("Situação geral: Todos os alunos foram aprovados\n");
    } else {
        printf("Situação geral: Nem todos os alunos foram aprovados\n");
    }
    
    return 0;
}
