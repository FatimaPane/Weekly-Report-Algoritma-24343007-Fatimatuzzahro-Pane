#include <stdio.h>
int main(){
	// Deklarasi variabel
	float rupiah, dollar;
	const float kurs = 14250; 
	// Kurs 1 Dollar = Rp 14.250
	
	// Input jumlah rupiah
	printf("Masukkan jumlah Rupiah: ");
	scanf("%f", &rupiah);
	
	// Konversi ke Dollar
	dollar = rupiah / kurs;
	
	// Output hasil konversi
	printf("Jumlah Dollar yang didapat dari %.2f adalah: $%.2f\n", rupiah, dollar);
	
	return 0;
}