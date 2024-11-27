#include <stdio.h>

int main(){
	// Deklarasi variabel
	float nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
	
	// Input nilai dari mahasiswa
	printf("Masukkan nilai Kehadiran (0-100): ");
	scanf("%f", &nilai_kehadiran);
	printf("Masukkan nilai Tugas (0-100): ");
	scanf("%f", &nilai_tugas);
	printf("Masukkan nilai UTS (0-100): ");
	scanf("%f", &nilai_uts);
	printf("Masukkan nilai UAS (0-100): ");
	scanf("%f", &nilai_uas);
	
	// Hitung nilai akhir berdasarkan bobot:
	nilai_akhir = (nilai_kehadiran * 0.20) + (nilai_tugas * 0.20) + (nilai_uts * 0.25) + (nilai_uas * 0.35);
	
	// Hitung nilai akhir 
	printf("Nilai Akhir: %.2f\n", nilai_akhir);
	
	// Menentukan dan dan menampilkan rentang nilai akhir dan keterangan lulus
	if (nilai_akhir >= 0 && nilai_akhir <= 44){
		printf("Grade: E\n");
		printf("Maaf, anda tidak lulus!\n");
	} else if (nilai_akhir >= 45 && nilai_akhir <= 55){
		printf("Grade: D\n");
		printf("Maaf, anda tidak lulus!\n");
	} else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
		printf("Grade: C\n");
		printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
	} else if (nilai_akhir >= 66 && nilai_akhir <= 75) {
		printf("Grade: B-\n");
		printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
	} else if (nilai_akhir >= 76 && nilai_akhir <= 80) {
		printf("Grade: B\n");
		printf("Anda lulus dengan baik, tingkatkan terua belajarnya!\n");
	} else if (nilai_akhir >= 81 && nilai_akhir <= 85) {
		printf("Grade: B+\n");
		printf("Anda lulus dengan baik, tingkatkan terus beljarnya!\n");
	} else if (nilai_akhir >= 86 && nilai_akhir <= 90) {
		printf("Grade: A-\n");
		printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
	} else if (nilai_akhir >= 91 && nilai_akhir <= 100) {
		printf("Grade: A\n");
		printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
	} else {
		printf("Nilai tidak valid.\n");
	}
	
	return 0;
	
}