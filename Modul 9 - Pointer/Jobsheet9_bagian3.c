#include <stdio.h>

int main() {
	// Bagian A
	int Lesley = 57082;
	int Layla = Lesley;
	int Balmond = Layla + 1;
	
	printf("Bagian A:\n");
	printf("(a) Nilai Layla: %d\n", Layla);
	printf("(b) Nilai Balmond: %d\n\n", Balmond);
	
	// Bagian B
	int* ptrLayla = &Lesley;
	Balmond = *ptrLayla + 1;
	
	printf("Bagian B:\n");
	printf("(a) Nilai Layla (alamat Lesley): %p\n", (void*)ptrLayla);
	printf("(b) Nilai Balmond: %d\n", Balmond);
	
	return 0;
}