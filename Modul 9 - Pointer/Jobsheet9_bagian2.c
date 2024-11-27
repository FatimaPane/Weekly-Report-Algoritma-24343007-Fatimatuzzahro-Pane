#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

void reverseString(char* str) {
	int len = strlen(str);
	char temp;
	for (int i = 0; i < len / 2; i++) {
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

int main() {
	char input[MAX_LENGTH];
	
	// Meminta input dari pengguna
	printf("Masukkan sebuah kalimat: ");
	fgets(input, MAX_LENGTH, stdin);
	
	// Menghilang newline karakter di akhir input
	input[strcspn(input, "\n")] = '\0';
	
	// Membalikkan string
	reverseString(input);
	
	// Menampilkan hasil
	printf("Kebalikannya: %s\n", input);
	
	return 0;
}











