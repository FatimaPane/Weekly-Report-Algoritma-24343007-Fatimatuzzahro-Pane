#include <stdio.h>

// Fungsi untuk menghitung besar potongan diskon
double potong(double totalPembelian) {
	double diskon = 0;
	
	if (totalPembelian >= 3000000) {
		diskon = 0.35 * totalPembelian; // Diskon 35%
	} else if (totalPembelian >= 1000000) {
		diskon = 0.20 * totalPembelian; 
	}
	
	return diskon;
}

int main(){
	double totalPembelian;
	double diskon;
	double totalBayar;
	
	// Meminta input dari pengguna
	printf("Program Hitung Potongan\n");
	printf("Total Pembelian : Rp ");
	scanf("%lf", &totalPembelian);
	
	// Menghitung besar diskon
	diskon = potong(totalPembelian);
	
	// Menghitung total yang harus dibayarkan
	totalBayar = totalPembelian - diskon;
	
	//menampilkan hasil
	printf("Besar Diskon : Rp %.2f\n", diskon);
	printf("Besar Yang Harus Dibayarkan : Rp %.2f\n", totalBayar);
	
	return 0;
	}












