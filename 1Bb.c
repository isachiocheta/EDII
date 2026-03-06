#include <stdio.h>

int main() {
    FILE *arq;
    int numeros[] = {10, 20, 30, 40, 50};
    int i;

    arq = fopen("numeros.bin", "wb");

    for(i = 0; i < 5; i++) {
        fwrite(&numeros[i], sizeof(int), 1, arq);
    }

    fclose(arq);

    printf("Arquivo binario criado.\n");

    return 0;
}