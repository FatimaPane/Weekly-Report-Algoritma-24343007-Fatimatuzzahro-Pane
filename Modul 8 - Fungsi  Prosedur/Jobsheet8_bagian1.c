#include <stdio.h>

// Fungsi rekursif untuk menghitung hasil perkalian dengan penjumlahan berulang
int perkalianRekursif(int a, int b) {
	if (b == 0) {
		return 0; // Basis rekursif: jika b adalah 0, hasilnya adalah 0
	} else {
		return a + perkalianRekursif(a, b - 1); // Rekurens: tambahkan a dengan hasil perkalian (a, b-1)
	}
}

int main() {
	int a, b;
	int hasil;
	
	// Meminta input dari pengguna
	printf("Masukkan bilangan pertama: ");
	scanf("%d", &a);
	printf("Masukkan bilangan kedua: ");
	scanf("%d", &b);
	
	// Memanggil fungsi rekursif untuk menghitung hasil perkalian
	hasil = perkalianRekursif(a, b);
	
	// Menampilkan hasil
	printf("Hasil dari %d x %d adalah: %d\n", a, b, hasil);
	
	return 0;	
}


