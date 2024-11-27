#include <stdio.h>
int main(){
	//Deklarasi variabel untuk panjang, lebar, dan luas persegi panjang
	float panjang = 10.0;
	float lebar = 5.0;
	float luas;
	
	//Menghitung luas persegi panjang
	luas = panjang * lebar;
	
	//Menampilkan hasil
	printf("luas persegi panjang dengan panjang %.2f cm dan lebar adalah %.2f cm^2\n",panjang, lebar, luas);
	
	return 0;
	
}