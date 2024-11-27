#include <stdio.h>
int main(){
	// Deklarasi variabel
	int durasi;
	float tarif_pertama = 15000, tarif_selanjutnya, total_biaya;
	
	// Input durasi menonton
	printf("Masukkan durasi menonton (dalam jam): ");
	scanf("%d", &durasi);
	
	// Jika durasi 1 jam atau kurang, hanya dikenakan biaya tarif pertama
	if (durasi == 1){
		total_biaya = tarif_pertama;}
		
	// Jika durasi lebih dari 1 jam, maka hitung jam pertama dan selanjutnya
	else if (durasi > 1){
		tarif_selanjutnya = tarif_pertama * 0.5; // 50% dari tarif pertama
		total_biaya = tarif_pertama + (tarif_selanjutnya * (durasi - 1));}
		
	// Menampilkan total biaya
	printf("Total biaya sewa film untuk %d jam adalah: Rp %.2f\n", durasi, total_biaya);
	
	return 0;
	}