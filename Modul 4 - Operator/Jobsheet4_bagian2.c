#include <stdio.h>
#include <string.h>

int main() {
    // Deklarasi variabel
    char nama_pembeli[50], nama_barang[50];
    int jumlah_barang;
    float harga_satuan, harga_total;

    // Input nama pembeli
    printf("Masukkan nama pembeli: ");
    fgets(nama_pembeli, sizeof(nama_pembeli), stdin);
    // Menghapus karakter newline jika ada
    nama_pembeli[strcspn(nama_pembeli, "\n")] = 0;

    // Input nama barang
    printf("Masukkan nama barang: ");
    fgets(nama_barang, sizeof(nama_barang), stdin);
    // Menghapus karakter newline jika ada
    nama_barang[strcspn(nama_barang, "\n")] = 0;

    // Input harga satuan barang
    printf("Masukkan harga barang per satuan: ");
    scanf("%f", &harga_satuan);

    // Input jumlah barang
    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlah_barang);

    // Menghitung harga total
    harga_total = harga_satuan * jumlah_barang;

    // Menampilkan hasil
    printf("\n--- Struk Pembelian ---\n");
    printf("Nama Pembeli        : %s\n", nama_pembeli);
    printf("Nama Barang         : %s\n", nama_barang);
    printf("Harga Satuan Barang : %.2f\n", harga_satuan);
    printf("Jumlah Barang       : %d\n", jumlah_barang);
    printf("Harga Total         : %.2f\n", harga_total);

    return 0;
}
