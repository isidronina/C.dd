#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50], auxiliar[50], letra;
    int i, tamanho, erros = 0, acertos = 0;
    
    scanf("%s", palavra);
    tamanho = strlen(palavra);
    
    for (i = 0; i < tamanho; i++) {
        auxiliar[i] = '_';
    }
    auxiliar[tamanho] = '\0';
    
    while (erros < 7 && acertos < tamanho) {
        printf("Forca: ");
        for (i = 0; i < tamanho; i++) {
            printf("%c ", auxiliar[i]);
        }
        printf("\nErros: %d\n", erros);
        
        scanf(" %c", &letra);
        
        int encontrou = 0;
        for (i = 0; i < tamanho; i++) {
            if (palavra[i] == letra && auxiliar[i] == '_') {
                auxiliar[i] = letra;
                acertos++;
                encontrou = 1;
            }
        }
        
        if (!encontrou) {
            erros++;
        }
    }
    
    if (acertos == tamanho) {
        printf("Parabéns! Você descobriu a palavra.\n");
    } else {
        printf("Você perdeu! A palavra era: %s\n", palavra);
    }
    
    return 0;
}
