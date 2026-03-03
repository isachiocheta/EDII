/* Desenvolva um programa que permita ao usuário editar um arquivo de texto. 
Ele deve solicitar ao usuário que insira o texto que deseja adicionar
ao arquivo existente e, em seguida, deve adicionar esse texto ao final do arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nome[100];
    char texto[500];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);

    getchar();

    printf("Digite o texto que deseja adicionar: ");
    fgets(texto, sizeof(texto), stdin);

    arquivo = fopen(nome, "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fputs(texto, arquivo);

    fclose(arquivo);

    printf("Texto adicionado com sucesso!\n");
    return 0;
}