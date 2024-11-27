#include <stdio.h>
#define PI 3.14   // Mendefinisikan konstanta PI
int main(){
// Deklarasi variabel
float diameter = 12.0;  
// Diameter bola (dalam cm)
float jari_jari, volume, luas_permukaan;

// Menghitung jari-jari bola
jari_jari = diameter / 2;

// Menghitung volume bola
volume = (4.0 / 3.0) * PI * jari_jari * jari_jari * jari_jari;

// Menghitung luas permukaan bola
luas_permukaan = 4 * PI * jari_jari * jari_jari;

// Menampilkan Output
printf("Bola dengan diameter %.2f cm memiliki:\n", diameter);
printf("Volume bola		: %.2f cm^3\n", volume),
printf("Luas permukaan bola : %.2f cm^2\n", luas_permukaan);

return 0;

}