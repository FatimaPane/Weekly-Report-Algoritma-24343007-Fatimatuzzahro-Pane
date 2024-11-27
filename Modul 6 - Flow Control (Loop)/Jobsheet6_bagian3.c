#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) { // Loop untuk setiap baris
        for (j = 1; j <= i; j++) { // Loop untuk setiap kolom dalam baris
            printf("%d ", i * j); // Cetak hasil perkalian i dan j
        }
        printf("\n"); // Pindah ke baris berikutnya setelah mencetak semua kolom di baris tersebut
    }

    return 0;
}