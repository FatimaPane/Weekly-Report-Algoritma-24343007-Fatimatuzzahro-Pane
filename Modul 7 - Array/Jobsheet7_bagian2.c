#include <stdio.h>
#include <stdlib.h>

int main(){
	int jumlahMahasiswa;
	char **namaMahasiswa;
	
	// Meminta pengguna untuk memasukkan jumlah mahasiswa
	printf("Input banyak siswa: ");
	scanf("%d", &jumlahMahasiswa);
	
	// Alokasi memori untuk array pointer yang akan menampung nama mahasiswa 
	namaMahasiswa = (char**)malloc(jumlahMahasiswa * sizeof(char *));
	
	// Meminta pengguna untuk memasukkan nama setiap mahasiswa
	for (int i = 0; i < jumlahMahasiswa; i++) {
		// Alokasi memori untuk setiap nama mahasiswa
		namaMahasiswa[i] = (char *)malloc(100 * sizeof(char)); // Asumsi nama tidak lebih dari 100 karakter
		
		printf("Input nama mahasiswa %d: ", i + 1);
		scanf(" %[^\n]", namaMahasiswa[i]); // Membaca input termasuk spasi
	}
	
	// Menampilkan nama-nama mahasiswa yang telah diiinput
	printf("\nNama mahasiswa yang telah diinput: \n");
	for (int i = 0; i < jumlahMahasiswa; i++) {
		printf("Nama mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
	}
	
	// Menghapus alokasi memori
	for (int i = 0; i < jumlahMahasiswa; i++) {
		free(namaMahasiswa[i]);
	}
	free(namaMahasiswa);
	
	return 0;
}


