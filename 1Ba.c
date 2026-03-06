#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *entrada, *saida;
    char nomeEntrada[100], nomeSaida[100];
    char c;
    long pos;

    printf("Nome do arquivo de entrada: ");
    scanf("%s", nomeEntrada);

    printf("Nome do arquivo de saida: ");
    scanf("%s", nomeSaida);

    entrada = fopen(nomeEntrada, "r");
    if (entrada == NULL) {
        printf("Erro ao abrir arquivo de entrada.\n");
        return 1;
    }

    saida = fopen(nomeSaida, "w");
    if (saida == NULL) {
        printf("Erro ao criar arquivo de saida.\n");
        fclose(entrada);
        return 1;
    }

    // Move para o final do arquivo
    fseek(entrada, 0, SEEK_END);
    pos = ftell(entrada);

    // Lê de trás para frente
    for (pos = pos - 1; pos >= 0; pos--) {
        fseek(entrada, pos, SEEK_SET);
        c = fgetc(entrada);
        fputc(c, saida);
    }

    fclose(entrada);
    fclose(saida);

    printf("Arquivo invertido com sucesso.\n");

    return 0;
}