#include <stdio.h>
int main(){
	int total_detik, jam, menit, detik;
	
	// Input jumlah waktu menit ke dalam detik
	printf("Masukkan total waktu dalam detik: ");
	scanf("%d", &total_detik);
	
	// Menghitung jumlah jam
	jam = total_detik / 3600;
	
	// Menghitung sisa detik setelah diambil jam
	total_detik = total_detik % 3600;
	
	// Menghitung jumlah menit
	menit = total_detik / 60;
	
	// Menghitung sisa detik setelah diambil menit 
	detik = total_detik % 60;
	
	// Menampilkan output
	printf("%d jam, %d Menit, %d Detik\n", jam, menit, detik);
	
	return 0;
}