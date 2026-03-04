/*Escreva um programa que leia um
arquivo de texto linha por linha e imprima apenas as linhas que começam com uma
determinada letra ou palavra especificada pelo usuário.*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char nome[100];
    char linha[500];
    char criterio[50];

    printf("Nome do arquivo: ");
    scanf("%s", nome);

    printf("Digite a palavra ou letra inicial: ");
    scanf("%s", criterio);

    arquivo = fopen(nome, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        if (strncmp(linha, criterio, strlen(criterio)) == 0) {
            printf("%s", linha);
        }
    }

    fclose(arquivo);
    return 0;
}