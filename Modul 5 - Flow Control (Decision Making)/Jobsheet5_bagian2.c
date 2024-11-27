#include <stdio.h>

int main(){
	// Deklarasi variabel
	float total_belanja, diskon = 0, total_akhir;
	const int cashback = 5000;
	// Cashback tetap
	
	// Input total belanja dari user
	printf("Masukkan total belanja: Rp ");
	scanf("%f", &total_belanja);
	
	// Proses perhitungan diskon
	if (total_belanja <= 75000) {
		diskon = total_belanja * 0.05; // Diskon 5%
	} else if (total_belanja > 75000 && total_belanja <= 125000) {
		diskon = total_belanja * 0.15; // Diskon 15%
	} else if (total_belanja > 125000) {
		diskon = total_belanja * 0.25 + cashback; // Diskon 25% dan cashback Rp 5000
	}
	
	// Hitung total akhir
	total_akhir = total_belanja - diskon;
	
	// Output hasil
	printf("Total belanja sebelum diskon: Rp %.2f\n", total_belanja);
	printf("Total diskon: Rp %.2f\n", diskon);
	printf("Total yang harus dibayar: Rp %.2f\n", total_akhir);
	
	return 0;
}
