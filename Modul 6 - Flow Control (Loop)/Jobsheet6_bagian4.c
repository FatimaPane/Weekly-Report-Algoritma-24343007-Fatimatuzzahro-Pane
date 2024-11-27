#include <stdio.h>

void cek_saldo(int saldo) {
    printf("Saldo Anda saat ini adalah: Rp. %d\n", saldo);
}

int setoran(int saldo) {
    int jumlah;
    printf("Masukkan jumlah setoran: ");
    scanf("%d", &jumlah);
    saldo += jumlah;
    printf("Setoran berhasil. ");
    cek_saldo(saldo);
    return saldo;
}

int penarikan(int saldo) {
    int jumlah;
    printf("Masukkan jumlah penarikan: ");
    scanf("%d", &jumlah);
    if (saldo - jumlah < 50000) {
        printf("Saldo tidak mencukupi untuk penarikan ini. Saldo minimal Rp. 50.000 harus disisakan.\n");
    } else {
        saldo -= jumlah;
        printf("Penarikan berhasil. ");
        cek_saldo(saldo);
    }
    return saldo;
}

int main() {
    int pilihan;
    int saldo = 175000;
    
    do {
        printf("\nATM\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        
        switch (pilihan) {
            case 1:
                cek_saldo(saldo);
                break;
            case 2:
                saldo = setoran(saldo);
                break;
            case 3:
                saldo = penarikan(saldo);
                break;
            case 4:
                printf("Terima kasih telah menggunakan layanan ATM.\n");
                break;
            
			default:
				printf("Pilihan tidak valid. Silakan coba lagi.\n")    
        }
    } while (pilihan != 4);
    
    return 0;
}