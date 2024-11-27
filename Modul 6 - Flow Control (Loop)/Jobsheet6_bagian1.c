#include <stdio.h>

int main() {
    // Menampilkan deret bilangan genap dari 0 hingga 50
    printf("Deret bilangan genap dari 0 hingga 50:\n");
    for (int i = 0; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Menampilkan deret bilangan ganjil dari 0 hingga 50
    printf("Deret bilangan ganjil dari 0 hingga 50:\n");
    for (int i = 0; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}