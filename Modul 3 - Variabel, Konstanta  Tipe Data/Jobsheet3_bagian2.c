#include <stdio.h>
int main(){
	// Deklarasi variabel
	float celcius, kelvin, fahrenheit, reamur;
	
	// Input suhu dalam Celcius
	printf("Masukkan suhu dalam Celcius: ");
	scanf("%f", &celcius);
	
	// Konversi ke Kelvin, Fahrenheit, dan Reamur
	kelvin = celcius + 273.15;
	fahrenheit = (celcius * 1.8) + 32;
	reamur = celcius * 0.8;
	
	// Menampilkan hasil konversi 
	printf("\nHasil konversi suhu;\n");
	printf("Suhu dalam Kelvin	: %.2f\n", kelvin);
	printf("Suhu dalam Fahrenheit : %.2f\n", fahrenheit);
	printf("Suhu dalam Reamur	: %.2f\n", reamur);
	
	return 0;
	 
}