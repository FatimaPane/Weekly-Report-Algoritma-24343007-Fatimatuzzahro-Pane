#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk menyimpan data mahasiswa
typedef struct {
    char nama[50];
    char nim[20];
    char jurusan[50];
    char programStudi[50];
} Mahasiswa;

// Fungsi untuk memasukkan data mahasiswa
void inputDataMahasiswa(Mahasiswa *m) {
    printf("Nama: ");
    scanf(" %[^\n]%*c", m->nama); // Membaca nama dengan spasi
    printf("NIM: ");
    scanf("%s", m->nim);
    printf("Jurusan: ");
    scanf(" %[^\n]%*c", m->jurusan); // Membaca jurusan dengan spasi
    printf("Program Studi: ");
    scanf(" %[^\n]%*c", m->programStudi); // Membaca program studi dengan spasi
}

// Fungsi untuk menyimpan data mahasiswa ke file
void simpanDataKeFile(Mahasiswa *m, int count) {
    FILE *file = fopen("datamahasiswa.txt", "w");
    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "Nama: %s\nNIM: %s\nJurusan: %s\nProgram Studi: %s\n\n", 
                m[i].nama, m[i].nim, m[i].jurusan, m[i].programStudi);
    }

    fclose(file);
    printf("Data berhasil disimpan ke dalam file datamahasiswa.txt\n");
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

    simpanDataKeFile(mahasiswa, count);

    return 0;
}
