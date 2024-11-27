#include <stdio.h>

int main(){
	int pilihan;
	float bil1, bil2, hasil;
	
	// Menampilkan menu operasional
	printf("Program Kalkulator Sederhana\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n");
	printf("5. Hasil Bagi (Modulus)\n");
	printf("Pilih operasi yang diinginkan (1-5): ");
	scanf("%d", &pilihan);
	
	// Meminta input dua bilangan
	printf("Masukkan bilangan pertama: ");
	scanf("%f", &bil1);
	printf("Masukkan bilangan kedua: ");
	scanf("%f", &bil2);
	
	// Switch case untuk memilih operasi
	switch (pilihan){
		case 1:
			hasil = bil1 + bil2;
			printf("Hasil Penjumlahan: %.2f\n", hasil);
			break;
		case 2:
			hasil = bil1 - bil2;
			printf("Hasil Pengurangan: %.2f\n", hasil);
			break;
		case 3:
			hasil = bil1 * bil2;
			printf("Hasil Perkalian: %.2f\n", hasil);
			break;
		case 4:
			if(bil2 != 0){
				hasil = bil1 / bil2;
				printf("Hasil Pembagian: %.2f\n", hasil);		
			} else {
				printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
			}
			break;
		case 5:
			if((int)bil2 != 0){
				int modulus = (int)bil1 % (int)bil2;
				printf("Hasil Modulus: %d\n", modulus);
			} else {
				printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
			}
			break;
		default:
			printf("Operasi tidak valid.\n");
			break;
	}
	
	return 0;
	
}