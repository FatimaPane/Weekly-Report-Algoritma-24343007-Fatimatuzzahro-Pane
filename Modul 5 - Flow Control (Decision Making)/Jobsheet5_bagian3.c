#include <stdio.h>
#include <math.h>  // Untuk konstanta M_PI

int main(){
	int pilihan;
	float luas_permukaan;
	
	// Menu pilihan
	printf("Pilih bentuk yang akan dihitung luas permukaannya:\n");
	printf("1. Bola\n");
	printf("2. Kubus\n");
	printf("3. Balok\n");
	printf("4. Tabung\n");
	printf("Masukkan pilihan anda (1-4): ");
	scanf("%d", &pilihan);
	
	switch (pilihan) {
		case 1: {
			// Luas permukaan Bola = 4 * PI * r^2
			float jari_jari;
			printf("Masukkan jari-jari bola: ");
			scanf("%f", &jari_jari);
			luas_permukaan = 4 * M_PI * jari_jari * jari_jari;
			printf("Luas permukaan bola adalah: %.2f\n", luas_permukaan);
			break;
		}
		case 2: {
			// Luas permukaan kubus = 6 * s^2
			float sisi;
			printf("Masukkan panjang sisi kubus: ");
			scanf("%f", &sisi);
			luas_permukaan = 6 * sisi * sisi;
			printf("Luas permukaan kubus adalah: %.2f\n", luas_permukaan);
			break;
		}
		case 3: {
			// Luas permukaan balok = 2 * (p * l + p * t + l * t)
			float panjang, lebar, tinggi;
			printf("Masukkan panjang balok: ");
			scanf("%f", &panjang);
			printf("Masukkan lebar balok: ");
			scanf("%f", &lebar);
			printf("Masukkan tinggi balok: ");
			scanf("%f", &tinggi);
			luas_permukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
			printf("Luas permukaan balok adalah: %.2f\n", luas_permukaan);
			break;
		}
		case 4: {
			// Luas permukaan tabung = 2 * M_PI * r * (r + t)
			float jari_jari, tinggi;
			printf("Masukkan jari-jari tabung: ");
			scanf("%f", &jari_jari);
			printf("Masukkan tinggi balok: ");
			scanf("%f", &tinggi);
			luas_permukaan = 2 * M_PI * jari_jari * (jari_jari + tinggi);
			printf("Luas permukaan tabung adalah: %.2f\n", luas_permukaan);
			break;
		}
		default:
			printf("Pilihan tidak valid. Silakan pilih antara 1-4.\n");
	}
	
	return 0;
	
}