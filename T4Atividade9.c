#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char tarefas[MAX][50];
    int concluidas[MAX];
    int total = 0, opcao, id;
    
    do {
        scanf("%d", &opcao);
        
        if (opcao == 1) {
            scanf(" %[^\n]s", tarefas[total]);
            concluidas[total] = 0;
            total++;
            printf("Tarefa adicionada com sucesso!\n");
        } else if (opcao == 2) {
            printf("Lista de tarefas:\n");
            for (int i = 0; i < total; i++) {
                if (concluidas[i]) {
                    printf("%d- [X] %s\n", i + 1, tarefas[i]);
                } else {
                    printf("%d- [] %s\n", i + 1, tarefas[i]);
                }
            }
        } else if (opcao == 3) {
            scanf("%d", &id);
            if (id > 0 && id <= total) {
                concluidas[id - 1] = 1;
                printf("Tarefa %d marcada como concluída.\n", id);
            }
        } else if (opcao == 4) {
            printf("Tarefas pendentes:\n");
            for (int i = 0; i < total; i++) {
                if (!concluidas[i]) {
                    printf("%d-[] %s\n", i + 1, tarefas[i]);
                }
            }
        }
    } while (opcao != 0);
    
    printf("Encerrando o programa...\n");
    return 0;
}
