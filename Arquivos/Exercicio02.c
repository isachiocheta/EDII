/*Crie um programa que copie o conteúdo de um arquivo de texto para outro arquivo. 
Certifique-se de que o arquivo de destino seja criado se ainda não existir.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *origem, *destino;
    char nomeOrigem[100], nomeDestino[100];
    char c;

    printf("Arquivo de origem: ");
    scanf("%s", nomeOrigem);

    printf("Arquivo de destino: ");
    scanf("%s", nomeDestino);

    origem = fopen(nomeOrigem, "r");
    if (origem == NULL) {
        printf("Erro ao abrir arquivo de origem.\n");
        return 1;
    }

    destino = fopen(nomeDestino, "w");
    if (destino == NULL) {
        printf("Erro ao criar arquivo de destino.\n");
        fclose(origem);
        return 1;
    }

    while ((c = fgetc(origem)) != EOF) {
        fputc(c, destino);
    }

    fclose(origem);
    fclose(destino);

    printf("Arquivo copiado com sucesso!\n");
    return 0;
}