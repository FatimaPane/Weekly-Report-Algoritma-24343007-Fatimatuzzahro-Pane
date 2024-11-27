#include <stdio.h>

int main() {
	char nama[30]; // Variabel untuk menyimpan nama pengguna
	
	// Menampilkan pesan untuk meminta input nama
	printf("Hello, siapa nama lengkapmu?\n");
	
	// Mengambil input nama dari pengguna
	fgets(nama, sizeof(nama), stdin); 
	// Menggunakan fgets
	
	// Menampilkan pesan selamat datang
	printf("Selamat Datang %s dalam Pemrograman C!\n", nama);
	
	return 0;
}