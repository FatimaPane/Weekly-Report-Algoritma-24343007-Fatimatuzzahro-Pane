#include <stdio.h>
int main(){
	//Deklarasi variabel untuk alas, tinggi, dan luas segitiga
	float alas = 8.0;
	float tinggi = 5.0;
	float luas;
	
	//Menghitung luas segitiga
	luas = 0.5 * alas * tinggi;
	
	//Menampilkan hasil
	printf("luas segitiga dengan alas %.2f cm dan tinggi %.2f cm adalah %.2f cm^2\n", alas, tinggi, luas);
	
	return 0;
	
}