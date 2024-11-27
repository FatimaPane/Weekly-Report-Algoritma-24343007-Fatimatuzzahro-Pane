#include <stdio.h>

int main() {
	// Deklarasi variabel
	int nilai[20];
	int jumlahMahasiswa = 20;
	int totalNilai = 0;
	float rataRata;
	
	// Meminta pengguna untuk memasukkan nilai mahasiswa
	printf("Masukkan nilai dari 260 Mahasiswa:\n");
	for (int i = 0; i < jumlahMahasiswa; i++) {
		printf("Nilai mahasiswa ke-%d: ", i + 1);
		scanf("%d", &nilai[i]);
		totalNilai += nilai[i]; // Menambahkan nilai ke total
	}
	
	// Menghitung rata-rata
	rataRata = (float)totalNilai / jumlahMahasiswa;
	
	// Menampilkan hasil
	printf("Rata-rata nilai dari 20 mahasiswa adalah: %.2f\n", rataRata);
	
	return 0;
}