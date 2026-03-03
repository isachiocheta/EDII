/*Contagem de Palavras em um Arquivo: Escreva um programa que abra um arquivo
de texto, conte o número de palavras nele e exiba o resultado na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *arquivo;
    char nome[100];
    char c;
    int palavras = 0, dentroPalavra = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);

    arquivo = fopen(nome, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((c = fgetc(arquivo)) != EOF) {
        if (isspace(c)) {
            dentroPalavra = 0;
        } else if (!dentroPalavra) {
            dentroPalavra = 1;
            palavras++;
        }
    }

    fclose(arquivo);

    printf("Numero de palavras: %d\n", palavras);
    return 0;
}