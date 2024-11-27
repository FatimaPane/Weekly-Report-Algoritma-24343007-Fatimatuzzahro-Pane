#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk menyimpan data mahasiswa
typedef struct {
    char npm[10];
    char nama[50];
    char tgl_lahir[12];
    char alamat[50];
    char hp[15];
} Mahasiswa;

// Fungsi untuk memasukkan data mahasiswa
void inputDataMahasiswa(Mahasiswa *m) {
    printf("NPM: ");
    scanf("%s", m->npm);
    printf("NAMA: ");
    scanf(" %[^\n]%*c", m->nama); // Membaca nama dengan spasi
    printf("TGL LAHIR (mm-dd-yyyy): ");
    scanf("%s", m->tgl_lahir);
    printf("ALAMAT: ");
    scanf(" %[^\n]%*c", m->alamat); // Membaca alamat dengan spasi
    printf("HP: ");
    scanf("%s", m->hp);
}

// Fungsi untuk menampilkan data mahasiswa
void tampilDataMahasiswa(Mahasiswa *m, int count) {
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < count; i++) {
        printf("%s %s %s %s %s\n", m[i].npm, m[i].nama, m[i].tgl_lahir, m[i].alamat, m[i].hp);
    }
}

int main() {
    Mahasiswa mahasiswa[100]; // Array untuk menyimpan data maksimal 100 mahasiswa
    int count = 0;
    char pilihan;

    do {
        printf("\nMasukkan data mahasiswa ke-%d:\n", count + 1);
        inputDataMahasiswa(&mahasiswa[count]);
        count++;

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &pilihan);
    } while (pilihan == 'y' || pilihan == 'Y');

    tampilDataMahasiswa(mahasiswa, count);

    return 0;
}
