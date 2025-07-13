#include <stdio.h>

#define MAX_DURIAN 100

typedef struct {
    int jumlah;
    int berat[MAX_DURIAN];
    int cari;
} datadurian;

void sort(datadurian *d);
int counting(datadurian *d);
void inputarray(datadurian *d);
void writearray(datadurian *d);
void scanN(int *n);
void readCari(datadurian *d);
void displayResult(int jumlah);

int main() {
    datadurian d;

    scanN(&d.jumlah);
    inputarray(&d);
    readCari(&d);

    sort(&d);
    int jumlah = counting(&d);
    writearray(&d);

    displayResult(jumlah);
    return 0;
}

/* Deskripsi: Membaca jumlah durian dari input pengguna atau baris ke 1
   Initial State: datadurian.jumlah belum terisi
   Final State: datadurian.jumlah terisi
   Deklarasi:
   n: datadurian passing by address (pointer)
   variabel lokal:
*/
void scanN(int *d) {
    scanf("%d", d);
}

/*
  Deskripsi: Membaca kumpulan berat durian dan menyimpannya ke dalam array.
  Initial State: Array berat belum diisi.
  Final State: Array berat diisi dengan input pengguna.
  Deklarasi:
    d: pointer ke datadurian (passing by address).
*/
void inputarray(datadurian *d) {
    for (int i = 0; i < d->jumlah; i++) {
        scanf("%d", &d->berat[i]);
    }
}

/*
  Deskripsi: Membaca nilai berat durian yang ingin dicari dari input pengguna.
  Initial State: datadurian.cari belum terisi.
  Final State: datadurian.cari terisi dengan input pengguna.
  Deklarasi:
    d: pointer ke datadurian (passing by address).
*/
void readCari(datadurian *d) {
    scanf("%d", &d->cari);
}

/*
  Deskripsi: Mengurutkan array berat durian menggunakan algoritma bubble sort.
  Initial State: Array berat dalam urutan acak.
  Final State: Array berat diurutkan dalam urutan menaik.
  Deklarasi:
    d: pointer ke datadurian (passing by address).
  Variabel Lokal:
    - int temp: variabel lokal integer
*/
void sort(datadurian *d) {
    int temp;
    for (int i = 0; i < d->jumlah - 1; i++) {
        for (int j = 0; j < d->jumlah - i - 1; j++) {
            if (d->berat[j] > d->berat[j + 1]) {
                temp = d->berat[j + 1];
                d->berat[j + 1] = d->berat[j];
                d->berat[j] = temp;
            }
        }
    }
}

/*
  Deskripsi: Menghitung berapa banyak durian yang memiliki berat yang dicari.
  Initial State: nilai cari belum diketahui.
  Final State: Mengembalikan jumlah durian yang ditemukan dengan berat yang dicari.
  Deklarasi:
    d: pointer ke datadurian (passing by address).
  Variabel Lokal:
    - int jumlah: variabel lokal bertipe integer
*/
int counting(datadurian *d) {
    int jumlah = 0;
    for (int i = 0; i < d->jumlah; i++) {
        if (d->berat[i] == d->cari) {
            jumlah++;
        }
    }
    return jumlah;
}

/*
  Deskripsi: Menampilkan berat durian yang telah disorting
  Initial State: Array berat belum ditampilkan setelah disorting
  Final State: Array berat ditampilkan setelah disorting
  Deklarasi:
    d: pointer ke datadurian (passing by address).
*/
void writearray(datadurian *d) {
    for (int i = 0; i < d->jumlah; i++) {
        printf("%d ", d->berat[i]);
    }
    printf("\n");
}

/*
  Fungsi: displayResult
  Deskripsi: Menampilkan hasil pencarian jumlah durian yang memiliki berat yang dicari.
  Initial State: jumlah durian yang ditemukan belum ditampilkan.
  Final State: Hasil pencarian ditampilkan ke layar.
  Deklarasi:
    jumlah: integer (passing by value).
 */
void displayResult(int jumlah) {
    if (jumlah > 0) {
        printf("%d", jumlah);
    } else {
        printf("tidak ditemukan\n");
    }
}