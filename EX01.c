#include <stdio.h>

void copy_list(int original[], int size, int new_list[]) {

    for (int i = 0; i < size; i++) {
        new_list[i] = original[i];
    }
}

int main() {

    int original[] = {1, 2, 3, 4, 5};

    int size = sizeof(original) / sizeof(original[0]);

    int new_list[size];

    copy_list(original, size, new_list);

    printf("Nova lista: ");
    for (int i = 0; i < size; i++) {

        printf("%d ", new_list[i]);
    }
    printf("\n");

    return 0;
}
