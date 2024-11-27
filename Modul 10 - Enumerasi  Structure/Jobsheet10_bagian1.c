#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame() {
	int number, guess, attempts = 0;
	char playAgain;
	
	// Generate a random number between 1 and 20
	srand(time(NULL));
	number = rand() % 20 + 1;
	
	printf("Saya telah memilih sebuah nomor antara 1 dan 20.\n");
	
	do {
		attempts++;
		printf("Tebakan anda: ");
		scanf("%d", &guess);
		
		if (guess < number) {
			printf("Nomor saya lebih besar!\n");
		} else if (guess > number) {
			printf("Nomor saya lebih kecil!\n");
		} else {
			printf("Selamat, anda benar! Nomor yang saya pilih adalah %d.\n", number);
			printf("Anda membutuhkan %d percobaan untuk menebaknya.\n", attempts);
			break;
		}
	} while (guess != number);
	
	// Ask if the player wants to play again
	printf("Apakah Anda ingin bermain lagi? (y/n): ");
	scanf(" %c", &playAgain); // Notice the space before %c to consume the newline character
	
	if (playAgain == 'y' || playAgain == 'Y') {
		playGame();
	} else {
		printf("Terima kasih telah bermain!\n");
	}
}

int main() {
	playGame();
	return 0;
}











