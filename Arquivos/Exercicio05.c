/*Crie um programa que conte quantas vezes
um caractere específico aparece em um arquivo de texto. Permita que o usuário
especifique o caractere a ser contado.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nome[100];
    char c, caractere;
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);

    printf("Digite o caractere a ser contado: ");
    scanf(" %c", &caractere); 

    arquivo = fopen(nome, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((c = fgetc(arquivo)) != EOF) {
        if (c == caractere) {
            contador++;
        }
    }

    fclose(arquivo);

    printf("O caractere '%c' aparece %d vezes.\n", caractere, contador);
    return 0;
}