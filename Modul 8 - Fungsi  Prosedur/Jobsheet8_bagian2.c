#include <stdio.h>

// Fungsi untuk penjumlahan
float penjumlahan(float a, float b) {
	return a + b;
}

// Fungsi untuk pengurangan
float pengurangan(float a, float b) {
	return a - b;
}

// Fungsi untuk perkalian
float perkalian(float a, float b) {
	return a * b;
}

// Fungsi untuk pembagian
float pembagian(float a, float b) {
	if (b != 0) {
		return a / b;
	} else {
		printf("Kesalahan: Pembagian dengan nol tidak diizinkan.\n");
		return 0;
	}
}

int main(){
	float a, b;
	int pilihan;
	float hasil;
	
	// Meminta input dari pengguna
	printf("Masukkan bilangan pertama: ");
	scanf("%f", &a);
	printf("Masukan bilangan kedua: ");
	scanf("%f", &b);
	
	// Menu untuk memilih operasi aritmetika
	printf("\nPilih operasi aritmetika:\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n");
	printf("Masukkan pilihan (1-4): ");
	scanf("%d", &pilihan);
	
	// Menghitung hasil berdasarkan pilihan pengguna
	switch (pilihan) {
		case 1:
			hasil = penjumlahan(a, b);
			printf("Hasil penjumlahan: %.2f\n", hasil);
			break;
		case 2:
			hasil = pengurangan(a, b);
			printf("Hasil pengurangan: %.2f\n", hasil);
			break;
		case 3:
			hasil = perkalian(a, b);
			printf("Hasil perkalian: %.2f\n", hasil);
			break;
		case 4:
			hasil = pembagian(a, b);
			printf("Hasil pembagian: %.2f\n", hasil);
			break;
		default:
			printf("Pilihan tidak valid.\n");
			break;
	}
	
	return 0;
}
