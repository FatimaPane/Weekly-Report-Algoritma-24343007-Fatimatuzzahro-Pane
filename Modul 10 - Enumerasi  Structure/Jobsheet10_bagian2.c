#include <stdio.h>
#include <stdlib.h>

// Struktur untuk menyimpan rentang tanggal dan nama zodiak
typedef struct {
    int startDay;
    int startMonth;
    int endDay;
    int endMonth;
    char name[20];
} Zodiak;

// Fungsi untuk menentukan zodiak berdasarkan tanggal dan bulan lahir
int getZodiacIndex(int day, int month) {
    // Daftar zodiak beserta rentang tanggalnya
    Zodiak zodiacs[] = {
        {21, 3, 19, 4, "ARIES"},
        {20, 4, 20, 5, "TAURUS"},
        {21, 5, 20, 6, "GEMINI"},
        {21, 6, 22, 7, "CANCER"},
        {23, 7, 22, 8, "LEO"},
        {23, 8, 22, 9, "VIRGO"},
        {23, 9, 22, 10, "LIBRA"},
        {23, 10, 21, 11, "SCORPIO"},
        {22, 11, 21, 12, "SAGITTARIUS"},
        {22, 12, 19, 1, "CAPRICORN"},
        {20, 1, 18, 2, "AQUARIUS"},
        {19, 2, 20, 3, "PISCES"}
    };

    int numZodiacs = sizeof(zodiacs) / sizeof(zodiacs[0]);

    // Mencari zodiak berdasarkan tanggal dan bulan
    for (int i = 0; i < numZodiacs; i++) {
        if ((month == zodiacs[i].startMonth && day >= zodiacs[i].startDay) ||
            (month == zodiacs[i].endMonth && day <= zodiacs[i].endDay)) {
            return i;
        }
    }
    return -1; // Jika tanggal tidak cocok dengan rentang zodiak manapun
}

int main() {
    int day, month, year;

    // Meminta input tanggal lahir
    printf("Masukkan tanggal lahir Anda [tgl-bln-tahun]: ");
    scanf("%d-%d-%d", &day, &month, &year);

    // Menentukan zodiak
    int zodiacIndex = getZodiacIndex(day, month);
    Zodiak zodiacs[] = {
        {21, 3, 19, 4, "ARIES"},
        {20, 4, 20, 5, "TAURUS"},
        {21, 5, 20, 6, "GEMINI"},
        {21, 6, 22, 7, "CANCER"},
        {23, 7, 22, 8, "LEO"},
        {23, 8, 22, 9, "VIRGO"},
        {23, 9, 22, 10, "LIBRA"},
        {23, 10, 21, 11, "SCORPIO"},
        {22, 11, 21, 12, "SAGITTARIUS"},
        {22, 12, 19, 1, "CAPRICORN"},
        {20, 1, 18, 2, "AQUARIUS"},
        {19, 2, 20, 3, "PISCES"}
    };

    // Menampilkan hasil
    if (zodiacIndex != -1) {
        printf("Tanggal Lahir Anda [tgl-bln-tahun] : %02d-%02d-%d\n", day, month, year);
        printf("Zodiak Anda adalah : %s\n", zodiacs[zodiacIndex].name);
    } else {
        printf("Tanggal Lahir Anda [tgl-bln-tahun] : %02d-%02d-%d\n", day, month, year);
        printf("Zodiak Anda tidak ditemukan.\n");
    }

    return 0;
}
