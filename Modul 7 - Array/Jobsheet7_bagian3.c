#include <stdio.h>
#include <string.h>

int main(){
	// Deklarasi variabel untuk username dan password
	char inputUsername[50];
	char inputPassword[50];
	
	// Username dan password yang benar
	const char correctUsername[] = "Fatima";
	const char correctPassword[] = "Fatimacantik";
	
	// Meminta pengguna untuk memasukkan username
	printf("Masukkan username: ");
	scanf("%s", inputUsername);
	
	// Meminta pengguna untuk memasukkan Password
	printf("Masukkan Password: ");
	scanf("%s", inputPassword);
	
	// Memeriksa apakah username dan password benar
	if (strcmp(inputUsername, correctUsername) == 0 && strcmp(inputPassword, correctPassword) == 0) {
		printf("Berhasil login\n");
	} else {
		printf("Password salah\n");
	}
	
	return 0;
}