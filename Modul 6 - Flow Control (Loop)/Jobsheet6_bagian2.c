#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Jumlah baris yang ingin ditampilkan

    for (i = 1; i <= n; i++) { // Loop untuk setiap baris
        for (j = 1; j <= i; j++) { // Loop untuk mencetak bintang di setiap baris
            printf("*");
        }
        printf("\n"); // Pindah ke baris berikutnya setelah mencetak semua bintang di baris tersebut
    }

    return 0;
}