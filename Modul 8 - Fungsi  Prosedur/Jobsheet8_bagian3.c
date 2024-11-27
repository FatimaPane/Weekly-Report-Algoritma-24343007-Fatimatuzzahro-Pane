#include <stdio.h>
#define PI 3.14

// Fungsi untuk menghitung luas lingkaran
double luas(double radius) {
    return PI * radius * radius;
}

// Fungsi untuk menghitung keliling lingkaran
double keliling(double radius) {
    return 2 * PI * radius;
}

int main() {
    double radius;
    double luasLingkaran, kelilingLingkaran;

    // Meminta input dari pengguna
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%lf", &radius);

    // Menghitung luas dan keliling lingkaran
    luasLingkaran = luas(radius);
    kelilingLingkaran = keliling(radius);

    // Menampilkan hasil
    printf("Luas lingkaran: %.2f\n", luasLingkaran);
    printf("Keliling lingkaran: %.2f\n", kelilingLingkaran);

    return 0;
}
