#include <stdio.h>
int main() {
	// Deklarasi vaiabel untuk menyimpan nilai-nilai
	float presensi, praktek, uts, uas, nilai_akhir;
	
	//Masukkan nilai 
	presensi = 85;
	praktek = 65;
	uts = 80;
	uas = 75;
	
	// Menghitung nilai akhir berdasarkan bobot yang diberikan
	nilai_akhir = (presensi * 0.10) + (praktek * 0.20) + (uts * 0.30) + (uas * 0.40);
	
	// Menampilkan hasil nilai akhir
	printf("Nilai Akhir Praktikum: %.2f\n", nilai_akhir);
	
	return 0;
}