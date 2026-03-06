#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char nome[51];
    char melhorAluno[51];
    float nota;
    float maiorNota = -1;
    float soma = 0;
    int count = 0;

    arquivo = fopen("alunos.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%50s %f", nome, &nota) == 2) {

        soma += nota;
        count++;

        if (nota > maiorNota) {
            maiorNota = nota;
            strcpy(melhorAluno, nome);
        }
    }

    fclose(arquivo);

    if (count > 0) {
        float media = soma / count;

        printf("Media da turma: %.2f\n", media);
        printf("Aluno com maior nota: %s\n", melhorAluno);
        printf("Maior nota: %.2f\n", maiorNota);
    } else {
        printf("Nenhum dado encontrado no arquivo.\n");
    }

    return 0;
}