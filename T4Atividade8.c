#include <stdio.h>
#include <string.h>

#define MAX 1000

int main() {
    char nomes[MAX][50];
    int qtds[MAX];
    int total_produtos = 0, opcao, id, qtd;
    
    do {
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            if (total_produtos < MAX) {
                scanf("%s", nomes[total_produtos]);
                scanf("%d", &qtds[total_produtos]);
                total_produtos++;
                printf("Produto adicionado com sucesso!\n");
            }
        } else if (opcao == 2) {
            scanf("%d", &id);
            scanf("%d", &qtd);
            if (id > 0 && id <= total_produtos) {
                qtds[id - 1] += qtd;
                printf("Entrada realizada com sucesso!\n");
            }
        } else if (opcao == 3) {
            scanf("%d", &id);
            scanf("%d", &qtd);
            if (id > 0 && id <= total_produtos) {
                if (qtd <= qtds[id - 1]) {
                    qtds[id - 1] -= qtd;
                    printf("Saída realizada com sucesso!\n");
                }
            }
        } else if (opcao == 4) {
            printf("Estoque atual:\n");
            for (int i = 0; i < total_produtos; i++) {
                printf("Produto %d: %s - %d unidades\n", i + 1, nomes[i], qtds[i]);
            }
        }
    } while (opcao != 0);
    
    printf("Encerrando o programa...\n");
    return 0;
}
